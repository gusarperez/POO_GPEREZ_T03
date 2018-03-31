//
// Created by gusar on 3/22/2018.
//
#include "Fraccion.h"

Fraccion::Fraccion(){
    this->denomidador=denomidador;
    this->numerador=numerador;
}
Fraccion::Fraccion(int numerador, int denominador){
    this->numerador=numerador;
    this->denomidador=denominador;
}
Fraccion operator + (const Fraccion &F1, const Fraccion &F2) {
    Fraccion Fr;
    Fr.denomidador= F1.denomidador * F2.denomidador;
    Fr.numerador= F1.numerador * F2.denomidador + F2.numerador * F1.denomidador;
    return Fr;
}
Fraccion operator - (const Fraccion &F1, const Fraccion &F2){
    Fraccion Fr;
    Fr.denomidador= F1.denomidador * F2.denomidador;
    Fr.numerador= F1.numerador * F2.denomidador - F2.numerador * F1.denomidador;
    return Fr;
}
Fraccion operator * (const Fraccion &F1, const Fraccion &F2){
    Fraccion Fr;
    Fr.denomidador= F1.denomidador * F2.denomidador;
    Fr.numerador= F1.numerador * F2.numerador;
    return Fr;
}
Fraccion operator / (const Fraccion &F1, const Fraccion &F2) {
    Fraccion Fr;
    Fr.denomidador = F1.denomidador * F2.numerador;
    Fr.numerador = F1.numerador * F2.denomidador;
    return Fr;
}
//Comparadores logicos <,>,<=,>=, ==,!=
bool operator < (const Fraccion &F1, const Fraccion &F2){
    float a,b,c;
    a = F1.numerador / F1.denomidador;
    b = F2.numerador / F2.denomidador;
    c= a<b;
    return c;
}
bool operator > (const Fraccion &F1, const Fraccion &F2){
    float a,b,c;
    a= F1.numerador / F1.denomidador;
    b= F2.numerador / F2.denomidador;
    c= a>b;
    return c;
}
bool operator  <= (const Fraccion &F1, const Fraccion &F2){
    float a,b,c;
    a= F1.numerador / F1.denomidador;
    b= F2.numerador / F2.denomidador;
    c= a<=b;
    return c;
}
bool operator >=  (const Fraccion &F1, const Fraccion &F2){
    float a,b,c;
    a= F1.numerador / F1.denomidador;
    b= F2.numerador / F2.denomidador;
    c= a>=b;
    return c;
}
bool operator == (const Fraccion &F1, const Fraccion &F2){
    float  a,b,c;
    a= F1.numerador / F1.denomidador;
    b= F2.numerador / F2.denomidador;
    c= a==b;
    return c;
}
bool operator != (const Fraccion &F1, const Fraccion &F2){
    float a,b,c;
    a= F1.numerador / F1.denomidador;
    b= F2.numerador / F2.denomidador;
    c= a!=b;
    return c;
}
std:: string Fraccion::To_String() {
    return std::to_string(numerador)+"/"+ std::to_string(denomidador);
}