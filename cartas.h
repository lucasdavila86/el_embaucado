#ifndef CARTAS_H_INCLUDED
#define CARTAS_H_INCLUDED

#define TAM_BARAJA 20
#define TAM_FIGURAS 4

int embaucado_baraja[TAM_BARAJA] = {10, 11, 12, 13, 14, // 10♥, J♥, Q♥, K♥, A♥
                                    20, 21, 22, 23, 24, // 10◆, J◆, Q◆, K◆, A◆
                                    30, 31, 32, 33, 34, // 10♠, J♠, Q♠, K♠, A♠
                                    40, 41, 42, 43, 44};// 10♣, J♣, Q♣, K♣, A♣

int embaucado_figuras[TAM_FIGURAS] = {10, 20, 30, 40}; // ♥, ◆, ♠, ♣

void mezclar_baraja (int mazo[], int mezclado[], int tam);
void print_mazo(int mazo[], int tam);

#endif // CARTAS_H_INCLUDED
