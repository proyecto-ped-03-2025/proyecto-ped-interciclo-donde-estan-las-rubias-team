#include <iostream>
#include <string>

using namespace std;

//estructura del juego
struct Jugador{
    string nombre;
    int identificador;
    Jugador* sig;
    Jugador* ant;
};

class Juego{
private:
    Jugador* pInicio;

public:
    Juego(){
        pInicio = NULL;
    }

    void insertar();
    void mostrar();
};

#include "inscribir.h"
#include "mostrar.h"

int main(){
    Juego juego;
    int opcion;
    //menu del juego
    do{
        cout << "=== MENU ==="<<endl;
        cout << "1. Inscribir jugadores"<<endl;
        cout << "2. Mostrar jugadores"<<endl;
        cout << "3. Salir"<<endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                juego.insertar();
                break;
            case 2:
                juego.mostrar();
                break;
        }

    } while(opcion != 3);

    return 0;
}
