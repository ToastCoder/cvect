# MAKEFILE FOR BUILDING CVECT HEADER FILE

# COMMAND FOR COMPILATION ONLY
compile:
	gcc cvect.c area/area.c cent/cent.c dist/dist.c prod/prod.c section/section.c main.c -o main -lm

# COMMAND FOR RUNNING THE EXECUTABLE
run:
	./main

# COMMAND FOR CLEANING THE EXECUTABLE
clean:
	rm main

# COMMAND FOR ONE TIME TESTING OF THE PROGRAM
execute:
	gcc cvect.c area/area.c cent/cent.c dist/dist.c prod/prod.c section/section.c main.c -o main -lm
	./main
	rm main

# COMMAND FOR AUTOMATED PUSH
autopush:
	git pull
	git add *
	git commit -m "Some changes"
	git push

