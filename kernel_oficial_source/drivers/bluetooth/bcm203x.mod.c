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
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x8949858b, "schedule_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9d669763, "memcpy" },
	{ 0xf2c05893, "release_firmware" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe9bfd9ae, "request_firmware" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x488794c, "usb_kill_urb" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x124e4975, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F1B583377BDAE9AB965E047");
