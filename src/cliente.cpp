#include "empresa.h"
#include "cliente.h"

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
/*
void Cliente::criarReserva(int data, int hora, Oferta oferta) {

	for(unsigned int i = 0 ; i < listaOfertas.size() ; i++) {
			//para criar uma reserva precisamos de encontrar a oferta na listaOfertas do fornecedor, ver se a data
			//está disponível (se existe e se não está esgotada)
			if(listaOfertas[i].checkData(data)  && listaOfertas[i].clientes.size() > listaOfertas[i].lotacao)
				listaOfertas.reservas


	}
}*/


