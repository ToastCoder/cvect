compile:
	gcc cvect.c area/area.c cent/cent.c main.c -o main -lm
run:
	./main
clean:
	rm main
execute:
	gcc cvect.c area/area.c cent/cent.c main.c -o main -lm
	./main
	rm main
push:
	git pull
	git add *
	git commit -m "Some changes"
	git push