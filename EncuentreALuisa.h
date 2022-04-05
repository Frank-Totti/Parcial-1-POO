#ifndef LUISA_H
#define LUISA_H

#include <iostream>
#include "Juego.h"
#include <vector>

using namespace std;

class EncuentreALuisa : public Juego{
    private: 
        vector <string> vectorLuisa;
    public:
        void crearVector();
        float jugar(float)override;
        float calcularResultado(float)override;
        void mostrarReglas()override;
        bool verificar();
};

#endif