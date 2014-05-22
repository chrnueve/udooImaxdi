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
	{ 0x6d73187a, "__kmap_atomic" },
	{ 0xe851bdd6, "kmem_cache_destroy" },
	{ 0x3d23f427, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x873d3b29, "sb_min_blocksize" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x85b87d7c, "up_read" },
	{ 0xadf65a30, "__bread" },
	{ 0xedcc74f8, "unload_nls" },
	{ 0x3fa00eb8, "make_bad_inode" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xce4faafc, "generic_file_llseek" },
	{ 0x5dd4b512, "__mark_inode_dirty" },
	{ 0xaf669ddc, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xace8ef1d, "generic_write_checks" },
	{ 0xf5c9012e, "timespec_trunc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xd442b3f4, "_raw_write_lock_irqsave" },
	{ 0xecb7c232, "page_address" },
	{ 0xdfcf2bd4, "iget5_locked" },
	{ 0xd0d8972d, "end_buffer_write_sync" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x762aaf30, "block_invalidatepage" },
	{ 0xb26a0224, "generic_fh_to_parent" },
	{ 0xcb9ed2da, "grab_cache_page_nowait" },
	{ 0x67053080, "current_kernel_time" },
	{ 0xfc2c1dcf, "is_bad_inode" },
	{ 0xd8ce81a2, "generic_file_open" },
	{ 0x8657af1b, "test_set_page_writeback" },
	{ 0xa3b107a4, "__lock_page" },
	{ 0x621141d0, "__lock_buffer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xea419305, "generic_file_aio_read" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa0eac20, "seq_printf" },
	{ 0x1281ff31, "buffer_migrate_page" },
	{ 0xb3fc7817, "add_to_page_cache_lru" },
	{ 0x8254d864, "end_writeback" },
	{ 0xdb18e6ea, "mutex_unlock" },
	{ 0x5a25afbb, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97212ef, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xec33ead5, "igrab" },
	{ 0x1251d30f, "call_rcu" },
	{ 0x507e86eb, "unlock_buffer" },
	{ 0x9731c18c, "generic_write_sync" },
	{ 0xaf56e977, "redirty_page_for_writepage" },
	{ 0xd60db83c, "__alloc_pages_nodemask" },
	{ 0x407ef521, "set_page_dirty" },
	{ 0x1baae54f, "mutex_trylock" },
	{ 0x1907c2a2, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77339464, "_raw_write_unlock_irqrestore" },
	{ 0x3c8d5442, "end_page_writeback" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x13ea72c3, "__insert_inode_hash" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xcd63c845, "__aeabi_lasr" },
	{ 0x31afdfd, "d_add_ci" },
	{ 0x9d32ca8a, "current_fs_time" },
	{ 0x8a94e7b3, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3cf4772a, "d_rehash" },
	{ 0xe2e0baf0, "find_lock_page" },
	{ 0x113358f0, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xcd49e697, "write_inode_now" },
	{ 0x24f9989c, "find_or_create_page" },
	{ 0x6a86a048, "d_alloc_root" },
	{ 0x9275ab3f, "kunmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce1390b6, "ilookup5_nowait" },
	{ 0xc2e8866d, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xfeb1b4ca, "mutex_lock" },
	{ 0x75eb8443, "file_remove_suid" },
	{ 0xa049f896, "__wait_on_buffer" },
	{ 0x1a301fe4, "file_update_time" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x76a6e5a9, "sync_dirty_buffer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x79d7e14e, "unlock_page" },
	{ 0x527ecf54, "up_write" },
	{ 0x33898f38, "down_write" },
	{ 0x3e826b1e, "__get_page_tail" },
	{ 0x6ca3da16, "__brelse" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba31ddb0, "contig_page_data" },
	{ 0x939c6e4f, "ilookup5" },
	{ 0xf6c7fe55, "mark_page_accessed" },
	{ 0x3d005a4b, "mark_buffer_async_write" },
	{ 0xc6a88fb3, "balance_dirty_pages_ratelimited_nr" },
	{ 0xae5e2496, "inode_init_once" },
	{ 0x5c68339b, "kmem_cache_alloc" },
	{ 0xaca37af7, "_raw_read_lock_irqsave" },
	{ 0xcba9cd23, "generic_file_mmap" },
	{ 0xc1b24ad, "kmap" },
	{ 0x5225d83a, "free_buffer_head" },
	{ 0x556e7aa3, "sync_blockdev" },
	{ 0x4b296896, "create_empty_buffers" },
	{ 0xd372b780, "load_nls" },
	{ 0x1000e51, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x41ca28a6, "do_sync_read" },
	{ 0x42c6922b, "unlock_new_inode" },
	{ 0x74ee42c2, "kill_block_super" },
	{ 0xa882d544, "_raw_read_unlock_irqrestore" },
	{ 0xc27487dd, "__bug" },
	{ 0x43e94837, "unmap_underlying_metadata" },
	{ 0xe62946b6, "inode_change_ok" },
	{ 0x9cf5b1a2, "submit_bh" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x43ba5014, "kmem_cache_create" },
	{ 0x7e27f1b2, "register_filesystem" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x58d1d744, "iput" },
	{ 0x26477c07, "__vmalloc" },
	{ 0xfe00a7be, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cdf28c4, "do_sync_write" },
	{ 0x3d4d0f1c, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x49324df8, "load_nls_default" },
	{ 0xa9ea4695, "generic_error_remove_page" },
	{ 0xda490aa4, "d_splice_alias" },
	{ 0x246737eb, "end_buffer_read_sync" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc5ea023c, "vmtruncate" },
	{ 0x5370173e, "sb_set_blocksize" },
	{ 0x3dee7340, "put_page" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x232aeb07, "mark_buffer_dirty" },
	{ 0x9db99926, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf5c05914, "generic_segment_checks" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x53ddb040, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xab25cb95, "generic_file_splice_read" },
	{ 0x8a4fa83b, "__aeabi_llsr" },
	{ 0xc1c15692, "__getblk" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x120c7a1d, "generic_fh_to_dentry" },
	{ 0xa170bbdb, "outer_cache" },
	{ 0xea767275, "d_instantiate" },
	{ 0x5c4d8bf, "__init_rwsem" },
	{ 0x4b1de1e, "flush_dcache_page" },
	{ 0x9a360de3, "alloc_page_buffers" },
	{ 0xf74d766b, "truncate_inode_pages" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "66B54D6F1AAE2DE802EA227");