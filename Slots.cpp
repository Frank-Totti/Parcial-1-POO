#include "Slots.h"

float Slots::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;

    cout << "Calculará tres numeros aleatorios del 1 al 6: \n";
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    slot1 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot2 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot3 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Slots::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float lowestResult = 1.5;
    float intermediateResult = 7;

    if (slot1 == slot2 && slot2 == slot3) {
        return intermediateResult * gonzosApostar;
    } else if (slot1 == slot2 + 1 && slot2 == slot3 + 1) {
        return lowestResult * gonzosApostar;
    } else if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
        return maxResult * gonzosApostar;
    } else {
        return 0;
    }
}

void Slots::mostrarReglas(){
    cout << "A continuacion, las reglas para el juego de Slots"<<endl;
    cout << "Mecanica:"<<endl;
    cout << "Slots es un juego en el que una maquina escoge aleatoriamente 3 simbolos (en algunos"
            "modelos son 5). Si caen los 3 simbolos iguales o alguna combinación especial el jugador"
            "ganará cierta cantidad, de lo contrario perdera lo apostado."<<endl;
    cout << "Como gano en el juego ?"<< endl;
    cout << "En esta versión de Slots se generaran 3 numeros entre 1 y 7. Si caen los 3 numeros"
            "iguales el jugador ganará el doble de lo apostado, si consigue una escalera (numeros"
            "sucesivos sea ascendente o descendente) ganará la mitad de lo apostado. Si llega"
            "a conseguir el triple 7 ganará 7 veces lo apostado. Si no consigue ninguna perderá"
            "lo apostado." << endl;
}