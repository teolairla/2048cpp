#include "2048cpp.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void imprimir_celda(int);
bool casilla_llena(juego, int, int);
int calcular_num_al_azar();

/** inicializar_juego pone a 0 todas las posiciones de la
    matriz y el valor de la puntuación

    @param  j es un una estructura de tipo juego, definida
            en el fichreo de cabecera .h
    @return esta función no tiene valor de retorno.
*/
void inicializar_juego(juego &ju){

    for(int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            ju.tablero[i][j] = 0;
        }
    }
    ju.puntuacion = 0;
}


/** imprimir_juego imprime el tablero y la puntuación
    de manera amigable
    @param  ju es un tipo juego que contendrá la infor
            mación que se imprimirá.
    @return No hay un valor de retorno.
*/

void imprimir_juego(juego ju){

    cout<<"           2048 CPP          "<<endl;
    cout<<"============================="<<endl<<endl;
    cout<<"+------+------+------+------+"<<endl;
    for(int i=0;i<TAM;i++){
        cout<<"|";
        for (int j=0;j<TAM;j++){
            imprimir_celda(ju.tablero[i][j]);
            cout<<"|";
        }
        cout<<endl;
        cout<<"+------+------+------+------+"<<endl;
    }
    cout<<"Puntos: "<<ju.puntuacion<<endl;

}

void insertar_casilla_al_azar(juego &ju){

    int col, fila;
    col = calcular_num_al_azar();
    fila = calcular_num_al_azar();

    while ( casilla_llena(ju, fila, col) ){
        col = calcular_num_al_azar();
        fila = calcular_num_al_azar();
    }
    ju.tablero[fila][col] = 2;

}



/** imprimir_celda es una función que imprime el
    contenido de la celda según sea el número de
    cifras del número pasado por parámetro, co-
    mpletando con espacios hasta un total de 6
    caracteres
    @param n es un entero que se imprimirá
    @return La función no tiene valor de retorno.
*/

void imprimir_celda(int n){

    if(n<0){
        cout<<"Error!";
    }else if(n==0){
        cout<<"      ";
    }else if(n<10){
        cout<<"   "<<n<<"  ";
    }else if(n<100){
        cout<<"  "<<n<<"  ";
    }else if(n<1000){
        cout<<"  "<<n<<" ";
    }else if(n<10000){
        cout<<" "<<n<<" ";
    }else{
        cout<<"Error!";
    }
}

/** casilla_llena es una función que comprobará si
    hay un hueco en el tablero del juego según la
    posición indicada por los parámetros
    @param  i es un entero que representa la fila
            de la celda que se quiere consultar
    @param  j es un entero que representa la columna
            de la celda que se quiere consultar
    @return La función devolverá cierto en caso de
            que la casilla esté llena (valor diferente
            de cero) y falso en caso de que la casilla
            esté vacía (valor de la casilla igual a 0)
*/

bool casilla_llena(juego ju, int i, int j){

    if(ju.tablero[i][j] != 0){
        return true;
    }else{
        return false;
    }
}

/** calcular_num_al_azar() es una función que calcula un
    número al azar dentro de los límites del tablero.
    @return La función devolverá un entero que será el
            número calculado en el rango [0-TAM)
*/

int calcular_num_al_azar(){

    int num;

    srand( time(NULL) );

    num = rand()%TAM;

    return num;
}
