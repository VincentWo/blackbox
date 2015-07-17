#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/whitebox.kernel isodir/boot/
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "whitebox" {
	multiboot /boot/whitebox.kernel
}
EOF
$HOME/coding/OS-Dev/grub/build/bin/grub-mkrescue -o whitebox.iso isodir
