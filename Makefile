#Source files
SIFUC_OBJS = $(wildcard sifuc/*.cpp) $(wildcard sifuc/*/*.cpp)
JENSVM_OBJS = $(wildcard jensvm/*.cpp)

#Compiler
CC = g++

#Compiler Flags
COMP_FLAG = -w -std=c++11

#Linker Flags
LINK_FLAG = -lfl

#Name
SIFUC_NAME = build/sifuc
JENSVM_NAME = build/jensvm

#Targets
.PHONY: all sifuc jensvm

all: sifuc jensvm

sifuc: $(SIFUC_OBJS)
	$(CC) $(SIFUC_OBJS) $(COMP_FLAG) $(LINK_FLAG) -o $(SIFUC_NAME)

jensvm: $(JENSVM_OBJS)
	$(CC) $(JENSVM_OBJS) $(COMP_FLAG) -o $(JENSVM_NAME)