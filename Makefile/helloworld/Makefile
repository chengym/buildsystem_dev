PWD := $(shell pwd)

obj-m := helloworld.o

KDIR=/lib/modules/$(shell uname -r)/build
ARCH=x86_64
CROSS_COMPILE=

EXTRA_CFLAGS += -Wall -O2

default:
	$(MAKE) -C $(KDIR) M=$(PWD) CWD=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) CWD=$(PWD) clean

