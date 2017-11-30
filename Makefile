# File: Makefile
# Author: Brett Whitson
# Desc: a test makefile for git

# Compiler
CC = g++

# Debugging flag
DEBUG = -g

# Target
TARGET = gitTest

# Compile with all errors and warnings
CFLAGS = -c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
clean: rm *.o *~ $(TARGET)