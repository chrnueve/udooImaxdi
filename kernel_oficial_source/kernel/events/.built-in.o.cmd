cmd_kernel/events/built-in.o :=  ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-ld -EL    -r -o kernel/events/built-in.o kernel/events/core.o kernel/events/hw_breakpoint.o 
