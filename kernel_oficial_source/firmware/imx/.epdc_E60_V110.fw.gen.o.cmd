cmd_firmware/imx/epdc_E60_V110.fw.gen.o := ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-gcc -Wp,-MD,firmware/imx/.epdc_E60_V110.fw.gen.o.d  -nostdinc -isystem /home/cgil/udoo/arm-fsl-linux-gnueabi/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.4.4/include -I/home/cgil/udoo/kernel_oficial_source/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-mx6/include -Iarch/arm/plat-mxc/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o firmware/imx/epdc_E60_V110.fw.gen.o firmware/imx/epdc_E60_V110.fw.gen.S

source_firmware/imx/epdc_E60_V110.fw.gen.o := firmware/imx/epdc_E60_V110.fw.gen.S

deps_firmware/imx/epdc_E60_V110.fw.gen.o := \
  /home/cgil/udoo/kernel_oficial_source/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/imx/epdc_E60_V110.fw.gen.o: $(deps_firmware/imx/epdc_E60_V110.fw.gen.o)

$(deps_firmware/imx/epdc_E60_V110.fw.gen.o):
