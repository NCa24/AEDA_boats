
#include <iostream>
#include "cliente.h"
#include "empresa.h"
#include "fornecedor.h"
#include "reserva.h"

using namespace std;

int main() {
	Empresa empresa;
	string fornecedor, cliente;
	empresa.getClientsFromFile();
	string decision = "in";
	while(decision != "exit"){
		cout << "1 - cliente; 2 - fornecedor:" << endl;
		cin >> decision;
		if(decision == "cliente"){
			cout << endl << "Clientes: 1 - login; 2 - registar; 3 - visitante:" << endl;
			cin >> decision;
			if (decision == "login"){
				//login
			} else if (decision == "registar"){
				empresa.addCliente();
			} else if (decision == "visitante"){
				//visitante
			}
		} else if (decision == "fornecedor"){
			cout << endl << "Fornecedores: 1 - login; 2 - registar" << endl;
			cin >> decision;
			if (decision == "login"){
				empresa.loginFornecedor();

			} else if (decision == "registar"){
				empresa.addFornecedor();
			} else if (decision == "visitante"){
							//visitante
			}
		};
	};
	empresa.addCliente();
	empresa.writeToFile();

	return 0;
}
