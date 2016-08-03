TARGET = transcall
KSRCS = syscalls.c
SRCS = transcall.cc

TOP = ..

include $(TOP)/build/config
include $(TOP)/build/build-$(OSVER)

ASPECT0 = Introspect.ah

all: $(TARGET)

$(TARGET): $(OBJS) $(OSDIR)/libos.a $(LDS)
	g++ -g -o $@ $(OBJS) $(LDS) $(LDFLAGS)

$(ASPECT): $(OSDIR)/$(ASPECT) $(OSDIR)/$(ASPECT0)
	cp -f $(OSDIR)/$(ASPECT) .
	cp -f $(OSDIR)/$(ASPECT0) .

clean:
	rm -f $(TARGET) $(OBJS) *.o $(ACCS) $(CXXS) $(LOGS) $(ASPECT)
