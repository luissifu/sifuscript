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
NAME = build/sifuc

#Targets
sifuc : $(SIFUC_OBJS)
	$(CC) $(SIFUC_OBJS) $(COMP_FLAG) $(LINK_FLAG) -o $(NAME)

jensvm : $(JENSVM_OBJS)
	$(CC) $(JENSVM_OBJS) $(COMP_FLAG) $(LINK_FLAG) -o $(NAME)