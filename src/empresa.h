#ifndef SRC_EMPRESA_H_
#define SRC_EMPRESA_H_

#include <vector>
#include <fstream>
#include <string>

#include "fornecedor.h"
#include "cliente.h"

class Empresa {
	vector<Fornecedor*> fornecedores;
	vector<Cliente*> clientes;
public:
	Empresa();
	void addCliente();
	void addFornecedor();
	void addPoints(Cliente);
	void clientMenu();
	void getClientsFromFile();
	void writeToFile();
};




#endif /* SRC_EMPRESA_H_ */
