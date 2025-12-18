CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99
TARGET = calculadora
TEST_TARGET = test_challenge02

all: $(TARGET)

$(TARGET): main.c calculadora.c calculadora.h
	$(CC) $(CFLAGS) -o $(TARGET) main.c calculadora.c

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): test_challenge02.c calculadora.c calculadora.h
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge02.c calculadora.c

clean:
	rm -f $(TARGET) $(TEST_TARGET) *.o

run: $(TARGET)
	./$(TARGET)

.PHONY: all test clean run