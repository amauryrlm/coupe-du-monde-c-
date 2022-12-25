CC=g++
CCFLAGS= -Wall -Werror -std=c++11 -g
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
SRC= $(wildcard ../*.cc)
OBJ= $(SRC:.cc=.o)
TST= $(wildcard *.cc)
OBJ_TEST = $(filter-out ../main.o, $(OBJ)) $(TST:.cc=.o)

ALL:try tryo

try : try.cc
	$(CC) -c try.cc
tryo : try.o
	$(CC) try.o -o sfml-app $(LIBS)
	



clean :
	rm try.o 
	rm sfml-app