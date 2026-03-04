CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

SRC = src/*.cpp
TARGET = payment

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)