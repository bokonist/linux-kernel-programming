#obj-m specifies which file to make
obj-m += helloworld.o

# $(uname-r) will give the currently running kernel.
KERNELDIR := /lib/modules/$(shell uname -r)/build

#commands to make and clean
#M is a variable assigned to the execution of make. If make executes a Makefile script, this script can read the variable M and use its contents.
#make will read Makefile in $(KERNELDIR) and assign your present working directory $(PWD) to variable M. 
#Typically, this will allow for make to return to your current directory after processing Makefile.

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean