#ifndef RECURSION_H
#define RECURSION_H

#include <iostream>
using namespace std;

// FUNCION RECURiVA
void Juego::mostrarRecursivo(Jugador* actual, Jugador* inicio){

    if(actual == NULL)
        return;

    cout << "Nombre: " << actual->nombre << endl;
    cout << "ID: " << actual->identificador << endl;
    cout << "-------------------" << endl;

    if(actual->sig != inicio){
        mostrarRecursivo(actual->sig, inicio);
    }
}

// LLAMADO DE LA RECURSIVIDAD
void Juego::mostrarJugadoresRecursivo(){

    if(pInicio == NULL){
        cout << "No hay jugadores.\n";
        return;
    }

    cout << "\n=== MOSTRAR JUGADORES (RECURSIVO) ===\n";
    mostrarRecursivo(pInicio, pInicio);
}

#endif


