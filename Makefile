# MAKEFILE FOR BUILDING CVECT HEADER FILE

# VARIABLES 
CC = gcc
CPPC = g++
SRC_FILES = src/cvect.c src/area/area.c src/cent/cent.c src/dist/dist.c src/prod/prod.c src/section/section.c src/volume/volume.c
BIN_FILES = cvect.o area.o cent.o dist.o prod.o section.o volume.o
C_TESTER = test/main.c
CPP_TESTER = test/main.cpp

# COMMAND FOR COMPILATION USING C
compile_c:
	$(CC) $(SRC_FILES) $(C_TESTER) -o main -lm

# COMMAND FOR COMPILATION USING C++
compile_cpp:
	$(CC) -c -o cvect.o src/cvect.c -lm
	$(CC) -c -o area.o src/area/area.c -lm
	$(CC) -c -o cent.o src/cent/cent.c -lm
	$(CC) -c -o dist.o src/dist/dist.c -lm
	$(CC) -c -o prod.o src/prod/prod.c -lm
	$(CC) -c -o section.o src/section/section.c -lm
	$(CC) -c -o volume.o src/volume/volume.c -lm
	$(CPPC) -c -o main_cpp.o $(CPP_TESTER) -lm
	$(CPPC) -o main $(BIN_FILES) main_cpp.o -lm

# COMMAND FOR RUNNING THE BINARY
run:
	./main

# COMMAND FOR CLEANING THE BINARY
clean:
	rm main $(BIN_FILES) main.o main_cpp.o main.exe

# COMMAND FOR ONE TIME TESTING OF THE PROGRAM IN C
execute_c:
	$(CC) $(SRC_FILES) $(C_TESTER) -o main -lm
	./main
	rm main

# COMMAND FOR ONE TIME TESTING OF THE PROGRAM IN C++
execute_cpp:
	$(CC) -c -o cvect.o src/cvect.c -lm
	$(CC) -c -o area.o src/area/area.c -lm
	$(CC) -c -o cent.o src/cent/cent.c -lm
	$(CC) -c -o dist.o src/dist/dist.c -lm
	$(CC) -c -o prod.o src/prod/prod.c -lm
	$(CC) -c -o section.o src/section/section.c -lm
	$(CC) -c -o volume.o src/volume/volume.c -lm
	$(CPPC) -c -o main_cpp.o $(CPP_TESTER) -lm
	$(CPPC) -o main $(BIN_FILES) main_cpp.o -lm
	./main
	rm main $(BIN_FILES) main_cpp.o

# COMMAND FOR AUTOMATED PUSH
autopush:
	git pull
	git add *
	git commit -m "Some changes"
	git push

