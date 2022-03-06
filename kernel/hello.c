#include <linux/syscalls.h>
#include <linux/printk.h>

SYSCALL_DEFINE0(hello)
{
	char *my_name = "Sungbin Jo";
	static int num_of_calls = 0;
	printk("Hello, this is a syscall by %s! (%d)\n", my_name, num_of_calls++);
	return 0;
}
