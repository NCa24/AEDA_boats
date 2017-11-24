#include "empresa.h"
#include "cliente.h"

int Cliente::currId = 0;

Cliente::Cliente(){
	//:id(++currId)
	this->id = ++currId;
};

Cliente::Cliente(int id){
	this->id = id;
};

int Cliente::getId(){
	return id;
};

string Cliente::getName(){
	return 0;
};

string ClienteRegistado::getName(){
	return name;
};

int Cliente::getNPontos(){
	return 0;
};

int ClienteRegistado::getNPontos(){
	return nPontos;
};

ClienteRegistado::ClienteRegistado(string nome, int id, int points) : Cliente (id){
	this->name = nome;
	this->nPontos = points;
};


ClienteRegistado::ClienteRegistado(string nome):Cliente(){
	this->name = nome;
	this->nPontos = 0;
};

void ClienteRegistado::setPoints(){
	//incremento de 10 pontos por reserva
	this->nPontos += 10;
};

