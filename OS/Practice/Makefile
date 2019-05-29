TARGET=main.out
SRC=emp.c function.c main.c
OBJ=emp.o function.o main.o
$(TARGET):$(OBJ)
	gcc -o $(TARGET) $(OBJ)
$(TARGET):$(SRC)
						gcc -c $(SRC)
run:
	./$(TARGET)
clean:
	rm -f *.out*.o
