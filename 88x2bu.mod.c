#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDApB82Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB812d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pB822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pC822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p184Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p012Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0043d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "E9A91B18737555430104AD6");
