CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99
TARGET = strings_demo
TEST_TARGET = test_challenge03

all: $(TARGET)

$(TARGET): main.c strings.c strings.h
	$(CC) $(CFLAGS) -o $(TARGET) main.c strings.c

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): test_challenge03.c strings.c strings.h
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge03.c strings.c

clean:
	rm -f $(TARGET) $(TEST_TARGET) *.o

run: $(TARGET)
	./$(TARGET)

.PHONY: all test clean run