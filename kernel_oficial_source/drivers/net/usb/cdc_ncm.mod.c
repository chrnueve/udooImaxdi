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
	{ 0x92951574, "usbnet_get_link" },
	{ 0x4a31dd39, "usbnet_nway_reset" },
	{ 0x68225119, "usbnet_set_msglevel" },
	{ 0x40f1c92f, "usbnet_get_msglevel" },
	{ 0x858c0ca7, "usbnet_set_settings" },
	{ 0x9902d6c2, "usbnet_get_settings" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x21845f8d, "usbnet_probe" },
	{ 0x8fa94e67, "usbnet_disconnect" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0x124e4975, "usb_deregister" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xc045c476, "_dev_info" },
	{ 0x6eb669ad, "usbnet_get_ethernet_addr" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0x27bfa11, "usb_set_interface" },
	{ 0x157c5020, "usb_driver_claim_interface" },
	{ 0xdafb3daa, "usb_ifnum_to_if" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x328a05f1, "strncpy" },
	{ 0x242500, "usb_driver_release_interface" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0xb5c63e4c, "dev_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb324c893, "netif_carrier_off" },
	{ 0xc116a500, "netif_carrier_on" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x27e1a049, "printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd9f3767c, "usbnet_skb_return" },
	{ 0x70384781, "skb_clone" },
	{ 0xab73cec7, "usbnet_start_xmit" },
	{ 0x7d11c268, "jiffies" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0xc5e0b963, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x951e9c67, "dev_kfree_skb_any" },
	{ 0x11d00927, "__alloc_skb" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00*");
