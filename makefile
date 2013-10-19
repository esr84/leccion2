# makefile hecho a mano

all: loop

loop: loop_exercises.cpp 
	g++ -lm -std=c++11 -fpermissive $< -o $@

clean:
	rm -f loop
	rm -f *.o
