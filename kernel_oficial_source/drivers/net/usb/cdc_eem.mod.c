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
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x124e4975, "usb_deregister" },
	{ 0x242500, "usb_driver_release_interface" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x1329f819, "usbnet_get_endpoints" },
	{ 0xd9f3767c, "usbnet_skb_return" },
	{ 0x635c757b, "netdev_warn" },
	{ 0x3497de8a, "consume_skb" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0x3ba7cd1e, "skb_trim" },
	{ 0x70384781, "skb_clone" },
	{ 0xc1e548a2, "skb_pull" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcdab9212, "skb_push" },
	{ 0xc5e0b963, "skb_put" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x951e9c67, "dev_kfree_skb_any" },
	{ 0xc990a4e7, "skb_copy_expand" },
	{ 0x99bb8806, "memmove" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07*");
