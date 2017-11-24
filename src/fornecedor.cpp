#include "reserva.h"
#include "fornecedor.h"


Fornecedor::Fornecedor(string nome, int nif, string morada){
	this->nome = nome;
	this->nif = nif;
	this->morada = morada;
}

string Fornecedor::getNome() {
	return nome;
}

int Fornecedor::getNIF(){
	return nif;
};

string Fornecedor::getMorada() {
	return morada;
}

vector<Oferta> Fornecedor::getOfertas() {
	return listaOfertas;
}

Oferta::Oferta(int tipo, int destino, vector<int> dias){

	switch(tipo){
		case 1:
			this->tipo = iate;
			this->lotacao = 70;
			break;
		case 2:
			this->tipo = barco_rabelo;
			this->lotacao = 10;
			break;
		case 3:
			this->tipo = veleiro;
			this->lotacao = 20;
			break;
	}

	switch(destino){
			case 1:
				this->destino = regua;
				this->distancia = 20;
				break;
			case 2:
				this->destino = pinhao;
				this->distancia = 30;
				break;
			case 3:
				this->destino = barca_dalva;
				this->distancia = 50;
				break;
		}

		this->datasIndisponiveis = dias;
}

void Fornecedor::addOfertas(int n){
	int tipo, destino, dia=1;
	vector<int> dias;
	for(int i=0; i<n; i++){
		cout << "Indique o tipo de oferta:\n1 - Iate\n2 - Barco Rabelo\n3 - Veleiro" << endl;
		cin >> tipo;
		cout << "Indique o destino:\n1 - RÃ©gua\n2 - PinhÃ£o\n3 - Barca d'Alva" << endl;
		cin >> destino;
		cout << "Indique os dias do mÃªs em que a oferta nÃ£o estarÃ¡ disponÃ­vel (0 para terminar):" << endl;
		while(dia!=0){
			//if(dia < 0 || dia > 31)
				//throw ExceptionInvalidDay; lancar excepcao
			dias.push_back(dia);
		}
		Oferta *of = new Oferta(tipo, destino, dias);
		this->listaOfertas.push_back(of);
	}
}

bool Oferta::checkData(int data) {
	//data está disponível se não está no vector datasIndisponiveis
	for(unsigned int i = 0 ; i < datasIndisponiveis.size() ; i++) {
		if(datasIndisponiveis[i] == data)
			return false;
	}
	return true;
}

void Reserva::removerCliente(Cliente cliente) {
	for(unsigned int i = 0 ; i < clientes.size() ; i++) {
		if(clientes[i].getId() == cliente.getId())
			clientes.erase(clientes.begin() + i);
	}
};

