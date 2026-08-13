# Variables -  For easy to change compiler later
CC = clang
CFLAGS = -Wall -Wextra

# Target - executable program
monitor: main.o sensor.o
		$(CC) $(CFLAGS) main.o sensor.o -o monitor

# Compiler
main.o: main.c sensor.h
		$(CC) $(CFLAGS) -c main.c

sensor.o: sensor.c sensor.h
		$(CC) $(CFLAGS) -c sensor.c

# Utility
clean:
		rm -f *.o monitor
