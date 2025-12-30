CXX = g++
CXXFLAGS = -std=c++17 -Wall
INCLUDES = -I include


GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m  # No Color


SRC = src/main.cpp src/graph_engine.cpp src/trie_search.cpp src/heap_ranker.cpp src/dp_pathfinder.cpp src/freshness_filter.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = job_recommendation_engine


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $^


run: $(TARGET)
	@echo "$(GREEN)Running main program...$(NC)"
	@.\$(TARGET).exe || (echo "$(RED)Main program failed!$(NC)" && exit 1)


test-trie:
	@echo "$(GREEN)Running TrieSearch test...$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) tests/test_trie.cpp src/trie_search.cpp -o test_trie.exe && .\test_trie.exe || (echo "$(RED)TrieSearch test failed!$(NC)" && exit 1)

test-graph:
	@echo "$(GREEN)Running GraphEngine test...$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) tests/test_graph.cpp src/graph_engine.cpp -o test_graph.exe && .\test_graph.exe || (echo "$(RED)GraphEngine test failed!$(NC)" && exit 1)

test-dp:
	@echo "$(GREEN)Running DPPathfinder test...$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) tests/test_dp.cpp src/dp_pathfinder.cpp -o test_dp.exe && .\test_dp.exe || (echo "$(RED)DPPathfinder test failed!$(NC)" && exit 1)

test-freshness:
	@echo "$(GREEN)Running FreshnessFilter test...$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) tests/test_freshness.cpp src/freshness_filter.cpp -o test_freshness.exe && .\test_freshness.exe || (echo "$(RED)FreshnessFilter test failed!$(NC)" && exit 1)

integration:
	@echo "$(GREEN)Building integration test...$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) tests/test_integration.cpp src/trie_search.cpp src/graph_engine.cpp src/dp_pathfinder.cpp src/freshness_filter.cpp -o test_integration.exe

run-integration: integration
	@echo "$(GREEN)Running integration test...$(NC)"
	@.\test_integration.exe || (echo "$(RED)Integration test failed!$(NC)" && exit 1)


test-all: test-trie test-graph test-dp test-freshness run-integration
	@echo "$(GREEN)✅ All tests passed successfully!$(NC)"


debug:
	$(CXX) $(CXXFLAGS) -g $(INCLUDES) $(SRC) -o $(TARGET)_debug.exe


clean:
	rm -f $(OBJ) $(TARGET).exe test_trie.exe test_graph.exe test_dp.exe test_freshness.exe test_integration.exe $(TARGET)_debug.exe