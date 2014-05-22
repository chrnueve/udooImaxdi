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
	{ 0x32746051, "drm_release" },
	{ 0xa4c58005, "drm_core_reclaim_buffers" },
	{ 0x8f36154e, "drm_mmap" },
	{ 0x27e1a049, "printk" },
	{ 0x26bf3486, "drm_platform_exit" },
	{ 0xa63d08e5, "noop_llseek" },
	{ 0xf89016e7, "platform_device_unregister" },
	{ 0xa0f06c24, "drm_platform_init" },
	{ 0x696e3a8b, "drm_ioctl" },
	{ 0x1b35104e, "platform_device_register_resndata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x94e755c, "drm_poll" },
	{ 0x2cc739fb, "drm_fasync" },
	{ 0xbd1f4b3e, "drm_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

