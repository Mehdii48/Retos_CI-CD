CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
MAIN_TARGET = starter
TEST_TARGET = test_challenge05

all: $(MAIN_TARGET)

$(MAIN_TARGET): main.c suma.c suma.h
	$(CC) $(CFLAGS) -o $(MAIN_TARGET) main.c suma.c

test: run_tests.sh suma.c suma.h test_challenge05.c
	chmod +x run_tests.sh
	./run_tests.sh

clean:
	rm -f $(MAIN_TARGET) $(TEST_TARGET) *.o

run: $(MAIN_TARGET)
	./$(MAIN_TARGET)

.PHONY: all test clean run