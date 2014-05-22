cmd_drivers/spi/built-in.o :=  ../arm-fsl-linux-gnueabi/bin/arm-fsl-linux-gnueabi-ld -EL    -r -o drivers/spi/built-in.o drivers/spi/spi.o drivers/spi/spi_bitbang.o drivers/spi/spi_imx.o 
