all : prog_TP7

rebuild : clean all

prog_TP7 : main.o point.o
	g++ -o prog_TP7 main.o point.o

main.o : main.cpp
	g++ -o main.o -c main.cpp

point.o : point.cpp
	g++ -o point.o -c point.cpp

clean :
	del *.o