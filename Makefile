CXX = g++
CXXFLAGS = -std=c++17 -Wall -IHeaders
SRC = src/main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = school

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)