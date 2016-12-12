#include <linux/kernel.h> // need this for the KERN_DEBUG thingy
#include <linux/module.h> // include this for all kernel modules.
#include <linux/init.h> // for __init and __exit macros used

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jay");
MODULE_DESCRIPTION("printing messages to kernel debug log level");

static int __init debugger_init(void)
{
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void __exit debugger_exit(void)
{
	printk(KERN_DEBUG "Exiting..\n");
}

module_init(debugger_init);
module_exit(debugger_exit);

/*
about __init and __exit,

These are macros to locate some parts of the linux code into special areas in the final executing binary. __init, 
instructs the compiler to mark this function in a special way. 
At the end the linker collects all functions with this mark at the end (or begin) of the binary file.
When the kernel starts, this code runs only once (initialization). After it runs, the kernel can free this memory to reuse it.

*/