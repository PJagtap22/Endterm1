CC = g++ 
CFLAG = 

main.exe: main.o vehicle.o 
    $(CC) $(CFLAG) -o main.exe main.o vehicle.o 

main.o: main.cpp vehicle.h
    $(cc) $(CFLAG) -c main.cpp

vehicle.o: vehicle.cpp vehicle.h
    $(CC) $(CFLAG) -c vehicle.cpp

Clean :
    rm -f main.exe *.o

     