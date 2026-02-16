#ifndef AYUDA_H
#define AYUDA_H

void Juego::ayuda(){

    cout << "=========== AYUDA DEL JUEGO ==========="<<endl;
// Mensajes para mostrar al menu ayuda
    cout << "OBJETIVO DEL JUEGO:"<<endl;
    cout << "Todos los jugadores compiten entre si"<<endl;
    cout << "en piedra, papel o tijera"<<endl;
    cout << "Cada jugador se enfrenta una sola vez"<<endl;
    cout << "contra cada participante."<<endl;
    cout << "----------------------------------------"<<endl;


    cout << " OPCIONES DEL MENU: "<<endl;

    cout << " 1. INSCRIBIR JUGADORES "<<endl;
    cout << "- Permite inscribir nuevos jugadores "<<endl;
    cout << "- Se pide nombre e identificador numero "<<endl;
    cout << "- Los jugadores se guardan en una "<<endl;
    cout << "-  lista circular."<<endl;
    cout << "----------------------------------------"<<endl;

    cout << " 2. MOSTRAR JUGADORES "<<endl;
    cout << "- Muestra todos los jugadores que se han inscrito"<<endl;
    cout << "- Sirve para verificar que fueron"<<endl;
    cout << "  registrados correctamente"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << " 3. JUGAR "<<endl;
    cout << "- Todos los jugadores compiten"<<endl;
    cout << "- Cada par juega una sola vez"<<endl;
    cout << "- Opciones:"<<endl;
    cout << "   1 = Piedra"<<endl;
    cout << "   2 = Papel"<<endl;
    cout << "   3 = Tijera"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "- Puntajes:"<<endl;
    cout << " La victoria equivale a 3 puntos"<<endl;
    cout << " El empate equivale 1 punto cada jugador"<<endl;
    cout << " La derrota = 0 puntos"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "4. MOSTRAR GANADOR "<<endl;
    cout << "- Muestra quien obtuvo mas puntos, siendo asi el ganador"<<endl;
    cout << "- Tambien muestra el puntaje de todos"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "5. AYUDA"<<endl;
    cout << "- Muestra este menu con la informacion para ayudar al jugador"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "6. SALIR"<<endl;
    cout << "- Sale del programa"<<endl;
    cout << "----------------------------------------"<<endl;

}

#endif
