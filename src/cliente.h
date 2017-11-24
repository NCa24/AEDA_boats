#ifndef SRC_CLIENTE_H_
#define SRC_CLIENTE_H_

#include <string.h>
#include <iostream>
#include <string>

using namespace std;

class Cliente {
protected:
	int id;
public:
	Cliente(int id);
	int getId();
	virtual string getName();
	virtual int getNPontos();
	virtual void setPoints();
	//void criarReserva(int, int, Oferta);

};

class ClienteRegistado: public Cliente{
	string name;
	int nPontos;
public:
	ClienteRegistado(string nome, int id);
	ClienteRegistado(string nome, int id, int points);
	int getId();
	string getName();
	int getNPontos();
	void setPoints();
};

#endif
