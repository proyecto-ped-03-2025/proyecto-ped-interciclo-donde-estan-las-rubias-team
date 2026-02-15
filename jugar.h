#ifndef JUGAR_H
#define JUGAR_H

void Juego::jugar() {
    if (pInicio == NULL || pInicio->sig == pInicio) {
        cout << "Se necesitan al menos 2 jugadores" << endl;
        return;
    }

   Jugador* j1 = pInicio;

while (j1->sig != pInicio) {  
    Jugador* j2 = j1->sig;

    while (j2 != pInicio) {   

        int op1, op2;

        cout << "\n" << j1->nombre << " vs " << j2->nombre << endl;
        cout << "1.Piedra 2.Papel 3.Tijera\n";

        cout << j1->nombre << ": ";
        cin >> op1;

        cout << j2->nombre << ": ";
        cin >> op2;

        if (op1 == op2){
            j1->puntaje++;
            j2->puntaje++;
        }
        else if ((op1==1 && op2==3) ||
                 (op1==2 && op2==1) ||
                 (op1==3 && op2==2)){
            j1->puntaje += 3;
        }
        else{
            j2->puntaje += 3;
        }

        j2 = j2->sig;
    }

    j1 = j1->sig;
}

}

#endif
