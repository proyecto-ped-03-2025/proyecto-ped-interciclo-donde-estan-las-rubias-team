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
    void mostrarRecursivo(Jugador* actual, Jugador* inicio);
    void mostrarJugadoresRecursivo();
    void jugar();
    Jugador* getInicio();
    void reportarGanador();
    void ayuda();


};
Jugador* Juego::getInicio(){
    return pInicio;
}

//Llamado de las librerias .h
#include "inscribir.h"
#include "mostrar.h"
#include "recursion.h"
#include "jugar.h"
#include "ganador.h"
#include "ayuda.h"



int main(){
    Juego juego;
    int opcion;
    //menu del juego
    do{
        cout << "=== MENU ==="<<endl;
        cout << "1. Inscribir jugadores"<<endl;
        cout << "2. Mostrar jugadores"<<endl;
        cout << "3. Jugar"<<endl;
        cout << "4. Mostrar ganador"<<endl;
        cout << "5. Ayuda"<<endl;
        cout << "6. Mostrar recursion"<<endl;
        cout << "7. salir"<<endl;
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
            case 4:
                juego.reportarGanador();
                break;
            case 5: 
                juego.ayuda();
                break;
            case 6:
               juego.mostrarJugadoresRecursivo();
                break;
            case 7:
                cout << "Nos vemos :P"<<endl;
                break;


            default:
                cout << "Ingrese una opcion correcta"<<endl;
            }

    } while(opcion != 7);
    

    return 0;
}
