#include "Empresa.h"
#include "Cliente.h"

static int currId = 0;

Cliente::Cliente():id(++currId){

};

int Cliente::getId(){
	return id;
};

string ClienteRegistado::getName(){
	return name;
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

