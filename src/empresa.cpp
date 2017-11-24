#include "empresa.h"

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
	clientes.push_back(new ClienteRegistado(nome));
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

void Empresa::loginFornecedor() {
	string fornecedor;
	int n;
	cout << "inserir nome do fornecedor";
	cin >> fornecedor;

	for(unsigned int i = 0 ; i < fornecedores.size() ; i++)
	{
		if(fornecedores[i]->getNome() == fornecedor)
		{
			cout << "quantas ofertas quer adicionar?";
			cin >> n;
			fornecedores[i]->addOfertas(n);
		}
	}
	cout << "fornecedor não foi encontrado";
}

void Empresa::addPoints(ClienteRegistado cliente){
	cliente.setPoints();
}

vector <Cliente*> Empresa::getClients(){
	return clientes;
}

int Empresa::getClientsFromFile(){
	fstream file("clientes.txt", ios::in);
	string line;
	if (!file.is_open())
	{
		cout << "File does not exist yet !\n";
		return 1;
	};
	while (getline(file, line))
	{
		size_t frstSemiColon = line.find(";");
		size_t secndSemiColon = line.find(";", frstSemiColon + 1);
		string name = line.substr(0, frstSemiColon - 1); //retira nome do cliente
		string aux = line.substr(frstSemiColon + 2, secndSemiColon - frstSemiColon - 3); //retira id do cliente
		string aux2 = line.substr (secndSemiColon + 1); //retira pontos do cliente
		int id, points;
		id = stoi( aux );
		points = stoi( aux2 );
		clientes.push_back(new ClienteRegistado(name, id, points)); //cliente lido do ficheiro entra no vector
	};
	file.close();
	return 1;
}

int Empresa::writeToFile(){

	fstream file ("clientes.txt", ios::out | ios::trunc);
	int i = 0;
	while (i < getClients().size())
	{
		if(getClients()[i]->getName() != ""){
			//formato da informaçao no ficheiro txt -> nome ; id ; pontos
			file << getClients()[i]->getName() << " ; " << getClients()[i]->getId() << " ; " << getClients()[i]->getNPontos() << endl;
		};
		i++;
	};
	file.close();
};
