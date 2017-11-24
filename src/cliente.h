#ifndef SRC_CLIENTE_H_
#define SRC_CLIENTE_H_

#include <string.h>
#include <iostream>
#include <string>

#include "fornecedor.h"

using namespace std;


class Cliente {
protected:
	int id;
	static int currId;

public:
	Cliente();
	Cliente(int id);
	~Cliente();
	int getId();
	//void criarReserva(int, int, Oferta);
};

class ClienteRegistado: public Cliente{
	string name;
	int nPontos;
public:
	ClienteRegistado(string nome);
	ClienteRegistado(string nome, int id, int points);
	int getId();
	string getName();
	int getNPontos();
	void setPoints();
};

#endif
