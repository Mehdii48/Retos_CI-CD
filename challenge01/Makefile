CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99
TARGET = starter
TEST_TARGET = test_challenge01

all: $(TARGET)

$(TARGET): main.c suma.c suma.h
	$(CC) $(CFLAGS) -o $(TARGET) main.c suma.c

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): test_challenge01.c suma.c suma.h
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge01.c suma.c

clean:
	rm -f $(TARGET) $(TEST_TARGET) *.o

run: $(TARGET)
	./$(TARGET)

.PHONY: all test clean run