all : prog_TP7

rebuild : clean all

prog_TP7 : main.o point.o forme.o cercle.o rectangle.o carre.o
	g++ -o prog_TP7 main.o point.o forme.o cercle.o rectangle.o carre.o

clean :
	del *.o

main.o : main.cpp
	g++ -o main.o -c main.cpp

point.o : point.cpp point.h
	g++ -o point.o -c point.cpp

forme.o : forme.cpp forme.h
	g++ -o forme.o -c forme.cpp

cercle.o : cercle.cpp cercle.h
	g++ -o cercle.o -c cercle.cpp

rectangle.o : rectangle.cpp rectangle.h
	g++ -o rectangle.o -c rectangle.cpp

carre.o : carre.cpp carre.h
	g++ -o carre.o -c carre.cpp