using namespace std;
#include <iostream>
#include <vector>


int main() {

	int opcion = 0;

	while (opcion != 3) {
		cout << "\n----Menu----";
		cout << "\n1.Ejercicio 1";
		cout << "\n2.Ejercicio 2";
		cout << "\n3.salir";
		cout << "\nIngrese Opcion: ";
		cin >> opcion;

		switch (opcion) {// se usa un switch para hacer el menu

		case 1: {
			cout << "\nEjercicio 1";

			int n;
			cout << "Ingrese el tamaño del tablero (n x n): ";
			cin >> n;

			vector<vector<char>> tablero(n, vector<char>(n, ' ')); // se usa vectores para este ejercicio

			int fila = 0;
			while (fila < n) {
				int columna = 0;
				while (columna < n) {
					// para alternar el color de las casillas
					if ((fila + columna) % 2 == 0) {
						tablero[fila][columna] = '0'; // Casillas blancas con el numero 0
					}
					else {
						tablero[fila][columna] = '1'; // Casillas negras con el numero 1
					}
					columna++;
				}
				fila++;
			}

			// Mostrar el tablero en la consola
			fila = 0;
			while (fila < n) {
				int columna = 0;
				while (columna < n) {
					std::cout << tablero[fila][columna] << "";
					columna++;
				}
				cout << endl;
				fila++;
			}

			cout << "\n";
			break;
		}
		case 2: {
			cout << "\nEjercicio 2";

			cout << "\n";
			break;
		}

		case 3: {
			cout << "\nSaliendo...";

			break;
		}

		default: {
			cout << "\nopcion incorrecta";
			cout << "\n";
			break;
		}
		}


	}

	return 0;
}