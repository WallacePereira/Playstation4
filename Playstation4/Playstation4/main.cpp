#include <stdio.h>
#include "Data.h"
#include "Playstation4.h"
Playstation4 ps4;
int main(int argc, char **argv)
{
	ps4.getGenero();
    ps4.getIdade();
    ps4.getNome();
    ps4.setDados();
    ps4.setDataNascimento();
    ps4.setGenero();
    ps4.setIdade();
    ps4.setNome();
	return 0;
}
