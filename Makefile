SUBDIRS = libos sprocfs transcall csfs

.PHONY: all $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	make -C $@

clean:
	make -C libos clean
	make -C sprocfs clean
	make -C transcall clean
	make -C csfs clean
