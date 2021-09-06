# **Emulating Embedded Linux on ARM using QEMU**

#### Overview

Four important artifacts are required:

* Bootloader
* Kernel
* Device Tree Binary
* Root Filesystem



## QEMU installation

```bash
git clone https://gitlab.com/qemu-project/qemu.git
cd qemu
git submodule init
git submodule update --recursive
./configure
make


export PATH=$PATH:/mahi/desd/work/qemu/qemu/build
```



#### Kernel

Source code

https://github.com/raspberrypi/linux/

Pre-built binary

https://github.com/dhruvvyas90/qemu-rpi-kernel

* kernel-qemu-3.10.25-wheezy
* kernel-qemu-4.14.79-stretch
* **kernel-qemu-4.19.50-buster**
* kernel-qemu-4.4.34-jessie



#### Device Tree Binary

https://github.com/dhruvvyas90/qemu-rpi-kernel/raw/master/versatile-pb.dtb

* **versatile-pb.dtb**



#### Root File System

http://downloads.raspberrypi.org/raspbian/images/

* ​	**2020-02-13-raspbian-buster.zip**



#### Steps for Emulation 

```bash
mkdir work
cd work

# Download kernel
wget -c https://github.com/dhruvvyas90/qemu-rpi-kernel/raw/master/kernel-qemu-5.4.51-buster

# Download device tree
wget -c https://github.com/dhruvvyas90/qemu-rpi-kernel/raw/master/versatile-pb-buster-5.4.51.dtb

# Download ROOT FS
wget -c https://downloads.raspberrypi.org/raspios_lite_armhf/images/raspios_lite_armhf-2021-05-28/2021-05-07-raspios-buster-armhf-lite.zip

unzip ../src/2021-05-07-raspios-buster-armhf-lite.zip
```



```bash
qemu-system-arm -kernel kernel-qemu-5.4.51-buster -cpu arm1176 -m 256 -M versatilepb -no-reboot -serial stdio -append "root=/dev/sda2 panic=100 rootfstype=ext4 rw console=ttyAMA0,115200" -hda 2021-05-07-raspios-buster-armhf-lite.img -dtb versatile-pb-buster-5.4.51.dtb
```



#### Credentials

> Username: `pi`
>
> Password: `raspberry`

#### Reference

https://hydrasky.com/linux/emulate-raspberry-pi-on-qemu/

https://github.com/raspberrypi

