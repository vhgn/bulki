test: test.c test2.c bulki.h
	gcc -o $@ test.c test2.c -std=c99 -pedantic
	./test
