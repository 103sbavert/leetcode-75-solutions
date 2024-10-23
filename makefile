FILE := 724.c

SHELL := /usr/bin/bash
BUILD_DIR := .build
SOLUTIONS_DIR := solutions
BINARY_DIR := $(BUILD_DIR)/binary
OBJECTS_DIR := $(BUILD_DIR)/objects

$(shell mkdir -p $(BUILD_DIR) && mkdir -p $(OBJECTS_DIR) && mkdir -p $(BINARY_DIR))

all: $(OBJECTS_DIR)/source.o $(OBJECTS_DIR)/main.o
	gcc -fsanitize=address $^ -o $(BINARY_DIR)/a.out

$(OBJECTS_DIR)/main.o: main.c
	gcc -c $^ -o $(OBJECTS_DIR)/main.o

$(OBJECTS_DIR)/source.o: $(SOLUTIONS_DIR)/$(FILE)
	gcc -c $< -o $(OBJECTS_DIR)/source.o

clean:
	rm -rf $(BUILD_DIR)/*

launch:
	$(BINARY_DIR)/a.out
