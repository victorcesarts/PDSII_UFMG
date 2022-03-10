#include "fila_de_prioridade.h"
#include <iostream>

FilaDePrioridade::FilaDePrioridade() : primeiro_(nullptr), tamanho_(0){}

struct No 
{
  int p;
  string s;
  No* next; 
};

void FilaDePrioridade::Inserir(int p, string s)
{
  struct No* element = new No;
    element -> p = p;
    element -> s = s;
    element -> next = nullptr;

  if (vazia() == true)
  {
    primeiro_ = element;
    element -> next = nullptr;
    
  }else 
    if (p > primeiro_ -> p) 
    {
      element -> next = primeiro_;
      primeiro_ = element;
    }
  else
  { 
    //Auxiliar para verificar prioridades.
    No *aux;
    aux = primeiro_;  

    //Se o elemento seguinte do auxiliar não for nulo (não é o último elemento)
    //e a prioridade do elemento seguinte ainda for menor, então aux se torna
    //o elemento seguinte, assim, percorrendo toda a lista até a condição false
    while (aux -> next != nullptr && p <= aux -> next -> p )
    {
      aux = aux -> next;
    }
    element -> next = aux -> next;
    aux -> next = element;
  }
  //caso seja o fim da lista (aux -> next == null) e/ou a prioridade do elemento
  //seja maior que a do elemento seguinte, então se adiciona o element entre o
  //aux e o elemento próximo
}

bool FilaDePrioridade::vazia() const {
  return primeiro_ == nullptr;
}

string FilaDePrioridade::primeiro() const
{
  return primeiro_ -> s;
}

void FilaDePrioridade::RemoverPrimeiro()
{
  No *current = primeiro_;
  while(current == primeiro_){
    primeiro_ = current -> next;
  }
  delete current;
}

void FilaDePrioridade::Limpar()
{
    delete primeiro_;
}

int FilaDePrioridade::tamanho() const
{
  return tamanho_;
}


