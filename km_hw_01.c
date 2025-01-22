/*  km_hw_01.c - kernel module hello world 01 */
#include <linux/module.h>	
#include <linux/kernel.h>	/* KERN_INFO */
#include <linux/init.h>		/* MACROS at bottom module_init... */
int init_km_hw_01(void) {
	printk(KERN_INFO "init_km_hw_01()\n");
	return 0;
}
void exit_km_hw_01(void) {
	printk(KERN_INFO "exit_km_hw_01()\n");
}
module_init(init_km_hw_01);
module_exit(exit_km_hw_01);
MODULE_LICENSE("gpl"); /* must supply a license - must be full caps */
