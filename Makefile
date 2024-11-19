CFLAGS = -Wall -Wextra -std=c11

all: a.out

a.out: main.o point.o
	gcc $(CFLAGS) main.o point.o

main.o: main.c
	gcc $(CFLAGS) -c main.c

point.o: point.c
	gcc $(CFLAGS) -c point.c

clean:
	rm main.o point.o a.out
