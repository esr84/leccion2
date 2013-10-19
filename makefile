# makefile hecho a mano

all: loop loopC11

loop: loop_exercises.cpp 
	g++ -lm -std=c++11 -fpermissive $< -o $@

loopC11: loop_exercisesc11.cpp
	g++ -lm -std=c++11 -fpermissive $< -o $@

clean:
	rm -f loop
	rm -f loopC11
	rm -f *.o
