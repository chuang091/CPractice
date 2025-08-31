CC=clang
CFLAGS=-std=c17 -Wall -Wextra -O0 -g -fsanitize=address,undefined
LDFLAGS=

all: build/hello

build/hello: src/hello.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

build/loops: src/loops.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

build/sum: src/sum.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

loops: build/loops
	./build/loops $(ARGS)

sum: build/sum
	./build/sum $(ARGS)

run: all
	./build/hello

clean:
	rm -rf build/*

.PHONY: all run clean
