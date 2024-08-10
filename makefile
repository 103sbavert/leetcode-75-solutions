FILE := 151.c


SHELL := /usr/bin/bash
SOLUTIONS_DIR := solutions
BINARY_DIR := binary
OBJECTS_DIR := objects

a.out: $(OBJECTS_DIR)/source.o $(OBJECTS_DIR)/main.o
	mkdir -p $(BINARY_DIR)
	gcc $^ -o $(BINARY_DIR)/a.out

$(OBJECTS_DIR)/main.o: main.c
	mkdir -p $(OBJECTS_DIR)
	gcc -c $^ -o $(OBJECTS_DIR)/main.o

$(OBJECTS_DIR)/source.o: $(SOLUTIONS_DIR)/$(FILE)
	mkdir -p $(OBJECTS_DIR)
	gcc -c $< -o $(OBJECTS_DIR)/source.o

clean:
	rm -r binary/ objects/