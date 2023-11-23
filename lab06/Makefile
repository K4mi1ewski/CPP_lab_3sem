Array.exe: main.o Warehouse_1.o Warehouse_2.o Warehouse_3.o Warehouse_4.o
	g++ -o Array.exe main.o Warehouse_1.o Warehouse_2.o Warehouse_3.o Warehouse_4.o
Warehouse_1.o: Warehouse_1.cpp Warehouse_1.h
	g++ -c Warehouse_1.cpp -Wall
Warehouse_2.o: Warehouse_2.cpp Warehouse_2.h
	g++ -c Warehouse_2.cpp -Wall
Warehouse_3.o: Warehouse_3.cpp Warehouse_3.h
	g++ -c Warehouse_3.cpp -Wall
Warehouse_4.o: Warehouse_4.cpp Warehouse_4.h
	g++ -c Warehouse_4.cpp -Wall
main.o: main.cpp Warehouse_1.h Warehouse_2.h Warehouse_3.h Warehouse_4.h
	g++ -c main.cpp -Wall