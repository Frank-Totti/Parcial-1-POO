all: compilar
compilar: jugador juego slots dosColores mayor13 luisa casino view mainCasinoDeGonzo
	g++ -o out jugador.o slots.o dosColores.o mayor13.o EncuentreALuisa.o casino.o view.o mainCasinoDeGonzo.o 
jugador: jugador.cpp jugador.h
	g++ -c jugador.cpp
juego: jugador.h juego.h
	g++ -c juego.h
slots: juego.h slots.cpp slots.h
	g++ -c slots.cpp
dosColores: juego.h dosColores.cpp dosColores.h
	g++ -c dosColores.cpp
mayor13: juego.h mayor13.cpp mayor13.h
	g++ -c mayor13.cpp
luisa: juego.h EncuentreALuisa.cpp EncuentreALuisa.h
	g++ -c EncuentreALuisa.cpp
casino: juego.h mayor13.h dosColores.h slots.h casino.cpp casino.h
	g++ -c casino.cpp
view: casino.h view.cpp view.h
	g++ -c view.cpp
mainCasinoDeGonzo: view.h mainCasinoDeGonzo.cpp
	g++ -c mainCasinoDeGonzo.cpp
clean: //Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o