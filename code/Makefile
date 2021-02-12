CC=g++

CPP_V_FLAG=-std=c++17
WARNING_FLAGS=-Wall -Werror -Iinclude
FLAGS=$(CPP_V_FLAG) $(WARNING_FLAGS)

INCL_SRCS=$(wildcard include/*.hpp)
MAIN=src/main.cpp
SRCS=$(filter-out $(MAIN), $(wildcard src/*.cpp))
$(info $(SRCS))

TEST_SOURCES=$(wildcard test/*.cpp)
TEST_FLAGS=-lgtest -lgtest_main -lpthread

TARGET=bin/qr-reader

all: $(TARGET) $(TARGET)Test

$(TARGET): $(MAIN) $(SRCS) $(INCL_SRCS)
	@$(CC) -o $@ $(MAIN) $(SRCS) $(FLAGS)

$(TARGET)Test: $(TARGET) $(MAIN) $(SRCS) $(INCL_SRCS) $(TEST_SOURCES)
	@$(CC) $(FLAGS) -o $@ $(TEST_SOURCES) $(SRCS) $(TEST_FLAGS) -Itest

test: $(TARGET)Test
	@./$(TARGET)Test

clean:
	rm $(TARGET)
	rm $(TARGET)Test


.PHONY: all clean
