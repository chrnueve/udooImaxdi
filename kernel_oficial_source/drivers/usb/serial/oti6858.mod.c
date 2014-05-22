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
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x34c7e46b, "usb_serial_disconnect" },
	{ 0x7d22e058, "usb_serial_probe" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0xc8759659, "usb_serial_register" },
	{ 0x41829fa0, "usb_serial_port_softint" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xef1579a8, "usb_clear_halt" },
	{ 0x37a0cba, "kfree" },
	{ 0x488794c, "usb_kill_urb" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0xea5320d6, "tty_encode_baud_rate" },
	{ 0x9a22c2e8, "tty_get_baud_rate" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9d669763, "memcpy" },
	{ 0x72542c85, "__wake_up" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x77a95cc6, "tty_kref_put" },
	{ 0x4a0479b8, "tty_flip_buffer_push" },
	{ 0xdae3b1f3, "tty_insert_flip_string_fixed_flag" },
	{ 0xe6052352, "tty_port_tty_get" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0xb6aeb8ab, "usb_serial_deregister" },
	{ 0x124e4975, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x67b27ec1, "tty_std_termios" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0EA0p6858d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4BFE3270A7839FE16DAF6A4");
