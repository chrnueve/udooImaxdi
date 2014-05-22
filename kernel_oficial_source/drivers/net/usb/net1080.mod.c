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
	{ 0x47688d71, "usbnet_resume" },
	{ 0x7356af3b, "usbnet_suspend" },
	{ 0x8fa94e67, "usbnet_disconnect" },
	{ 0x21845f8d, "usbnet_probe" },
	{ 0xa1c6ec97, "netdev_info" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x124e4975, "usb_deregister" },
	{ 0x1329f819, "usbnet_get_endpoints" },
	{ 0x3ba7cd1e, "skb_trim" },
	{ 0xc1e548a2, "skb_pull" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5e0b963, "skb_put" },
	{ 0xcdab9212, "skb_push" },
	{ 0x951e9c67, "dev_kfree_skb_any" },
	{ 0xc990a4e7, "skb_copy_expand" },
	{ 0x99bb8806, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*");
