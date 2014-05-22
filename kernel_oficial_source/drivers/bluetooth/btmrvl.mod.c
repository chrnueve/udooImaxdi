#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x62d8458c, "module_layout" },
	{ 0x13416eb2, "skb_queue_head" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x783fcdb, "debugfs_create_dir" },
	{ 0x3fbaa08d, "hci_register_dev" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1757cbe, "debugfs_create_file" },
	{ 0xc1472bf2, "hci_unregister_dev" },
	{ 0x86ae035d, "skb_realloc_headroom" },
	{ 0x8002e2, "kthread_create_on_node" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x26aee72c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x78ae0c98, "default_llseek" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x27e1a049, "printk" },
	{ 0xb647ac4d, "kthread_stop" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x8323731d, "hci_alloc_dev" },
	{ 0x747d8505, "debugfs_remove" },
	{ 0xcdab9212, "skb_push" },
	{ 0xe2f9d05c, "skb_queue_tail" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x11d00927, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x61dfba5b, "kfree_skb" },
	{ 0xb2a51117, "wake_up_process" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x72542c85, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xedf881aa, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xb8cefa78, "hci_free_dev" },
	{ 0xc5e0b963, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "677E5843737A99956B2642B");
