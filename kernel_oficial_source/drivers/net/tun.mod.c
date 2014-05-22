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
	{ 0x4cf1ca1d, "register_netdevice" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x63c6332b, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xd83fac8c, "sk_filter" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xd8a2ab95, "in_egroup_p" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x80dbda1, "no_llseek" },
	{ 0xc116a500, "netif_carrier_on" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb324c893, "netif_carrier_off" },
	{ 0x6c5820a6, "sock_update_classid" },
	{ 0x3360aaf9, "sock_alloc_send_pskb" },
	{ 0xa43b9539, "memcpy_fromiovecend" },
	{ 0xbce4b629, "sk_detach_filter" },
	{ 0xe570af62, "skb_partial_csum_set" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x52b50081, "__f_setown" },
	{ 0xcd8f2396, "misc_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x26aee72c, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xb59522e3, "netif_rx_ni" },
	{ 0x2b8f1322, "dev_set_mac_address" },
	{ 0xddaad85e, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0xc1200d05, "ethtool_op_get_link" },
	{ 0xd92ef473, "free_netdev" },
	{ 0x9e2000a7, "memcpy_toiovecend" },
	{ 0xc64b7ed6, "fasync_helper" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x94152fd4, "skb_copy_datagram_const_iovec" },
	{ 0x39a0d368, "sk_free" },
	{ 0x9cbf611a, "sk_attach_filter" },
	{ 0x59391a36, "rtnl_link_unregister" },
	{ 0xb7951ef2, "device_create_file" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xe2f9d05c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xc4922cde, "__wake_up_sync_key" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x1000e51, "schedule" },
	{ 0x61dfba5b, "kfree_skb" },
	{ 0x41ca28a6, "do_sync_read" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3611025e, "alloc_netdev_mqs" },
	{ 0x121eae4, "eth_type_trans" },
	{ 0x1264678d, "ether_setup" },
	{ 0xb7929da2, "__dev_get_by_name" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xfaf98462, "bitrev32" },
	{ 0x26157787, "unregister_netdevice_queue" },
	{ 0x72542c85, "__wake_up" },
	{ 0x3421aae8, "eth_validate_addr" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cdf28c4, "do_sync_write" },
	{ 0x9d669763, "memcpy" },
	{ 0xf87f2f1b, "rtnl_link_register" },
	{ 0xe984d090, "kill_fasync" },
	{ 0xedf881aa, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x65785519, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6bacf4f1, "skb_copy_datagram_from_iovec" },
	{ 0x521c076, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc5e0b963, "skb_put" },
	{ 0xd7ec6827, "eth_mac_addr" },
	{ 0xa170bbdb, "outer_cache" },
	{ 0x5e289192, "misc_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

