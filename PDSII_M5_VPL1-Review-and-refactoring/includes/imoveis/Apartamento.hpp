#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    private:
    const double FatorComissao = 0.04;

    public: 
    Apartamento();

    double ValorTotalM2() override;

    void ValorComissao() override;
    
    void ValorVenda() override;
    
    void print() override;

};

#endif