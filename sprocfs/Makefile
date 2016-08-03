TARGET = shadow_procfs
KSRCS = retriever.c
SRCS = shadow_procfs.cc

TOP = ..

include $(TOP)/build/config
include $(TOP)/build/build-$(OSVER)

ASPECT0 = Introspect.ah

CCFLAGS += $(shell pkg-config fuse --cflags)
LDFLAGS += $(shell pkg-config fuse --libs)

all: $(TARGET)

$(TARGET): $(OBJS) $(OSDIR)/libos.a $(LDS)
	g++ -g -o $@ $(OBJS) $(LDS) $(LDFLAGS)

$(ASPECT): $(OSDIR)/$(ASPECT) $(OSDIR)/$(ASPECT0)
	cp -f $(OSDIR)/$(ASPECT) .
	cp -f $(OSDIR)/$(ASPECT0) .

clean:
	rm -f $(TARGET) $(OBJS) *.o $(ACCS) $(CXXS) $(LOGS) $(ASPECT)
