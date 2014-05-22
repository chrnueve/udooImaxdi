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
	{ 0x81978c50, "usbnet_cdc_unbind" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x124e4975, "usb_deregister" },
	{ 0x675a4de2, "usbnet_generic_cdc_bind" },
	{ 0xc5e0b963, "skb_put" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x951e9c67, "dev_kfree_skb_any" },
	{ 0xc990a4e7, "skb_copy_expand" },
	{ 0xc045c476, "_dev_info" },
	{ 0x1329f819, "usbnet_get_endpoints" },
	{ 0x71c90087, "memcmp" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v22B8p6027d*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00*");
