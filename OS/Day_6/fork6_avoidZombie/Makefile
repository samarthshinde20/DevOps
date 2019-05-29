TARGET=fork6_avoidZombie

$(TARGET).out: $(TARGET).o
	gcc -o $(TARGET).out $(TARGET).o

$(TARGET).o: $(TARGET).c
	gcc -c $(TARGET).c

clean:
	rm -rf *.o *.out
