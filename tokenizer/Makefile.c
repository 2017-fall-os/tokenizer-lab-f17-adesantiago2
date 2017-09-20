
all: test

CFLAGS = -g

test: test.o mytoc.o
	cc -o test test.o mytoc.o
clean:
	rm -f  *.o test
