#ifndef INSCRIBIR_H
#define INSCRIBIR_H

void Juego::insertar()
{
    Jugador *nuevo;
    char respuesta;

    do
    {
        cout << "¿Quieres inscribir un jugador nuevo? (s/n): ";
        cin >> respuesta;

        if (respuesta == 's')
        {
            nuevo = new Jugador;
            nuevo->puntaje = 0;

            bool correcto;
            do
            {
                correcto = true;
                cout << "Nombre: ";
                cin >> nuevo->nombre;

                for (int i = 0; i < nuevo->nombre.length(); i++)
                {
                    if (isdigit(nuevo->nombre[i]))
                    {
                        correcto = false;
                    }
                }

                if (!correcto)
                    cout << "Solo se permiten letras.\n";

            } while (!correcto);

            string temp;
           

            do
            {
                correcto = true;
                cout << "Identificador numerico: ";
                cin >> temp;

                for (int i = 0; i < temp.length(); i++)
                {
                    if (!isdigit(temp[i]))
                    {
                        correcto = false;
                    }
                }

                if (!correcto)
                    cout << "Solo se permiten numeros.\n";

            } while (!correcto);

            nuevo->identificador = stoi(temp);

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
        }

    } while (respuesta == 's');
}

#endif