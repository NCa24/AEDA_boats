#ifndef RESERVA_H_
#define RESERVA_H_

#include <vector>
#include "cliente.h"

class Reserva {
	int data;
	int hora;
	vector<Cliente> clientes;
public:
	Reserva(int, int);
	~Reserva();
	void adicionarCliente(Cliente);
	void removerCliente(Cliente);
};


#endif /* RESERVA_H_ */
