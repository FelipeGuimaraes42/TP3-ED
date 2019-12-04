CC=g++
CFLAGS=-Wall -Wextra -g -std=c++17
EXEC=./tp3

run: $(EXEC)
	$(EXEC)

${EXEC}: src/main.cpp main.o lista.o hash.o
	${CC} ${CFLAGS} src/main.cpp lista.o hash.o -o ${EXEC}

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o main.o

hash.o: src/hash.cpp
	$(CC) $(CFLAGS) -c src/hash.cpp -o hash.o

lista.o: src/lista.cpp
	$(CC) $(CFLAGS) -c src/lista.cpp -o lista.o

test: ${EXEC}
	@bash run_tests.sh ${EXEC}

rand_input: rand_gen/rand_gen.cc
	${CC} ${CFLAGS} rand_gen/rand_gen.cc -o rand_input

valgrind_test: rand_input ${EXEC}
	@./rand_input 32 | valgrind ${EXEC}

clean:
	@rm -rf *.o ${EXEC} rand_input
