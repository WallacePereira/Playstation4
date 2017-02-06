#include "Playstation4.h"


#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"
#include "Endereco.h"

using namespace std;

Playstation4::Playstation4()
:dataNascimento(01,01,1900), dadosEndereco("Rua",0,"bairro","cidade","estado")
{
    this -> nome= "nome";
    this -> idade= 0;
    this -> genero= "genero";
}

Playstation4::Playstation4(const Playstation4 &p)
:dataNascimento(p.dataNascimento), dadosEndereco(p.dadosEndereco)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
}

Playstation4::~Playstation4()
{
}

ostream & operator<<(ostream &o, const Playstation4 &gente)
{
o <<"\nNome: "<<gente.nome<<".\n"<<"Idade: "<<gente.idade<<".\n"<<"Genero:  "<<gente.genero<<"\n";

return o;
}

bool Playstation4::operator==(const Playstation4 &gente) const
{
    if (nome == gente.nome && idade == gente.idade && genero == gente.genero)
            return true;
    return false;
}

const Playstation4 &Playstation4::operator=(const Playstation4 &gente)
{
    nome = gente.nome;
    genero = gente.genero;
    idade = gente.idade;
}

void Playstation4::setDadosEndereco()
{   
    string rua, bairro, cidade, estado;
    int n;
    cout<<"Rua: ";
    cin>>rua;
    cout<<"Numero: ";
    cin>>n;
    cout<<"Bairro: ";
    cin>>bairro;
    cout<<"Cidade: ";
    cin>>cidade;
    cout<<"Estado: ";
    cin>>estado;
    dadosEndereco.setEndereco(rua,n,bairro,cidade,estado);
}

void Playstation4::setDataNascimento()
{   
    int dia, mes, ano;
    do{
    cout<<"Data de Nascimento\n";   
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    dataNascimento.setData(dia, mes, ano);
    }while(dataNascimento.getDia() == -9999);
}

void Playstation4::setNome(const string &nome)
{
    this->nome = nome;
}


void Playstation4::setIdade(int idade)
{
    this->idade = idade;
}

void Playstation4::setGenero(const string &genero)
{
    this->genero = genero;   
}

string Playstation4::getNome()
{
    return this->nome;
}
int Playstation4::getIdade()
{
    return this->idade;
}
string Playstation4::getGenero()
{
    return this->genero;
}

void Playstation4::setDados()
{   
    system("cls");
    cout<<"Dados: \n";
    cout<<"Nome: "<<nome;
    cout<<"\nIdade: "<<idade;
    cout<<"\nData de nascimento: "<<dataNascimento.getDia()<<"/"
    <<dataNascimento.getMes()<<"/"<<dataNascimento.getAno();
    cout<<"\nGenero: "<<genero;
    dadosEndereco.getEndereco();
}


