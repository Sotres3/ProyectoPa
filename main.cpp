#include <iostream>
using namespace std;


void seleccionarBarcos();
void posicionarBarcos();
void iniciarPartida();
void salir();


int main() {
    int opc;
    do {
        cout << "\n    Menu Principal    \n";
        cout << "1. Seleccionar barcos\n";
        cout << "2. Posicionar barcos\n";
        cout << "3. Iniciar partida\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;
        switch (opc) {
            case 1:
                seleccionarBarcos();
                break;
            case 2:
                posicionarBarcos();
                break;
            case 3:
                iniciarPartida();
                break;
            case 4:
                salir();
                break;
            default:
                cout << "Opcion no valida.\n";
        };

    } while (opc != 5);
};
