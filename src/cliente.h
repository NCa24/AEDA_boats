#ifndef SRC_CLIENTE_H_
#define SRC_CLIENTE_H_

#include <string.h>
#include <iostream>
#include <string>

using namespace std;


class Cliente {
protected:
	int id;
	static int currId;

public:
	Cliente();
	Cliente(int id);
	int getId();
	virtual string getName();
	virtual int getNPontos();

};

class ClienteRegistado : public Cliente{
	string name;
	int nPontos;
public:
	ClienteRegistado(string nome);
	ClienteRegistado(string nome, int id, int points);
	void inscreverCliente(/*TODO: Criar Evento*/);
	int getId();
	string getName();
	int getNPontos();
	void setPoints();
};

#endif
