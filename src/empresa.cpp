#include "Empresa.h"

using namespace std;

Empresa::Empresa(){};

/*void Empresa::addCliente(Cliente cliente) {


	clt.setId(1);
	clt.setPontos(0);

	clientes.push_back(clt);

}*/

void Empresa::addCliente(){
	string nome;
	cout << "Indique o nome do cliente:" << endl;
	cin >> nome;
	ClienteRegistado temp(nome);
	clientes.push_back(temp);
}

void Empresa::addFornecedor(){
	string nome, morada;
	int nif, nOfertas;
	cout << "Indique o nome do fornecedor:" << endl;
	cin >> nome;
	cout << "Indique o nif:" << endl;
	cin >> nif;
	cout << "Indique a morada:" << endl;
	cin >> morada;
	Fornecedor *f = new Fornecedor(nome, nif, morada);
	cout << "Indique o numero de ofertas que deseja disponibilizar:" << endl;
	cin >> nOfertas;
	f->addOfertas(nOfertas);
	this->fornecedores.push_back(f);
}

void Empresa::addPoints(Cliente){
	Cliente.setPoints();
}

void Empresa::getClientsFromFile(){
	fstream file("clientes.txt", ios::in);
	string line;
	if (!file.is_open())
	{
		cout << "File does not exist yet !\n";
		return 1;
	}
	while (getline(file, line))
	{
		size_t frstSemiColon = line.find(";");
		size_t secndSemiColon = line.find(";", frstSemiColon + 1);
		string name = line.substr(0, frstSemiColon - 1); //retira nome do cliente
		string aux = line.substr(frstSemiColon + 2, secndSemiColon - frstSemiColon - 3); //retira id do cliente
		string aux2 = line.substr (secndSemiColon + 1); //retira pontos do cliente
		int id, points;
		stringstream convert(aux);
		convert >> id;
		stringstream convert(aux2);
		convert >> points;
		ClienteRegistado tempClient(name, id, points); //cria cliente registado temporariamente para fazer push no vector
		clientes.push_back(tempClient); //cliente lido do ficheiro entra no vector
	}
	file.close();
}

void Empresa::writeToFile()
{
	fstream file("clientes.txt", ios::out | ios::trunc);
	if (!file.is_open())
	{
		cout << "File does not exist yet !\n";
		return 1;
	}
	int i = 0;
	while (i < clientes.size())
	{
		//formato da informaçao no ficheiro txt -> nome ; id ; pontos
		file << clientes[i].getName() << " ; " << clientes[i].getId() << " ; " << clientes[i].getNPontos() << endl;
		i++;
	}
	file.close();
}
