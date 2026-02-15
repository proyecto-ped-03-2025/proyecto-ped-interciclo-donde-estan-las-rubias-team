#ifndef GANADOR_H
#define GANADOR_H

void Juego::reportarGanador(){
    if(pInicio == NULL){
        cout << "No hay jugadores inscritos.\n";
        return;
    }

    Jugador* aux = pInicio;
    Jugador* ganador = pInicio;

    // Buscar mayor puntaje
    do{
        if(aux->puntaje > ganador->puntaje){
            ganador = aux;
        }
        aux = aux->sig;
    }while(aux != pInicio);

    cout << "\n===== GANADOR =====\n";
    cout << ganador->nombre
         << " con "
         << ganador->puntaje
         << " puntos\n";

    cout << "\n===== PUNTAJES =====\n";

    aux = pInicio;
    do{
        cout << aux->nombre
             << " -> "
             << aux->puntaje
             << " puntos\n";

        aux = aux->sig;
    }while(aux != pInicio);
}

#endif
