targets = task51.bin task52.bin task53.bin task54.bin task55.bin task61.bin task61.bin task63.bin task64.bin task65.bin task66.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen Doxyfile
compile: task51.bin task52.bin task53.bin task54.bin task55.bin task61.bin task62.bin task63.bin task64.bin task65.bin task66.bin

task51.bin: src/task51.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task52.bin: src/task52.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task53.bin: src/task53.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task54.bin: src/task54.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task55.bin: src/task55.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task61.bin: src/task61.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task62.bin: src/task62.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task63.bin: src/task63.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task64.bin: src/task64.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task65.bin: src/task65.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task66.bin: src/task66.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/main.bin

format: #TODO

tidy: # TODO
