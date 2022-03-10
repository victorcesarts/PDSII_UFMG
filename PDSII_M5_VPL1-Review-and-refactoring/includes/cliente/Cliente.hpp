#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>

class Cliente {
    private:
    std::string NomeCliente;
    std::string Endereco;
    std::string Cidade;
    std::string UF;
    std::string CEP;
    std::string Telefone;

    public:
    Cliente();

    void setNome(std::string Nome);
    std::string getNome();

    void setEndereco(std::string Endereco);
    std::string getEndereco();

    void setCidade(std::string Cidade);
    std::string getCidade();

    void setUF(std::string UF);
    std::string getUF();

    void setCEP(std::string CEP);
    std::string getCEP();

    void setTelefone(std::string Telefone);
    std::string getTelefone();

    /*
    Imprime as informações 
    dos clientes
    */
    void print();  
};

#endif