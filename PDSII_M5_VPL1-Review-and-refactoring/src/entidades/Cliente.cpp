#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente() {}

void Cliente::setNome(std::string Nome){
	this -> NomeCliente = Nome;
}
std::string Cliente::getNome(){
	return NomeCliente;
}

void Cliente::setEndereco(std::string Endereco){
	this -> Endereco = Endereco;
}
std::string Cliente::getEndereco(){
	return Endereco;
}

void Cliente::setCidade(std::string Cidade){
	this -> Cidade = Cidade;
}
std::string Cliente::getCidade(){
	return Cidade;
}

void Cliente::setUF(std::string UF){
	this -> UF = UF;
}
std::string Cliente::getUF(){
	return UF;
}

void Cliente::setCEP(std::string CEP){
	this -> CEP = CEP;
}
std::string Cliente::getCEP(){
	return CEP;
} 

void Cliente::setTelefone(std::string Telefone){
	this -> Telefone = Telefone;
}
std::string Cliente::getTelefone(){
	return Telefone;
}

void Cliente::print(){
	std::cout 
		<< "  Nome: " << getNome() << std::endl
		<< "  Telefone: " << getTelefone() << std::endl
		<< "  Endereço: " << getEndereco() << std::endl
		<< "  Cidade: " << getCidade() << std::endl
		<< "  Estado: " << getUF() << std::endl
		<< "  CEP: " << getCEP() <<
	std::endl;
}