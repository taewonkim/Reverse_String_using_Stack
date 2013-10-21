.c.o:
	g++ -g -c $<
all: StringReverse
StringReverse: Screen.o Stack.o Reverse.o
Screen.o: Screen.h Screen.cpp
Stack.o: Stack.h Stack.cpp
Reverse.o: Reverse.h Reverse.cpp 
clean:
	rm -rf *.o
	rm -rf StringReverse
