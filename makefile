hw3: main.o hex.o processor.o
	g++ -o hw3 main.o hex.o processor.o -std=c++11
	
main.o: main.cpp
	g++ -c main.cpp -std=c++11 -o main.o

hex.o: hex.cpp 
	g++ -c hex.cpp -std=c++11 -o hex.o

processor.o: processor.cpp
	g++ -c processor.cpp -std=c++11 -o processor.o

clean:
	rm *.o hw3