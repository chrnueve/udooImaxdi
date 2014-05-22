#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x62d8458c, "module_layout" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x77cde886, "mntget" },
	{ 0xfaf13cd, "vfs_readdir" },
	{ 0x97255bdf, "strlen" },
	{ 0x8d67d3c9, "dget_parent" },
	{ 0xa9d3cb0e, "dput" },
	{ 0xa22fda2e, "dentry_open" },
	{ 0xdb18e6ea, "mutex_unlock" },
	{ 0x27e1a049, "printk" },
	{ 0xfeb1b4ca, "mutex_lock" },
	{ 0x13650dba, "fput" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2c860c54, "lookup_one_len" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

