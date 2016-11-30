#include "2048cpp.h"
#include <iostream>

using namespace std;

void imprimir_celda(int);

void prueba(){

    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
}

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

