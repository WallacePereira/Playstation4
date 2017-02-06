#ifndef PLAYSTATION4_H
#define PLAYSTATION4_H
#include "Data.h"
#include <string>
using std::string;
using std::ostream;

class Playstation4
{
    friend ostream &operator<<(ostream &, const Playstation4 &);
public:
    Playstation4();
    Playstation4(const Playstation4 &);
    ~Playstation4();
    void setNome(const string &);
    void setIdade(int);
    void setGenero(const string &);
    void setDataNascimento();
    void setDados();
    string getNome();
    int getIdade();
    string getGenero();
    

private: 
    string nome;
    int idade;
    string genero; 
    Data dataNascimento;
    bool operator==(const Playstation4 &) const;
    const Playstation4 &operator=(const Playstation4 &);
};
 

#endif // PLAYSTATION4_H
