run: TestingMain
	./TestingMain

TestingMain: TestingMain.o Canvas.o CareTaker.o Memento.o Shape.o Rectangle.o Square.o Textbox.o
	g++ -std=c++98 TestingMain.o Canvas.o CareTaker.o Memento.o Shape.o Rectangle.o Square.o Textbox.o -o TestingMain

TestingMain.o: TestingMain.cpp Canvas.h Shape.h Memento.h CareTaker.h
	g++ -c TestingMain.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp

Square.o: Square.cpp Square.h
	g++ -c Square.cpp

Textbox.o: Textbox.cpp Textbox.h
	g++ -c Textbox.cpp

Canvas.o: Canvas.cpp Canvas.h
	g++ -c Canvas.cpp

Memento.o: Memento.cpp Memento.h
	g++ -c Memento.cpp

CareTaker.o: CareTaker.cpp CareTaker.h
	g++ -c CareTaker.cpp

Shape.o: Shape.cpp Shape.h
	g++ -c Shape.cpp

clean:
	rm *.o main
