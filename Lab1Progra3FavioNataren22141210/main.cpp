using namespace std;
#include <iostream>
#include <vector>
#include <cmath> // Para utilizar la función pow()

double raizNesima(double x, int n2, double tolerancia = 1e-6, int maxIteraciones = 100) {
	double aproximacion = 1.0; // Valor inicial de la aproximación
	int ite = 0;//para contar las iteraciones

	for (int i = 0; i < maxIteraciones; ++i) {
		// Método de Newton-Raphson para calcular la aproximación
		double nuevaAproximacion = ((n2 - 1.0) * aproximacion + x / pow(aproximacion, n2 - 1)) / n2;

		// Verificar la convergencia
		if (abs(nuevaAproximacion - aproximacion) < tolerancia) {
			return nuevaAproximacion;
		}

		aproximacion = nuevaAproximacion;
		ite++;
		

	}
	

	// Si no converge en el número máximo de iteraciones, devolver la última aproximación
	return aproximacion;
	
}

int main() {

	int opcion = 0;

	while (opcion != 3) {
		cout << "\n-----Menu-----";
		cout << "\n1.Ejercicio 1";
		cout << "\n2.Ejercicio 2";
		cout << "\n3.Salir";
		cout << "\nIngrese Opcion: ";
		cin >> opcion;

		switch (opcion) {// se usa un switch para hacer el menu

		case 1: {
			cout << "\n--Ejercicio 1--";

			int n;
			cout << "Ingrese el tamaño del tablero (n x n): ";
			cin >> n;

			vector<vector<char>> tablero(n, vector<char>(n, ' ')); // se usa un vector de characteres para este ejercicio

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
			cout << "\n--Ejercicio 2--";


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