CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = src/main.cpp src/graph_engine.cpp src/trie_search.cpp src/heap_ranker.cpp src/dp_pathfinder.cpp src/freshness_filter.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = job_recommendation_engine

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)