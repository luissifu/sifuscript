#Source files
OBJS = $(wildcard source/*.cpp) $(wildcard source/*/*.cpp)

#Compiler
CC = g++

#Compiler Flags
COMP_FLAG = -w

#Linker Flags
LINK_FLAG = -lfl

#Name
NAME = build/sifuc

#Targets
sifuc : $(OBJS) 
	$(CC) $(OBJS) $(COMP_FLAG) $(LINK_FLAG) -o $(NAME)