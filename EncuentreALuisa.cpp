#include "EncuentreALuisa.h"
#include "time.h"

void EncuentreALuisa::crearVector(){
    srand(time(nullptr));
    string valorBase = "X";
    string valorComodin = "O";
    string valorGanador = "Luisa";
    int valorMaximo = 100;
    int posicionBases;
    int posicionComodin;
    for(int i = 0; i < valorMaximo; i++){
        vectorLuisa[i] = "X" ;
    }
    for(int j = 0; j < 5; j++){
        int posicionComodin = 1 + rand()% valorMaximo;
        vectorLuisa[posicionComodin] = "O"; 
    }
    int posicionLuisa = 1 + rand()% valorMaximo;
    vectorLuisa[posicionLuisa] = valorGanador; 
}

float EncuentreALuisa::jugar(float gonzosApostar){
    float gonzosResultado;
    int vidas = 3;
    int posicion;
    bool ganarOPerder = false;
    for(int i = 0; i < vidas; i++){
        cout << "Digite una posición : "<<endl;
        cin >> posicion;
        if(vectorLuisa[posicion] == "O"){
            vidas++;
        }
        else if(vectorLuisa[posicion] == "Luisa"){
            ganarOPerder = true;
        }
    }
    if (ganarOPerder = true){
        gonzosResultado = calcularResultado(gonzosApostar);
        return gonzosResultado;
    }
}

bool EncuentreALuisa::verificar(){
    int vidas = 3;
    int posicion;
    bool ganarOPerder = false;
    for(int i = 0; i < vidas; i++){
        cout << "Digite una posición : "<<endl;
        cin >> posicion;
        if(vectorLuisa[posicion] == "O"){
            vidas++;
        }
        else if(vectorLuisa[posicion] == "Luisa"){
            ganarOPerder = true;
        }
    }
    return ganarOPerder;

}

float EncuentreALuisa::calcularResultado(float gonzosApostar){
    float gonzosPerdidos = gonzosApostar / 2;
    if(verificar() == true){
        cout << "Has ganado !!!"<<endl;
        cout << "Tu recompenza es de 100 Gonzos!!!"<<endl;
        return gonzosApostar + 100;
    }
    else{
        cout<<"Has perdido, lo sentimos, vuelve a intertar en proximas ocasiones"<<endl;
        return gonzosPerdidos;
    }
}

void EncuentreALuisa::mostrarReglas(){
    cout<< "Debe encontrar a Luisa, esta en una posición aleatoria, si acierta la posicion en la que se encuentra en un espacio"
    "de 100 casillas ganara el juego, si encuentra un comodin (O) tendra una oportunidad más (empieza con tres oportinudades),"
    "si sale una X entonces no obtendra nada"<<endl;
}