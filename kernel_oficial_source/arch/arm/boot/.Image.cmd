cmd_arch/arm/boot/Image := ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-objcopy -O binary -R .comment -S  vmlinux arch/arm/boot/Image
