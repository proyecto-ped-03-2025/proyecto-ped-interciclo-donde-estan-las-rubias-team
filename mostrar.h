#ifndef MOSTRAR_H
#define MOSTRAR_H

void Juego::mostrar(){
    if(pInicio == NULL){
        cout << "\nNo hay jugadores inscritos.\n";
        return;
    }

    Jugador* aux = pInicio;

    cout << "\n=== LISTA DE JUGADORES ===\n";

    do {
        cout << "Nombre: " << aux->nombre << endl;
        cout << "ID: " << aux->identificador << endl;
        cout << "-------------------\n";

        aux = aux->sig;

    } while(aux != pInicio);
}

#endif