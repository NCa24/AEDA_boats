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
	int numberOfClients;
public:
	Empresa();
	void addCliente();
	void addFornecedor();
	void addPoints(Cliente);
	void clientMenu();
	int getClientsFromFile();
	int writeToFile();
	vector <Cliente*> getClients();
	vector <Fornecedor*> getFornecedores();
	int clientNumber();
	void loginCliente();
	void loginFornecedor();
	int readFornecedoresFromFile();
	int writeFornecedoresToFile();
};




#endif /* SRC_EMPRESA_H_ */
