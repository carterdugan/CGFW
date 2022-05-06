CC=g++
LIBO=libcgfw.a
CFLAGS=-I. -lsfml-graphics -lsfml-window -lsfml-system
OBJ=Game.o GameState.o InputHandler.o TimeStep.o

%.o: %.cpp
	$(info Compiling "$<")
	@$(CC) -c $< $(CFLAGS)

all: $(OBJ)
	$(info Creating Library "$(LIBO)")
	@ar crf $(LIBO) $(OBJ)

clean:
	$(info Cleaning object files)
	rm -f *.o
	rm -f $(EXEC)