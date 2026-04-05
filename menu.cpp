#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int opcion;

	cout<<"******MENU PRINCIPAL******\n";
	cout<<"1. Instrucciones\n";
	cout<<"2. Iniciar Juego\n";
	cout<<"3. Salir\n";
	
	cout<<"Elija una opcion\n";
	cin>>opcion;
	switch (opcion) {
	case 1:

		cout << "\nElegiste las INSTRUCCIONES.\n";
		cout << "****** INSTRUCCIONES DEL JUEGO ******\n";
		cout << "1. Dos jugadores juegan por turnos.\n";
		cout << "2. Hay tres filas: 3, 5 y 7 objetos.\n";
		cout << "3. En tu turno eliges una fila y retiras cualquier cantidad.\n";
		cout << "4. El jugador que deje el ultimo objeto pierde.\n";
		cout << "5. Si no quedan objetos, es empate.\n";
		cout << "6. Ganar = 3 puntos, Empatar = 1 punto, Perder = 0 puntos.\n";
		break;
	
	case 2:
		cout << "\nEligiste Iniciar el Juego.\n";
		break;
	case 3:
		cout << "\nSaliendo del programa, bye \n";
		return 0;
		break;
	default:
		cout << "\nOpcion invalida. Intenta de nuevo.\n";
	}
	
	
	return 0;
}

