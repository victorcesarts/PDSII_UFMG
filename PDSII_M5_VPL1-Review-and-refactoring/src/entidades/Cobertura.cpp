#include "Cobertura.hpp"

Cobertura::Cobertura() {}

double Cobertura::ValorTotalM2 () {
    return Area * Valorm2;
}

void Cobertura::ValorComissao() {
    Comissao = ValorTotalM2() * FatorComissao;
}

void Cobertura::ValorVenda() {
    PrecoVenda = Comissao + ValorTotalM2();
}

void Cobertura::print() {
    std::cout 
        << "[Cobertura]" << std::endl
        << "[Cliente]" << std::endl;
        InfosCliente.print();
    std::cout 
        << "[NomeCorretor]" << std::endl
        << "  " + getNomeCorretor() << std::endl
        << "Area: " << getArea() << std::endl
        << "  QtdQuartos: " << getQtdQuartos() << std::endl
        << "  QtdBanheiros: " << getQtdBanheiros() << std::endl
        << "  QtdVagas: " << getQtdVagas() << std::endl
        << "Taxa de Comissão: " << 10 << "%" << std::endl
        << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComissao() << std::endl
        << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() 
    << std::endl;
}