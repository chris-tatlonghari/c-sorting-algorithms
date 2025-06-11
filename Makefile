CC=gcc
CFLAGS=-Iinclude -Wall -Wextra
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TARGET=sorting_algorithms

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f src/*.o $(TARGET)