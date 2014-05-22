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
	{ 0x3443ff4a, "crypto_register_template" },
	{ 0xe023afe, "crypto_spawn_tfm2" },
	{ 0x3e5ab0b3, "crypto_destroy_tfm" },
	{ 0x907f79da, "crypto_shash_final" },
	{ 0x7b35d0af, "crypto_shash_finup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0xc012c4c9, "crypto_shash_digest" },
	{ 0xa58522cc, "crypto_shash_update" },
	{ 0x1b717832, "crypto_mod_put" },
	{ 0xbc14a947, "shash_free_instance" },
	{ 0x2cf59223, "shash_register_instance" },
	{ 0x42f232b2, "crypto_init_shash_spawn" },
	{ 0xb9ff8cb, "crypto_alloc_instance2" },
	{ 0x3c365bcc, "shash_attr_alg" },
	{ 0xd16712f3, "crypto_check_attr_type" },
	{ 0x26aa53da, "crypto_unregister_template" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

