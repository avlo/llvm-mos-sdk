# llvm-mos C64 examples — same command as:
#   mos-c64-clang -Os -o hello-printf.prg hello-printf.c

MOS_CC ?= /home/nick/apps/llvm-mos/bin/mos-c64-clang

.PHONY: all clean

all: hello-printf.prg

hello-printf.prg: hello-printf.c
	$(MOS_CC) -Os -o $@ $<

clean:
	rm -f hello-printf.prg
