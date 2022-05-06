CC=g++
CFLAGS=-I. -I../../src -L../../ -lcgfw -lsfml-graphics -lsfml-window -lsfml-system
OBJ=Pong.o
EXEC=pong

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c

all: $(OBJ)
	+$(MAKE) -C ../../
	$(CC) $(OBJ) $(CFLAGS) -o $(EXEC)

clean:
	rm -f *.o
	rm -f pong