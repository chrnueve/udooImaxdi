cmd_init/built-in.o :=  ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-ld -EL    -r -o init/built-in.o init/main.o init/version.o init/mounts.o init/noinitramfs.o init/calibrate.o 
