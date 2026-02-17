#ifndef GANADOR_H
#define GANADOR_H

void Juego::reportarGanador()
{
    if (pInicio == NULL)
    {
        cout << "No hay jugadores registrados.\n";
        return;
    }

    Jugador* aux = pInicio;
    int maxPuntaje = pInicio->puntaje;

    // 🔹 1. Buscar el puntaje máximo
    aux = aux->sig;
    while (aux != pInicio)
    {
        if (aux->puntaje > maxPuntaje)
        {
            maxPuntaje = aux->puntaje;
        }
        aux = aux->sig;
    }

    // 🔹 2. Mostrar TODOS los jugadores con su puntaje
    cout << "\n--- Puntajes finales ---\n";
    aux = pInicio;
    do
    {
        cout << aux->nombre << " -> " << aux->puntaje << " puntos\n";
        aux = aux->sig;
    } while (aux != pInicio);

    // 🔹 3. Contar cuántos tienen el puntaje máximo
    int contador = 0;
    aux = pInicio;

    do
    {
        if (aux->puntaje == maxPuntaje)
        {
            contador++;
        }
        aux = aux->sig;

    } while (aux != pInicio);

    // 🔹 4. Decidir resultado
    if (contador == 1)
    {
        aux = pInicio;
        do
        {
            if (aux->puntaje == maxPuntaje)
            {
                cout << "\nEl ganador es: " 
                     << aux->nombre 
                     << " con " << maxPuntaje 
                     << " puntos.\n";
            }
            aux = aux->sig;

        } while (aux != pInicio);
    }
    else
    {
        cout << "\nHay empate entre:\n";
        aux = pInicio;
        do
        {
            if (aux->puntaje == maxPuntaje)
            {
                cout << "- " << aux->nombre << endl;
            }
            aux = aux->sig;

        } while (aux != pInicio);

        cout << "Todos con " << maxPuntaje << " puntos.\n";
    }
}

#endif
