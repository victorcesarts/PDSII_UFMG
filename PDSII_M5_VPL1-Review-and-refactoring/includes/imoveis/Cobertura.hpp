#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Cobertura : public Imovel {

    private:
    const double FatorComissao = 0.10;
    
    public:
    Cobertura();

    double ValorTotalM2() override;

    void ValorComissao() override;

    void ValorVenda() override;

    void print() override;

};

#endif