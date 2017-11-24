#ifndef SRC_FORNECEDOR_H_
#define SRC_FORNECEDOR_H_

#include <string>
#include <vector>
#include <sstream>

#include "empresa.h"
#include "reserva.h"

#include <iostream>
>>>>>>> branch 'master' of https://github.com/NCa24/AEDA_boats.git

using namespace std;

enum Tipo {iate, barco_rabelo, veleiro};
enum Destino {regua, pinhao, barca_dalva};

class Oferta {
	Tipo tipo;
	Destino destino;
	//int nrBarcos;
	int lotacao;
	int distancia;
	vector<int> datasIndisponiveis;
	vector<Reserva*> reservas;
	//vector<Cliente*> clientes;
public:
	Oferta(int, int, vector<int>);
	string getTipo();
	string getDestino();
	void setPreco(int, int);
	int getLugaresVagos();
	bool checkData(int data); //verifica se a data esta disponivel

	//int getDatasIndisponiveis(); mudar para vector<int> ou stringstream
};

class Fornecedor {
	string nome;
	int nif;
	string morada;
	vector<Oferta*> listaOfertas;
public:
	Fornecedor(string nome, int nif, string morada);
	void printOfertas(int data, int hora);
	void addOfertas(int n);
};



#endif /* SRC_FORNECEDOR_H_ */
