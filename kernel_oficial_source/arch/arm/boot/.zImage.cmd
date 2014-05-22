cmd_arch/arm/boot/zImage := ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-objcopy -O binary -R .comment -S  arch/arm/boot/compressed/vmlinux arch/arm/boot/zImage
