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
	{ 0xa63d08e5, "noop_llseek" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x99bb8806, "memmove" },
	{ 0x8949858b, "schedule_work" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xc045c476, "_dev_info" },
	{ 0x76f3833a, "usb_register_dev" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0xe48e0eb, "usb_alloc_coherent" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x8a94e7b3, "__mutex_init" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x7dccc9e7, "usb_free_coherent" },
	{ 0x2bde2dda, "usb_deregister_dev" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x43feb1fd, "mutex_lock_interruptible" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e47132a, "usb_autopm_put_interface" },
	{ 0x17524e86, "usb_autopm_get_interface" },
	{ 0x1bf1ab2b, "usb_find_interface" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x72542c85, "__wake_up" },
	{ 0xc212a112, "_raw_spin_unlock_irq" },
	{ 0xd59daefe, "_raw_spin_lock_irq" },
	{ 0xfeb1b4ca, "mutex_lock" },
	{ 0x488794c, "usb_kill_urb" },
	{ 0xdb18e6ea, "mutex_unlock" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x124e4975, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*");
