#invlude<linux/module.h>
#include<linux/kernel.h>
#invlude<linux/kthread.h>
#include<linux/sched.h>
#invlude<linux/time.h>

int  init_module(void)
{

int p;
int q = 5;
int r = 3;
p = q+r

printk(KERN_INFO " The sum of the numbers is %d\n", p);

return 0;
}
void cleanuo\p_module(void){
printk(KERN_INFO"BYE\n");
}
