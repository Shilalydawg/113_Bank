#Bank Project makefile

bank: accounts.o money.o stats.o project1.o
	g++ accounts.o money.o stats.o project1.o -o bank
accounts.o: accounts.cpp accounts.h
	g++ -c accounts.cpp
money.o: money.cpp money.h
	g++ -c money.cpp
stats.o: stats.cpp stats.h
	g++ -c stats.cpp
project1.o: project1.cpp
	g++ -c project1.cpp
clean: 
	rm -rf *o bank