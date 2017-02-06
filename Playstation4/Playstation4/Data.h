#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int=1, int=1, int=1900);
    ~Data();
    void printData () const;
    void setData(int, int, int);
    int getDia();
    int getMes();
    int getAno();
private:
    int dia;
    int mes;
    int ano;
    
    int checarData(int) const;

};

#endif // DATA_H
