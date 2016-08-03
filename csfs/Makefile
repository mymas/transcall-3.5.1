TARGET = csfs
KSRCS = kcache.c
SRCS = csfs.cc permchain.cc userinfo.cc misc.cc strset.cc

TOP = ..

include $(TOP)/build/config
include $(TOP)/build/build-$(OSVER)

ASPECT0 = Introspect.ah

CCFLAGS += -I. $(shell pkg-config fuse --cflags) -DFUSE_USE_VERSION=25
LDFLAGS += $(shell pkg-config fuse --libs)

all: $(TARGET)

$(TARGET): $(OBJS) $(OSDIR)/libos.a $(LDS)
	g++ -g -o $@ $(OBJS) $(LDS) $(LDFLAGS)

$(ASPECT): $(OSDIR)/$(ASPECT) $(OSDIR)/$(ASPECT0)
	cp -f $(OSDIR)/$(ASPECT) .
	cp -f $(OSDIR)/$(ASPECT0) .

clean:
	rm -f $(TARGET) $(OBJS) *.o $(ACCS) $(CXXS) $(LOGS) $(ASPECT)
