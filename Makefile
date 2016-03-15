CC = g++
CFLAGS = -Wall -g
OBJECTS = power.o main.o battery.o
EXECUTABLE = power_driver

power_driver: $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS)
main.o: main.cpp power.o battery.o
	$(CC) $(CFLAGS) -c main.cpp -o main.o
power.o: power.cpp power.h
	$(CC) $(CFLAGS) -c power.cpp -o power.o
battery.o: battery.cpp battery.h
	$(CC) $(CFLAGS) -c battery.cpp -o battery.o
clean:
	rm $(EXECUTABLE) $(OBJECTS)
