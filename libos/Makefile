TOP = ..

include $(TOP)/build/config

SUBDIRS = common $(OSVER)

.PHONY: all $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	make -C $@

clean:
	make -C common clean
	make -C $(OSVER) clean
