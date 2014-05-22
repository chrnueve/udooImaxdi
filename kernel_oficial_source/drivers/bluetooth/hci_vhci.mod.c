#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x62d8458c, "module_layout" },
	{ 0x80dbda1, "no_llseek" },
	{ 0xcd8f2396, "misc_register" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x13416eb2, "skb_queue_head" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xedf881aa, "skb_dequeue" },
	{ 0xd7373056, "hci_recv_frame" },
	{ 0xc1e548a2, "skb_pull" },
	{ 0x61dfba5b, "kfree_skb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xc5e0b963, "skb_put" },
	{ 0x11d00927, "__alloc_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x26aee72c, "skb_queue_purge" },
	{ 0x72542c85, "__wake_up" },
	{ 0xe2f9d05c, "skb_queue_tail" },
	{ 0xcdab9212, "skb_push" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xd8711c5f, "nonseekable_open" },
	{ 0x3fbaa08d, "hci_register_dev" },
	{ 0x8323731d, "hci_alloc_dev" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8cefa78, "hci_free_dev" },
	{ 0x27e1a049, "printk" },
	{ 0xc1472bf2, "hci_unregister_dev" },
	{ 0x5e289192, "misc_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7CF06B4F970A55146C8639D");
