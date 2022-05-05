CC=g++
EXEC=test
LIBO=libcgfw.a
CFLAGS=-I. -lsfml-graphics -lsfml-window -lsfml-system
MAIN=main.cpp
OBJ=Game.o GameState.o InputHandler.o TimeStep.o

%.o: %.cpp
	$(info Compiling "$<")
	@$(CC) -c $< $(CFLAGS)

all: $(OBJ)
	$(info Compiling Library "$(EXEC)")
	@ar crf $(LIBO) $(OBJ)
	$(info Compiling Test Program "$(EXEC)")
	@$(CC) $(MAIN) libcgfw.a $(CFLAGS) -o $(EXEC)

clean:
	$(info Cleaning object files)
	rm -f *.o
	rm -f $(EXEC)