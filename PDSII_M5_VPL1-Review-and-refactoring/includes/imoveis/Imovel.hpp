#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
    int QtdQuartos;
    int QtdBanheiros;
    int QtdVagas;
    double Valorm2;
    double PrecoVenda; 
    double Area;
    double Comissao;
    Cliente InfosCliente;
    std::string NomeCorretor;

    public:
    Imovel();

    /*
    Getters e Setters para acessar variáveis
    */
    std::string getNomeCorretor();
    void setNomeCorretor(std::string NomeCorretor);

    void setArea(double area);
    double getArea();

    int getQtdQuartos();
    void setQtdQuartos(int quartos);

    int getQtdBanheiros();
    void setQtdBanheiros(int banheiro);

    int getQtdVagas();
    void setQtdVagas(int vaga);

    void setValorm2(double valorm2);
    double getValorm2();

    Cliente getInfosCliente();
    void setInfosCliente(Cliente InfosCliente);  

    /*
    Calcula o valor do imóvel de acordo com 
    a sua área em metros quadrados armazenando
    o valor em "Valorm2"
    */
    virtual double ValorTotalM2() = 0;

    /*
    Calcula o valor da comissão do corretor
    a partir de uma porcentagem do valor total
    do imóvel de acordo com sua área (ValorTotalM2())
    armazenando em "Comissao"
    */
    virtual void ValorComissao() = 0;
    /*
    Retorna o valor da comissão armazenada na 
    variável "Comissao"
    */
    double getValorComissao();
    
    /*
    Calcula o valor total de venda do imóvel
    o que corresponde à soma da Comissão
    do corretor e o valor total do imóvel 
    de acordo com sua área armazenando o valor em
    "PrecoVenda"
    */
    virtual void ValorVenda() = 0;
    /*
    Retorna o valor da venda do imóvel armazenada na 
    variável "PrecoVenda"
    */
    double getValorVenda();

    virtual void print() = 0;
    
    /*
    Destrutor virtual, pois a classe
    é abstrata
    */
    virtual ~Imovel();
};

#endif