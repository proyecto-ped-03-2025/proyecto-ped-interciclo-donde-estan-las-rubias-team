#include <iostream>
#include <string>

using namespace std;

//estructura del juego
struct Jugador{
    string nombre;
    int identificador;
    int puntaje;
    Jugador* sig;
    Jugador* ant;
};
//clase 
class Juego{
private:
    Jugador* pInicio;

public:
    Juego(){
        pInicio = NULL;
    }

    void insertar();
    void mostrar();
    void jugar();

};

#include "inscribir.h"
#include "mostrar.h"
#include "jugar.h"


int main(){
    Juego juego;
    int opcion;
    //menu del juego
    do{
        cout << "=== MENU ==="<<endl;
        cout << "1. Inscribir jugadores"<<endl;
        cout << "2. Mostrar jugadores"<<endl;
        cout << "3. Jugar"<<endl;
        cout << "4. Salir"<<endl;
        cout << "Opcion: ";
        cin >> opcion;
//llamar funciones
        switch(opcion){
            case 1:
                juego.insertar();
                break;
            case 2:
                juego.mostrar();
                break;
            case 3:
                juego.jugar();
                break;
        }

    } while(opcion != 4);

    return 0;
}
