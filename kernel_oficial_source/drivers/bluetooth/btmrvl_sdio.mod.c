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
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0xef757cdc, "btmrvl_enable_ps" },
	{ 0xee9a0350, "btmrvl_register_hdev" },
	{ 0x4f7e01b, "btmrvl_add_card" },
	{ 0xf2c05893, "release_firmware" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe9bfd9ae, "request_firmware" },
	{ 0xd6b21686, "sdio_set_block_size" },
	{ 0x8fd9be91, "sdio_claim_irq" },
	{ 0xd7928b18, "sdio_enable_func" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa97a2ea3, "sdio_register_driver" },
	{ 0x61dfba5b, "kfree_skb" },
	{ 0xd7373056, "hci_recv_frame" },
	{ 0x722d6a15, "btmrvl_process_event" },
	{ 0xc8b53e78, "btmrvl_check_evtpkt" },
	{ 0xa0435bc, "sdio_readsb" },
	{ 0xc1e548a2, "skb_pull" },
	{ 0xc5e0b963, "skb_put" },
	{ 0x11d00927, "__alloc_skb" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x91fdf472, "sdio_writesb" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x88e5f543, "btmrvl_interrupt" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a0ca4df, "btmrvl_remove_card" },
	{ 0x5df76809, "btmrvl_send_module_cfg_cmd" },
	{ 0xa3dda44, "dev_get_drvdata" },
	{ 0x64cf866e, "dev_set_drvdata" },
	{ 0x24670c40, "sdio_disable_func" },
	{ 0x15dde2e0, "sdio_release_irq" },
	{ 0xeb5de8cd, "sdio_release_host" },
	{ 0x27e1a049, "printk" },
	{ 0xac578d85, "sdio_writeb" },
	{ 0xbb3bfde9, "sdio_readb" },
	{ 0x79ecc7e0, "sdio_claim_host" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6de88a3e, "sdio_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");

MODULE_INFO(srcversion, "5664130CB48520D3884381F");
