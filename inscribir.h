#ifndef INSCRIBIR_H
#define INSCRIBIR_H

#include <cctype>  

void Juego::insertar()
{
    Jugador *nuevo;
    string respuesta;

    do
    {
        // Validar respuesta
        cout << "Quieres inscribir un jugador nuevo? (s/n): ";
        cin >> respuesta;

        while (respuesta.length() != 1 ||
              (respuesta[0] != 's' && respuesta[0] != 'S' &&
               respuesta[0] != 'n' && respuesta[0] != 'N'))
        {
            cout << "Solo se permite S o N: ";
            cin >> respuesta;
        }
        if (respuesta == "n" || respuesta == "N")
            break;

        // Crear nuevo jugador 
        nuevo = new Jugador;
        nuevo->puntaje = 0;

        // Validar nombre
        bool correcto;
        do
        {
            correcto = true;
            cout << "Nombre: ";
            cin >> nuevo->nombre;

            for (int i = 0; i < nuevo->nombre.length(); i++)
            {
                if (isdigit(nuevo->nombre[i]))
                    correcto = false;
            }

            if (!correcto)
                cout << "Solo se permiten letras.\n";

        } while (!correcto);

        // Validar ID numerico y unico
        string temp;
        int id;
        bool unico;

        do
        {
            correcto = true;

            cout << "Identificador numerico: ";
            cin >> temp;

            // validar que solo tenga numeros
            for (int i = 0; i < temp.length(); i++)
            {
                if (!isdigit(temp[i]))
                    correcto = false;
            }

            if (!correcto)
            {
                cout << "Solo se permiten numeros.\n";
                continue;
            }

            id = stoi(temp);

            // verificar ID unico
            unico = true;

            if (pInicio != NULL)
            {
                Jugador* aux = pInicio;
                do
                {
                    if (aux->identificador == id)
                    {
                        unico = false;
                        cout << "Ese ID ya existe. Ingrese otro.\n";
                        break;
                    }
                    aux = aux->sig;
                } while (aux != pInicio);
            }

        } while (!correcto || !unico);

        nuevo->identificador = id;

        // Insertar en lista circular doble 
        if (pInicio == NULL)
        {
            nuevo->sig = nuevo;
            nuevo->ant = nuevo;
            pInicio = nuevo;
        }
        else
        {
            Jugador *ultimo = pInicio->ant;

            nuevo->sig = pInicio;
            nuevo->ant = ultimo;

            ultimo->sig = nuevo;
            pInicio->ant = nuevo;
        }

        cout << "Jugador agregado correctamente.\n";

    } while (true);
}

#endif
