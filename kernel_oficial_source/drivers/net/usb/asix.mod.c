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
	{ 0x4a31dd39, "usbnet_nway_reset" },
	{ 0x68225119, "usbnet_set_msglevel" },
	{ 0x40f1c92f, "usbnet_get_msglevel" },
	{ 0x858c0ca7, "usbnet_set_settings" },
	{ 0x9902d6c2, "usbnet_get_settings" },
	{ 0xb72a178e, "usbnet_tx_timeout" },
	{ 0x1e309a7, "usbnet_change_mtu" },
	{ 0x3421aae8, "eth_validate_addr" },
	{ 0xd7ec6827, "eth_mac_addr" },
	{ 0xab73cec7, "usbnet_start_xmit" },
	{ 0x977eb236, "usbnet_stop" },
	{ 0x723c8d3a, "usbnet_open" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x5a7d0e10, "usb_submit_urb" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xd2f088ed, "usb_alloc_urb" },
	{ 0x7e1caeae, "usb_register_driver" },
	{ 0x124e4975, "usb_deregister" },
	{ 0xb324c893, "netif_carrier_off" },
	{ 0x6740848a, "usbnet_defer_kevent" },
	{ 0xc116a500, "netif_carrier_on" },
	{ 0xeb3e75a1, "usbnet_unlink_rx_urbs" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc1e548a2, "skb_pull" },
	{ 0xd9f3767c, "usbnet_skb_return" },
	{ 0x70384781, "skb_clone" },
	{ 0xc5e0b963, "skb_put" },
	{ 0xcdab9212, "skb_push" },
	{ 0x951e9c67, "dev_kfree_skb_any" },
	{ 0xc990a4e7, "skb_copy_expand" },
	{ 0x99bb8806, "memmove" },
	{ 0x7177ba9c, "mii_nway_restart" },
	{ 0x1329f819, "usbnet_get_endpoints" },
	{ 0xdb18e6ea, "mutex_unlock" },
	{ 0xfeb1b4ca, "mutex_lock" },
	{ 0xb02abf26, "usb_free_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x634a90c9, "generic_mii_ioctl" },
	{ 0x328a05f1, "strncpy" },
	{ 0xffd738b2, "usbnet_get_drvinfo" },
	{ 0xdbb1a5ea, "mii_link_ok" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xae393b97, "mii_ethtool_gset" },
	{ 0xc806de67, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x1a0a161d, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x50fd6452, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*");
