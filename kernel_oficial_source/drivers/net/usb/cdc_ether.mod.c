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
	{ 0xa1c6ec97, "netdev_info" },
	{ 0x47688d71, "usbnet_resume" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x21845f8d, "usbnet_probe" },
	{ 0xc116a500, "netif_carrier_on" },
	{ 0x8fa94e67, "usbnet_disconnect" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb324c893, "netif_carrier_off" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x124e4975, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x1329f819, "usbnet_get_endpoints" },
	{ 0x157c5020, "usb_driver_claim_interface" },
	{ 0x7356af3b, "usbnet_suspend" },
	{ 0xc045c476, "_dev_info" },
	{ 0x6eb669ad, "usbnet_get_ethernet_addr" },
	{ 0x242500, "usb_driver_release_interface" },
	{ 0x1a0a161d, "netdev_err" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdafb3daa, "usb_ifnum_to_if" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFF*");
