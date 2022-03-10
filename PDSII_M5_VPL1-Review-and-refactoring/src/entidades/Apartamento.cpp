#include "Apartamento.hpp"

Apartamento::Apartamento() {}

double Apartamento::ValorTotalM2 () {
    return Area * Valorm2;
}

void Apartamento::ValorComissao() {
    Comissao = ValorTotalM2() * FatorComissao;
}

void Apartamento::ValorVenda() {
    PrecoVenda = Comissao + ValorTotalM2();
}

void Apartamento::print() {
    std::cout 
        << "[Apartamento]" << std::endl
        << "[Cliente]" << std::endl;
        InfosCliente.print();
    std::cout 
        << "[NomeCorretor]" << std::endl
        << "  " + getNomeCorretor() << std::endl
        << "Area: " << getArea() << std::endl
        << "  QtdQuartos: " << getQtdQuartos() << std::endl
        << "  QtdBanheiros: " << getQtdBanheiros() << std::endl
        << "  QtdVagas: " << getQtdVagas() << std::endl
        << "Taxa de Comissão: " << 6 << "%" << std::endl
        << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << getValorComissao() << std::endl
        << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << getValorVenda() 
    << std::endl;
}