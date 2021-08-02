//
// Created by wy on 2021/8/2.
//

#ifndef UNTITLED5_PROC_H
#define UNTITLED5_PROC_H




#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/uaccess.h>

static char kbuf[128] = {0};
static struct semaphore sem;
//read operation
static ssize_t proc_file_read(struct file *file, char __user *buf,
size_t size, loff_t *ppos)
{
copy_to_user(buf , kbuf , strlen(kbuf));
printk("read......\n");
up(&sem); //1
return strlen(kbuf);
}
//write opertion
static ssize_t proc_file_write(struct file *file, const  char __user *buf,
size_t count, loff_t *ppos)
{
down(&sem); // 0
printk("write......\n");
copy_from_user(kbuf , buf , strlen(buf));
return strlen(buf);
}
static const struct file_operations proc_file_ops = {
        .read 	 = proc_file_read,
        .write 	 = proc_file_write,
};


static int proc_file_init(void)
{
    sema_init(&sem, 1);
    proc_create_data("my_proc_file", 0644, NULL,
                     &proc_file_ops, NULL);
    printk("proc_file_init success!\n");
    return 0;
}

static void proc_file_exit(void)
{
    remove_proc_entry("my_proc_file", NULL);
    printk("proc_file_exit\n");
}

module_init(proc_file_init);
module_exit(proc_file_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello Module");


#endif //UNTITLED5_PROC_H
