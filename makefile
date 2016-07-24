OBJ=main.o file_io.o z04_4d3.o
CC=g++
CFLAG= -g
out : $(OBJ)
	$(CC) $(CFLAG) -o out $(OBJ)
main.o:main.cpp
file_io.o:file_io.cpp
z04_4d3.o:z04_4d3.cpp

clean:
	-rm out $(OBJ)
