cmd_drivers/hwmon/built-in.o :=  ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-ld -EL    -r -o drivers/hwmon/built-in.o drivers/hwmon/hwmon.o drivers/hwmon/max17135-hwmon.o drivers/hwmon/mag3110.o drivers/hwmon/mxc_mma8451.o 