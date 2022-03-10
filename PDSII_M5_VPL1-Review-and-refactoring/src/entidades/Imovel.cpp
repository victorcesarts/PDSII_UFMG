#include "Imovel.hpp"

Imovel::Imovel() {}

void Imovel::setNomeCorretor(std::string NomeCorretor) {
    this -> NomeCorretor = NomeCorretor;
}
std::string Imovel::getNomeCorretor() {
	return NomeCorretor;
}

void Imovel::setArea(double area) {
    this -> Area = area;
}
double Imovel::getArea() {
    return Area;
}

void Imovel::setQtdQuartos(int quartos) {
    this -> QtdQuartos = quartos;
}
int Imovel::getQtdQuartos() {
    return QtdQuartos;
}

void Imovel::setQtdBanheiros(int Banheiro) {
    this -> QtdBanheiros = Banheiro;
}
int Imovel::getQtdBanheiros() {
	return QtdBanheiros;
}

void Imovel::setQtdVagas(int vaga) {
    this -> QtdVagas = vaga;
}
int Imovel::getQtdVagas() {
    return QtdVagas;
}

void Imovel::setValorm2(double valorm2) {
    this -> Valorm2 = valorm2;

}
double Imovel::getValorm2() {
    return Valorm2;
}

void Imovel::setInfosCliente(Cliente InfosCliente) {
    this -> InfosCliente = InfosCliente;
} 
Cliente Imovel::getInfosCliente() {
    return InfosCliente;    
} 

double Imovel::getValorComissao() {
    return Comissao;
}

double Imovel::getValorVenda() {
    return PrecoVenda;
}

Imovel::~Imovel() {}