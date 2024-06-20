#ifndef CARTAS_H_INCLUDED
#define CARTAS_H_INCLUDED

#include <iostream>
#include "cartas.h"

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

#endif // CARTAS_H_INCLUDED
