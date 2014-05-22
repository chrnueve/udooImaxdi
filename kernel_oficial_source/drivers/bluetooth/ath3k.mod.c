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
	{ 0x308cc8c0, "usb_match_id" },
	{ 0xf2c05893, "release_firmware" },
	{ 0xe9bfd9ae, "request_firmware" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d0407c4, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x27e1a049, "printk" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0x124e4975, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0489pE03Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p311Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3375d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04CAp3005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0489pE03Cd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8125FD8DFAB56F9634D45A4");
