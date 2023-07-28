using namespace std;
#include <iostream>


int main() {

	int x = 0;

	while (x!=3) {
		cout << "\n----Menu----";
		cout << "\n1.Ejercicio 1";
		cout << "\n2.Ejercicio 2";
		cout << "\n3.salir";
		cout << "\nIngrese Opcion: ";
		cin >> x;

			switch (x) {

			case 1: {
				cout << "\nEjercicio 1";

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