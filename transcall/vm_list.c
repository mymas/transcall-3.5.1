#include<stdio.h>
#include<stdlib.h>

struct VM_LIST{
	unsigned long target_domain_tag;
	unsigned short target_host_id;
	unsigned long target_cr3;
	unsigned long target_ept;
	struct VM_LIST *next;
};

struct VM_LIST *VM_TOP = NULL;
typedef int VM_NUM;
typedef struct VM_LIST *VM_LIST_POS;
#define VM_LIST_TAIL NULL

void VM_list_init(void){
	while(VM_TOP != VM_LIST_TAIL){
		struct VM_LIST *delete_pos = VM_TOP;
		VM_TOP = VM_TOP->next;
		free(delete_pos);
	}

}

VM_LIST_POS VM_list_top(void){
	return VM_TOP;
}

VM_LIST_POS VM_list_next(VM_LIST_POS pos){
	if(pos != VM_LIST_TAIL){
		return pos->next;
	}else{
		return VM_LIST_TAIL;
	}
}

struct VM_LIST * VM_list_search_by_domid(unsigned short dom_id){
	struct VM_LIST *p;
	for(p = VM_TOP; p!= VM_LIST_TAIL; p=p->next){
		if(p->target_domain_tag == dom_id){
			return p;
		}
		//	printf("dom_id %d cr3 %lx ept %lx\n",p->target_domain_id,p->target_cr3,p->target_ept);
	}
}

struct VM_LIST * VM_list_search_by_ept(unsigned long dom_ept){
	struct VM_LIST *p;
	for(p = VM_TOP; p!= VM_LIST_TAIL; p=p->next){
		if(p->target_ept == dom_ept){
			return p;
		}
	}
	return NULL;
}

void VM_list_update(unsigned long dom_cr3, unsigned long dom_ept){
	struct VM_LIST *p;
	p = VM_list_search_by_ept(dom_ept);
	if(p){
		p->target_cr3 = dom_cr3;
		return;
	}else{
		return;
	}
}

#ifdef before_source
void VM_list_add(int dom_id,unsigned long cr3, unsigned long ept){
	if(VM_TOP == VM_LIST_TAIL){
		VM_TOP = (struct VM_LIST *)malloc(sizeof(struct VM_LIST));
		VM_TOP->target_domain_tag = dom_id;
		VM_TOP->target_cr3 = cr3;
		VM_TOP->target_ept = ept;
		VM_TOP->next = VM_LIST_TAIL;
	}else{
		struct VM_LIST *p = VM_TOP;
		while(p->next != VM_LIST_TAIL){
			p = p->next;
		}
		p->next = (struct VM_LIST *)malloc(sizeof(struct VM_LIST));
		p->next->target_domain_tag = dom_id;
		p->next->target_cr3 = cr3;
		p->next->target_ept = ept;
		p->next->next = VM_LIST_TAIL;
	}
}

#endif /* before_source */

void VM_list_add(unsigned long cr3, unsigned long ept, unsigned short target_host_id){
	if(VM_TOP == VM_LIST_TAIL){
		VM_TOP = (struct VM_LIST *)malloc(sizeof(struct VM_LIST));
		VM_TOP->target_domain_tag = 0;
		VM_TOP->target_cr3 = cr3;
		VM_TOP->target_ept = ept;
		VM_TOP->target_host_id = target_host_id;
		VM_TOP->next = VM_LIST_TAIL;
	}else{
		struct VM_LIST *p = VM_TOP;
		while(p->next != VM_LIST_TAIL){
			p = p->next;
		}
		VM_TOP = (struct VM_LIST *)malloc(sizeof(struct VM_LIST));
		p->next->target_domain_tag = 0;
		p->next->target_cr3 = cr3;
		p->next->target_ept = ept;
		p->next->target_host_id = target_host_id;
		p->next->next = VM_LIST_TAIL;
	}
}

void VM_list_count(void){
	struct VM_LIST *p;
	for(p = VM_TOP; p!= VM_LIST_TAIL; p=p->next){
		printf("dom_tag %lx cr3 %lx ept %lx\n",p->target_domain_tag,p->target_cr3,p->target_ept);
	}

}

struct VM_LIST * VM_list_update_tag(unsigned long vm_tag ,unsigned long target_eptp){
	struct VM_LIST *p;
	for(p = VM_TOP; p!= VM_LIST_TAIL; p=p->next){
		if(p->target_ept == target_eptp){
			p->target_domain_tag = vm_tag;
			return p;
		}
	}
	return 0;
}

struct VM_LIST * VM_list_search_by_dom_tag(unsigned long dom_tag){
	struct VM_LIST *p;
	for(p = VM_TOP; p!= VM_LIST_TAIL; p=p->next){
		if(p->target_domain_tag == dom_tag){
			return p;
		}
	}
	return NULL;
}


