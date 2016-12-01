#include <iostream>
#include "lib/2048cpp.h"

using namespace std;

int main()
{
    char movimiento;
    juego j;
    inicializar_juego(j);
    imprimir_juego(j);
    insertar_casilla_al_azar(j);
    imprimir_juego(j);

/*
    while( final_juego(j) == false){
        movimiento = pedir_movimiento();
        ejecutar_movimiento(j, movimiento);
        insertar_casilla_al_azar(j);
        imprimir_juego(j);
    }
*/
    return 0;
}
