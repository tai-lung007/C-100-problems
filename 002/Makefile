CC = gcc
SRC = src/*.c

OUT_DIR = out
OUT_EXE = $(OUT_DIR)/main



all: out/main



out:
	mkdir -p out

out/main: $(SRC) | out
	$(CC) -Iinc $(SRC) -o out/main


clean:       
	rm -rf out



.PHONY: all clean





































