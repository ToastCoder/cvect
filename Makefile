compile:
	gcc cvect.c area/area.c main.c -o main -lm
run:
	./main
clean:
	rm main
push:
	git pull
	git add *
	git commit -m "Some changes"
	git push