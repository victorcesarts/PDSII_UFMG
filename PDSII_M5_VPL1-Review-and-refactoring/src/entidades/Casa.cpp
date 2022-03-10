#include "Casa.hpp"

Casa::Casa() {}

double Casa::ValorTotalM2 () {
    return Area * Valorm2;
}

void Casa::ValorComissao() {
    Comissao = ValorTotalM2() * FatorComissao;
}

void Casa::ValorVenda() {
    PrecoVenda = Comissao + ValorTotalM2();
}

void Casa::print() {
    std::cout 
        << "[Casa]" << std::endl
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
