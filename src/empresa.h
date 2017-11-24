#ifndef SRC_EMPRESA_H_
#define SRC_EMPRESA_H_

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "fornecedor.h"
#include "cliente.h"

class Empresa {
	vector<Cliente*> clientes;
	vector<Fornecedor*> fornecedores;
public:
	Empresa();
	void addCliente();
	void addFornecedor();
	void addPoints(ClienteRegistado);
	void clientMenu();
	int getClientsFromFile();
	int writeToFile();
	vector <Cliente*> getClients();
};




#endif /* SRC_EMPRESA_H_ */
