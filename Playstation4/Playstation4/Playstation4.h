#ifndef PLAYSTATION4_H
#define PLAYSTATION4_H

class Playstation4
{
public:
    Playstation4();
    ~Playstation4();
    Playstation4(string &, string &);
    void criarConta( string &, string &);
    void logar( string &, string &);
    void mensage() const;
private:
    string login;
    string senha;
    

};

#endif // PLAYSTATION4_H
