//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;


    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

void Mayor13::mostrarReglas(){
    cout<< "A continuación las reglas para el juego de El Mayor de 13"<<endl;
    cout << "Mecanica del juego"<<endl;
    cout << "El sistema genera un número aleatorio para el usuario entre 1 y 13."
    "Ahí el usuario debe tener 2 opciones para continuar, la primera: darse por perdido antes de que se genere el número"
    "que le corresponde a casino (en este caso perderá la mitad del dinero apostado). La segunda: jugar, es decir,"
    "que se genere el número aleatorio del casino." <<endl;
    cout << "Como gano en el juego ?"<<endl;
    cout << "En caso de que el usuario saque un número menor o igual que el casino, perderá todo lo apostado."
    "En otro caso, el usuario ganará el doble de lo apostado (es decir, apostado x 2)." << endl;
}