flags = -Wall -std=c89 -pedantic

run: test
	./test

test: test.c bulki.h
	gcc $< -o $@ $(flags)

.PHONY: run
