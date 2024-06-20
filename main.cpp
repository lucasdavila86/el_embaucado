#include <iostream>
#include "cartas.h"
using namespace std;


int main()
{
    int baraja_mezclada[TAM_BARAJA] = {0};

    cout << "El tamaño de la baraja es: " << TAM_BARAJA << endl;
    print_mazo(baraja_mezclada, TAM_BARAJA);
    print_mazo(embaucado_baraja, TAM_BARAJA);
    mezclar_baraja(embaucado_baraja, baraja_mezclada, TAM_BARAJA);
    print_mazo(baraja_mezclada, TAM_BARAJA);
    return 0;
}

/*

void modifyArray(int (&arr)[])
{
  // deducing size
  int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    modifyArray(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
