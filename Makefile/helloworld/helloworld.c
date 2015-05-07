#include <linux/module.h>
#include <linux/init.h>

static int helloworld_init(void)
{
    printk(KERN_INFO "module init %s\n", __func__);
    return 0;
}

static void helloworld_cleanup(void)
{
    printk(KERN_INFO "module cleanup %s\n", __func__);
    return;
}

module_init(helloworld_init);
module_exit(helloworld_cleanup);
