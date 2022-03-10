#include "ContadorDePalavras.hpp"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

ContadorDePalavras::ContadorDePalavras() {}


void ContadorDePalavras::Adicionar(string s)
{
    Palavra text = Palavra(s); 
    _lista_de_palavras.push_front(text.palavra());
    
    //uma palavra nova é sempre adicionada no primeiro elemento da lista
    //portanto, verifica-se se já havia palavra igual na lista
    
    for(auto it = next(_lista_de_palavras.begin(), 1); it != _lista_de_palavras.end(); ++it)
    {
        if (it -> palavra() == text.palavra())
        {
            auto it1 = _lista_de_palavras.begin();
            
            _lista_de_palavras.erase(it1);
            it -> Incrementar();   
        }
    }     
}
    
void ContadorDePalavras::ImprimirOrdenado(){
    
  _lista_de_palavras.sort(); 
  
  for (auto it = _lista_de_palavras.begin(); it != _lista_de_palavras.end(); ++it)
    {
        cout << " " << it -> palavra();
        cout << " " << it -> ocorrencias() << endl;
    }   
}
    

