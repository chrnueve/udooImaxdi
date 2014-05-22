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
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0xd7373056, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5e0b963, "skb_put" },
	{ 0x11d00927, "__alloc_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7b896de6, "usb_kill_anchored_urbs" },
	{ 0xe2dec553, "usb_unanchor_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x36ba9344, "usb_anchor_urb" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0xcdab9212, "skb_push" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0x61dfba5b, "kfree_skb" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fbaa08d, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8323731d, "hci_alloc_dev" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xb8cefa78, "hci_free_dev" },
	{ 0xc1472bf2, "hci_unregister_dev" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x124e4975, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4E025DDACF5A47084959544");
