#include <iostream>
#ifndef POO_GPEREZ_T03_FRACCION_H
#define POO_GPEREZ_T03_FRACCION_H

class Fraccion {

    friend Fraccion operator + (const Fraccion &F1, const Fraccion &F2);
    friend Fraccion operator - (const Fraccion &F1, const Fraccion &F2);
    friend Fraccion operator * (const Fraccion &F1, const Fraccion &F2);
    friend Fraccion operator / (const Fraccion &F1, const Fraccion &F2);
    friend bool operator < (const Fraccion &F1, const Fraccion &F2);
    friend bool operator > (const Fraccion &F1, const Fraccion &F2);
    friend bool operator <= (const Fraccion &F1, const Fraccion &F2);
    friend bool operator >= (const Fraccion &F1, const Fraccion &F2);
    friend bool operator == (const Fraccion &F1, const Fraccion &F2);
    friend bool operator != (const Fraccion &F1, const Fraccion &F2);

public:
    int numerador, denomidador;
//Construtor
    Fraccion();
    Fraccion(int numerador, int denominador);
    std::string To_String();
};
#endif //POO_GPEREZ_T03_FRACCION_H
