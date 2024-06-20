#ifndef CARTAS_H_INCLUDED
#define CARTAS_H_INCLUDED

#include <iostream>
#include "cartas.h"

extern int embaucado_valores_carta[];

void print_mazo(int mazo[], int tam){
    for(int i=0; i<tam; i++){
        std::cout << mazo[i] << " ";
    }
    std::cout << std::endl;
}

void mezclar_baraja (int mazo[], int mezclado[], int tam) {
    for(int i=0; i<tam; i++){
        mezclado[i] = mazo[i] * 2;
    }
    //return 0;
}
int valor_carta(int carta_baraja){
    int index = carta_baraja % 10;
    return embaucado_valores_carta[index];
}
#endif // CARTAS_H_INCLUDED
