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
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x27e1a049, "printk" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x4aa12c7b, "tty_register_driver" },
	{ 0x6eb5f153, "tty_set_operations" },
	{ 0xaed51d8f, "alloc_tty_driver" },
	{ 0x9b847fb8, "tty_port_block_til_ready" },
	{ 0xec7a128a, "tty_port_close_end" },
	{ 0xd2f161e6, "tty_port_tty_set" },
	{ 0xf218d20d, "tty_port_close_start" },
	{ 0xe46711b5, "usb_autopm_get_interface_async" },
	{ 0x71c90087, "memcmp" },
	{ 0x9a22c2e8, "tty_get_baud_rate" },
	{ 0xe028a25c, "tty_port_hangup" },
	{ 0x7e47132a, "usb_autopm_put_interface" },
	{ 0x17524e86, "usb_autopm_get_interface" },
	{ 0x11a7d314, "tty_wakeup" },
	{ 0x4a0479b8, "tty_flip_buffer_push" },
	{ 0xdae3b1f3, "tty_insert_flip_string_fixed_flag" },
	{ 0x8949858b, "schedule_work" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xb3842a6c, "tty_register_device" },
	{ 0xc7101c95, "usb_get_intf" },
	{ 0x157c5020, "usb_driver_claim_interface" },
	{ 0xc045c476, "_dev_info" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb7951ef2, "device_create_file" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0xe48e0eb, "usb_alloc_coherent" },
	{ 0x67a7021a, "tty_port_init" },
	{ 0x8a94e7b3, "__mutex_init" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xbeac7f79, "dev_warn" },
	{ 0xdafb3daa, "usb_ifnum_to_if" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0x242500, "usb_driver_release_interface" },
	{ 0x7dccc9e7, "usb_free_coherent" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x5dd82feb, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x66bf4e9f, "usb_put_intf" },
	{ 0xe1536436, "tty_unregister_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x488794c, "usb_kill_urb" },
	{ 0xdb18e6ea, "mutex_unlock" },
	{ 0xfeb1b4ca, "mutex_lock" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc212a112, "_raw_spin_unlock_irq" },
	{ 0xd59daefe, "_raw_spin_lock_irq" },
	{ 0x6afb9c58, "usb_autopm_put_interface_async" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x77a95cc6, "tty_kref_put" },
	{ 0xa1d2e738, "tty_hangup" },
	{ 0xe6052352, "tty_port_tty_get" },
	{ 0xfeb8bb29, "put_tty_driver" },
	{ 0x92bb4903, "tty_unregister_driver" },
	{ 0x124e4975, "usb_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFF*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0694pFF00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04D8p000Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06*");
