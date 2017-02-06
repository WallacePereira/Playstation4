#include <stdio.h>
#include "Data.h"
#include "Playstation4.h"

int main(int argc, char **argv)
{
	Playstation4 Ps4;
     Playstation4();
    Playstation4(const Playstation4 &);
    ~Playstation4();
    void setNome(const string &);
    void setIdade(int);
    void setGenero(const string &);
    void setDataNascimento();
    void setDadosEndereco();
    void setDados();
	return 0;
}
