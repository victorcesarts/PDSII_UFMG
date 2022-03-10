/* 
-------------------------------------------------------------------------
Uma imobiliária oferece um portifólio de imóveis para venda. 
Cada imóvel tem seu valor avaliado pela sua metragem e 
valor por metro quadrado estimado, sendo que o valor final inclui a comissão do corretor. 
A taxa de corretagem é determinada pelo tipo do imóvel: 
apartamento, casa ou cobertura.  
------------------------------------------------------------------------
REFATORAÇÃO POR: Víctor César Teixeira Santos
E-MAIL: victorcesarts@ufmg.br
------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {

    Cliente cliente1;
    cliente1.setNome("Xayso Sovon Ziahaka");
    cliente1.setEndereco("Rua Xangrilá - Braúnas");
    cliente1.setCidade("Belo Horizonte");
    cliente1.setUF("MG");
    cliente1.setCEP("31365-570");
    cliente1.setTelefone("3196007958");
    
    Cliente cliente2;
    cliente2.setNome("Minia Pasies Kituos");
    cliente2.setEndereco("Rua dos Jacobinos - Ouro Minas");
    cliente2.setCidade("Belo Horizonte");
    cliente2.setUF("MG");
    cliente2.setCEP("31870-290");
    cliente2.setTelefone("3197627067");
       
    Cliente cliente3;
    cliente3.setNome("Vuocue Leiur Baonauza");
    cliente3.setEndereco("Rua Orminda de Almeida - Tupi B");
    cliente3.setCidade("Belo Horizonte");
    cliente3.setUF("MG");
    cliente3.setCEP("31842-630");
    cliente3.setTelefone("3195949327");
       
    Cliente cliente4;
    cliente4.setNome("Zerer Huduy Fyogar");
    cliente4.setEndereco("Rua Taquaril - Jonas Veiga");
    cliente4.setCidade("Belo Horizonte");
    cliente4.setUF("MG");
    cliente4.setCEP("30285-422");
    cliente4.setTelefone("3198596327");
        
    Cliente cliente5;
    cliente5.setNome("Ceziel Mioti Pler");
    cliente5.setEndereco("Rua João Gualberto Costa - Serrano");
    cliente5.setCidade("Belo Horizonte");
    cliente5.setUF("MG");
    cliente5.setCEP("30882-747");
    cliente5.setTelefone("3196274465");
       
    Cliente cliente6;
    cliente6.setNome("Esxo Cilal Zyais");
    cliente6.setEndereco("Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)");
    cliente6.setCidade("Belo Horizonte");
    cliente6.setUF("MG");
    cliente6.setCEP("31650-560");
    cliente6.setTelefone("3195004414");
       
    Cliente cliente7;
    cliente7.setNome("Leova Wikyecil Neaca");
    cliente7.setEndereco("Rua João Arantes - Cidade Nova");
    cliente7.setCidade("Belo Horizonte");
    cliente7.setUF("MG");
    cliente7.setCEP("31170-240");
    cliente7.setTelefone("3198461192");
        
    Cliente cliente8;
    cliente8.setNome("Teas Heimeu Pipe");
    cliente8.setEndereco("Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)");
    cliente8.setCidade("Belo Horizonte");
    cliente8.setUF("MG");
    cliente8.setCEP("30668-430");
    cliente8.setTelefone("3197317802");

    /*
    Variáveis para retornar, respectivamente a quantidade total de
    apartamentos, casas e cobreturas.
    */   
    int qtdApartamentos = 0;
    int qtdCasas = 0;
    int qtdCoberturas = 0;

    /*
    Apartamentos
    */
    Apartamento apartamento1;
    apartamento1.setNomeCorretor("Tuoruars");
    apartamento1.setArea(55.4);
    apartamento1.setQtdQuartos(2);
    apartamento1.setQtdBanheiros(1);
    apartamento1.setQtdVagas(0);
    apartamento1.setValorm2(987.0);
    apartamento1.ValorComissao();
    apartamento1.ValorVenda();
    apartamento1.setInfosCliente(cliente1);
    qtdApartamentos++;

    Apartamento apartamento2;
    apartamento2.setNomeCorretor("Fyubyeis");
    apartamento2.setArea(74.5);
    apartamento2.setQtdQuartos(2);
    apartamento2.setQtdBanheiros(1);
    apartamento2.setQtdVagas(2);
    apartamento2.setValorm2(1540.0);
    apartamento2.ValorComissao();
    apartamento2.ValorVenda();
    apartamento2.setInfosCliente(cliente2);
    qtdApartamentos++;

    Apartamento apartamento3;
    apartamento3.setNomeCorretor("Kelia");
    apartamento3.setArea(87.2);
    apartamento3.setQtdQuartos(3);
    apartamento3.setQtdBanheiros(2);
    apartamento3.setQtdVagas(2);
    apartamento3.setValorm2(2354.0);
    apartamento3.ValorComissao();
    apartamento3.ValorVenda();
    apartamento3.setInfosCliente(cliente3);
    qtdApartamentos++;

    /*
    Coberturas
    */
    Cobertura cobertura1;
    cobertura1.setNomeCorretor("Koci");
    cobertura1.setArea(20.1);
    cobertura1.setQtdQuartos(3);
    cobertura1.setQtdBanheiros(3);
    cobertura1.setQtdVagas(2);
    cobertura1.setValorm2(3123.5);
    cobertura1.ValorComissao();
    cobertura1.ValorVenda();
    cobertura1.setInfosCliente(cliente4);
    qtdCoberturas++;
    
    Cobertura cobertura2;
    cobertura2.setNomeCorretor("Wail");
    cobertura2.setArea(134.8);
    cobertura2.setQtdQuartos(4);
    cobertura2.setQtdBanheiros(3);
    cobertura2.setQtdVagas(3);
    cobertura2.setValorm2(3578.2);
    cobertura2.ValorComissao();
    cobertura2.ValorVenda();
    cobertura2.setInfosCliente(cliente5);
    qtdCoberturas++;

    Cobertura cobertura3;
    cobertura3.setNomeCorretor("Fival");
    cobertura3.setArea(180.0);
    cobertura3.setQtdQuartos(4);
    cobertura3.setQtdBanheiros(4);
    cobertura3.setQtdVagas(4);
    cobertura3.setValorm2(4165.7);
    cobertura3.ValorComissao();
    cobertura3.ValorVenda();
    cobertura3.setInfosCliente(cliente6);
    qtdCoberturas++;

    /*
    Casas
    */  
    Casa casa1;
    casa1.setNomeCorretor("Beydo");
    casa1.setArea(145.6);
    casa1.setQtdQuartos(3);
    casa1.setQtdBanheiros(3);
    casa1.setQtdVagas(2);
    casa1.setValorm2(4023.6);
    casa1.ValorComissao();
    casa1.ValorVenda();
    casa1.setInfosCliente(cliente7);
    qtdCasas++;
    
    Casa casa2;
    casa2.setNomeCorretor("Riuzi");
    casa2.setArea(245.0);
    casa2.setQtdQuartos(5);
    casa2.setQtdBanheiros(4);
    casa2.setQtdVagas(4);
    casa2.setValorm2(4856.2);
    casa2.ValorComissao();
    casa2.ValorVenda(); 
    casa2.setInfosCliente(cliente8);
    qtdCasas++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    /*
    Variáveis para armazenar a soma dos valores dos
    apartamentos, casas e coberturas, e também da comissão total
    referente a cada tipo de imóvel
    */  
    double ValorTotalAP = 0.0;
    double ValorTotalCb = 0.0;
    double ValorTotalCa = 0.0;
    double ComissTotalAp = 0.0;
    double ComissTotalCb = 0.0;
    double ComissTotalCa = 0.0;

    /*
    Relatório dos imóveis do tipo apartamento
    */      
    apartamento1.print();
    ValorTotalAP += apartamento1.getValorVenda();
    ComissTotalAp += apartamento1.getValorComissao();
    std::cout << endl;

    apartamento2.print();
    ValorTotalAP += apartamento2.getValorVenda();
    ComissTotalAp += apartamento2.getValorComissao();
    std::cout << endl;

    apartamento3.print();
    ValorTotalAP += apartamento3.getValorVenda();
    ComissTotalAp += apartamento3.getValorComissao();
    std::cout << endl;
    
    /*
    Relatório dos imóveis do tipo cobertura
    */  
    cobertura1.print();
    ValorTotalCb += cobertura1.getValorVenda();
    ComissTotalCb += cobertura1.getValorComissao();
    std::cout << endl;

    cobertura2.print();
    ValorTotalCb += cobertura2.getValorVenda();
    ComissTotalCb += cobertura2.getValorComissao();
    std::cout << endl;

    cobertura3.print();
    ValorTotalCb += cobertura3.getValorVenda();
    ComissTotalCb += cobertura3.getValorComissao();
    std::cout << endl;

    /*
    Relatório dos imóveis do tipo casa
    */  
    casa1.print();
    ValorTotalCa += casa1.getValorVenda();
    ComissTotalCa += casa1.getValorComissao();
    std::cout << endl;

    casa2.print();
    ValorTotalCa += casa2.getValorVenda();
    ComissTotalCa += casa2.getValorComissao();
    std::cout << endl;
    
    /*
    Relatório geral
    */  
    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout 
        << "\n>>Apartamentos<<\n"
        << "\n Quantidade: " << qtdApartamentos
        << "\n Valor Total: R$ " << fixed << setprecision(2) << ValorTotalAP
        << "\n Comissão Total: R$" << ComissTotalAp
        << std::endl
        << "\n>>Coberturas<<\n"
        << "\n Quantidade: " << qtdCoberturas
        << "\n Valor Total: R$ " << fixed << setprecision(2) << ValorTotalCb
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << ComissTotalCb
        << std::endl
        << "\n>>Casas<<\n"
        << "\n Quantidade: " << qtdCasas
        << "\n Valor Total: R$ " << fixed << setprecision(2) << ValorTotalCa
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << ComissTotalCa
    << std::endl;
}
