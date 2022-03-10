#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    private:
    const double FatorComissao = 0.06;
    
    public:
    Casa();

    double ValorTotalM2() override;

    void ValorComissao() override;
    
    void ValorVenda() override;
    
    void print() override;
    
};

#endif