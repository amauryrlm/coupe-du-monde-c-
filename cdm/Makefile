CC=g++
CCFLAGS= -Wall -Werror -std=c++11 -g
LIBFLAGS=
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
EXEC= cours_test.exe



all: $(EXEC)


$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

.depends:
	g++ -MM $(SRC) > .depends

-include .depends

test : $(EXEC)
	./$(EXEC)
clean:
	rm -f $(OBJ) $(EXEC) *.*~
