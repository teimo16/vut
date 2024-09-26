CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11

.PHONY: clean

main: main.c
	$(CC) $(CFLAGS) $^ -o "$@"

clean:
	rm -f main *.o

pack:
	tar -czvf odovzdanie.tar.gz ./*
