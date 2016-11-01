lookup:  main.o HashTable.o Lookup.o 
	g++ -o lookup main.o HashTable.o Lookup.o
main.o: main.cpp Lookup.hpp HashTable.hpp
	g++ -c main.cpp
HashTable.o: HashTable.cpp HashTable.hpp
	g++ -c HashTable.cpp
Lookup.o: Lookup.cpp HashTable.hpp Lookup.hpp	
	g++ -c Lookup.cpp