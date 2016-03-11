Lab07: main.o Heap.o
	g++ -g main.o Heap.o -o Lab07
main.o: main.cpp
	g++ -g -c main.cpp
Heap.o: Heap.cpp Heap.h
	g++ -g -c Heap.cpp
clean:
	rm *.o Lab07
