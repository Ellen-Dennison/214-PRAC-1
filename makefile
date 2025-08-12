# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -fprofile-arcs -ftest-coverage
LDFLAGS = -lgcov

# Source files
SRCS = TestingMain.cpp Canvas.cpp CareTaker.cpp Memento.cpp Shape.cpp Rectangle.cpp Square.cpp Textbox.cpp RectangleFactory.cpp ExportCanvas.cpp PDFExporter.cpp PNGExporter.cpp SquareFactory.cpp TextboxFactory.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = myProgram

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run tests
test: $(TARGET)
	./$(TARGET)

# Generate coverage report
cov: test
	gcov $(SRCS)

# Clean up
clean:
	rm -f $(OBJS) $(TARGET) *.gcno *.gcda *.gcov
