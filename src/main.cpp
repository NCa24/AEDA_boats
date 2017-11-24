
#include <iostream>
#include "cliente.h"
#include "empresa.h"
#include "fornecedor.h"
#include "reserva.h"

using namespace std;

int main() {
	Empresa empresa;
	empresa.getClientsFromFile();
	string decision = "in";
	while(decision != "exit"){
		cout << "1 - cliente; 2 - fornecedor:" << endl;
		cin >> decision;
		if(decision == "cliente"){
			cout << endl << "1 - login; 2 - registar; 3 - visitante:" << endl;
			cin >> decision;
			if (decision == "login"){
				//login
			} else if (decision == "registar"){
				empresa.addCliente();
			} else if (decision == "visitante"){
				//visitante
			}
		} else if (decision == "fornecedor"){
			//ir para a area do fornecedor
		};
	};
	empresa.addCliente();
	empresa.writeToFile();

	return 0;
}
