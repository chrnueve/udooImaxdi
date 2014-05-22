#!/bin/bash
#Christian Gil
#Easy kernel and modules building in 1-hit command
TIMESTAMP=$(date +"%H:%M:%S-%d_%m_%Y")
make -j8 CROSS_COMPILE=../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi- ARCH=arm uImage modules
mkdir -p ../builds/kernel-original/${TIMESTAMP}
cp arch/arm/boot/uImage ../builds/kernel-original/${TIMESTAMP}
mkdir temp
make modules_install INSTALL_MOD_PATH=temp CROSS_COMPILE=../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi- ARCH=arm 
mv temp/lib ../builds/kernel-original/${TIMESTAMP}
rm -rf temp
echo ****DONE****