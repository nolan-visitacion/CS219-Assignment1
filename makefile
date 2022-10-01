hw1: main.o hex.o
	g++ -o hw1 main.o hex.o -std=c++11
	
main.o: main.cpp
	g++ -c main.cpp -std=c++11 -o main.o

hex.o: hex.cpp 
	g++ -c hex.cpp -std=c++11 -o hex.o

clean:
	rm *.o hw1