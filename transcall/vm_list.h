struct VM_LIST{
	unsigned long target_domain_tag;
	unsigned short target_host_id;
	unsigned long target_cr3;
	unsigned long target_ept;
	struct VM_LIST *next;
};

//typedef struct VM_LIST *VM_LIST_POS;
//
//void VM_list_init(void);
//VM_LIST_POS VM_list_top(void);
//VM_LIST_POS VM_list_next(VM_LIST_POS pos);
//struct VM_LIST * VM_list_search_by_dom_tag(unsigned long dom_tag);
//struct VM_LIST * VM_list_search_by_ept(unsigned long dom_ept);
//void VM_list_add(unsigned long cr3, unsigned long ept, unsigned short target_host_id);
//void VM_list_count(void);
//void VM_list_update(unsigned long dom_cr3, unsigned long dom_ept);
//struct VM_LIST * VM_list_update_tag(unsigned long vm_tag ,unsigned long target_eptp);
//struct VM_LIST * VM_list_search_by_dom_tag(unsigned long dom_tag);
