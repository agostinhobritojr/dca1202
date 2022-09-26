vetor2d: vetor2d.o main.o
	g++ -o vetor2d main.o vetor2d.o
main.o: vetor2d.h main.cpp
	g++ -c main.cpp
vetor2d.o: vetor2d.h vetor2d.cpp
	g++ -c vetor2d.cpp
clean:
	rm -f *.o vetor2d
