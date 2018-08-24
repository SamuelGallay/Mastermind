CXX=g++
CXXFLAGS=-Wall -Wextra
RM=rm -f
EXEC=MasterMind

sources = position.cpp reponse.cpp game.cpp robot.cpp main.cpp
entetes = robot.h game.h reponse.h position.h
objets = $(sources:.cpp=.o)

default:all

all: $(objets)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(objets)

position.o: position.h
reponse.o: reponse.h position.h
game.o: game.h reponse.h position.h
robot.o: game.h position.h
main.o: game.h reponse.h position.h

.c.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	$(RM) *.o *~

mrproper: clean
	$(RM) $(EXEC)
