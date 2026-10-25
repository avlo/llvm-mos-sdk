# llvm-mos C64 examples — same command as:
#   mos-c64-clang -Os -o plasma.prg plasma.c

MOS_CC ?= /home/nick/apps/llvm-mos/bin/mos-c64-clang

.PHONY: all clean

all: plasma.prg

plasma.prg: plasma.c
	$(MOS_CC) -Os -o $@ $<

clean:
	rm -f plasma.prg
