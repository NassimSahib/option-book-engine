CXX = g++
CXXFLAGS = -std=c++2b -Wall -I./src
SRC = src/main.cpp src/engine/Option.cpp
BIN = bin/main

all: $(BIN)

$(BIN): $(SRC)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $(BIN) $(SRC)

clean:
	rm -rf bin
