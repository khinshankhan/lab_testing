CXXFLAGS=-std=c++11
main: main.o pig.o
	g++ -o main main.o pig.o

main.o: main.cpp pig.h
	g++ $(CXXFLAGS) -c main.cpp

pig.o: pig.cpp pig.h
	g++ $(CXXFLAGS) -c pig.cpp



tests: tests.o pig.o
	g++ -o tests tests.o pig.o
        
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o pig.o tests.o 
