cmd_drivers/net/built-in.o :=  ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-ld -EL    -r -o drivers/net/built-in.o drivers/net/mii.o drivers/net/phy/built-in.o drivers/net/can/built-in.o drivers/net/Space.o drivers/net/loopback.o drivers/net/fec.o drivers/net/smsc911x.o drivers/net/arm/built-in.o drivers/net/wireless/built-in.o 
