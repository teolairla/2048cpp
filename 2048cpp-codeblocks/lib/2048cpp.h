#ifndef J2048CPP_H_INCLUDED
#define J2048CPP_H_INCLUDED

#define TAM 4

typedef struct{

    int tablero[TAM][TAM];
    int puntuacion;

}juego;

void prueba();
void inicializar_juego(juego&);
void imprimir_juego(juego);


#endif // 2048CPP_H_INCLUDED
