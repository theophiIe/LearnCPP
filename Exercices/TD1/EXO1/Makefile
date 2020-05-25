CC = g++
EXEC = main
CFLAGS = -std=c++17 -Wall -Wextra -g -O2

all : clean compile
	./$(EXEC)

compile :
	$(CC) $(CFLAGS) main.cpp -o $(EXEC)

valgrind: compile
	valgrind --leak-check=full -v ./$(EXEC)

clean:
	rm -rf $(EXEC)
	ls