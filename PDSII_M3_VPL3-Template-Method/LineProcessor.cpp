#include <regex>
#include <math.h>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <list>

#include "LineProcessor.hpp"

void LinePrinter::processaLinha(const std::string &str) {
  std::cout << str << std::endl;
}

bool ContadorPopRural::linhaValida(const std::string &str) const {
  // Neste exemplo usaremos expressoes regulares para verificar se uma linha
  // eh valida ou nao.
  //
  // Esta expressao regular eh formada por cinco partes. Cada uma dessas
  // partes eh um dos tres tipos de padrao regular abaixo:
  //
  // \\w+ eh qualquer palavra com um ou mais digitos, letras e sublinhas (_)
  // \\s* eh qualquer sequencia de zero ou mais espacos (inclui tab)
  // \\d+ eh qualquer sequencia de um ou mais digitos
  std::regex regularExpr("\\w+\\s*\\d+\\s*\\d+");

  // A funcao regex_match vai retornar verdadeiro se a string str casa-se com
  // a expressao regular que acabamos de criar:
  return std::regex_match(str, regularExpr);
}

void ContadorPopRural::processaLinha(const std::string &str) {
  //
  // Em geral eh mais facil ler dados de uma string se a string eh transformada
  // em um objeto do tipo stringstream:
  std::stringstream ss(str);
  //
  // Iremos ler os dados da string nestas tres variaveis abaixo:
  std::string nomePais;
  unsigned populacao, percUrbana;
  //
  // Como sabemos que a linha contem string int int, podemos fazer a leitura
  // facilme usando o operador de streaming:
  ss >> nomePais >> populacao >> percUrbana;
  //
  // Note que precisamos arredondar o valor que serah impresso. O arredondamento
  // serah feito via a funcao floor. Ou seja, decimais serao sempre
  // arredondados para baixo:
  unsigned popRural = floor(populacao - (populacao * (percUrbana/100.0)));
  //
  // Uma vez encontrados os valores que precisam ser impressos, seguimos o
  // modelo do enunciado do exercicio:
  std::cout << popRural << " pessoas vivem no campo no " << nomePais <<
    std::endl;
}

bool ContadorNumNaturais::linhaValida(const std::string &str) const {
  std::regex integerExpression ("[^\\+ | ^\\- |^\\.][\\s*\\d+\\s*\\d*]+[^\\+ | ^\\- |^\\.]"); 
  return std::regex_match(str, integerExpression);
}

void ContadorNumNaturais::processaLinha(const std::string &str) {
  std::stringstream ss(str);

  int size = (str.length() - std::count(str.begin(), str.end(), ' '));
  int *num = new int[size];
  int soma = 0;

  for (int i = 0; i <= size; i++)
  {
    ss >> num[i];
  }
  for (int i = 0; i < size; i++)
  {
    soma +=num[i];
  }
  std::cout << soma << std::endl;
}

bool LeitorDeFutebol::linhaValida(const std::string &str) const {
  std::regex soccerExpression ("\\s*[[:alpha:]]+\\s*\\d+\\s*[[:alpha:]]+\\s*\\d+"); 
  return std::regex_match(str, soccerExpression);
}

void LeitorDeFutebol::processaLinha(const std::string &str) {

  std::stringstream ss(str);
  std::string time1, time2;
  int placar1 = 0, placar2 = 0;

  ss >> time1 >> placar1 >> time2 >> placar2;

  if (placar1 == placar2)
  {
    std::cout << "Empate" << std::endl;
  }
  if (placar1 > placar2)
  {
    std::cout << "Vencedor: " << time1 << std::endl;
  }
  if (placar2 > placar1)
  {
    std::cout << "Vencedor: " << time2 << std::endl;
  } 
}

void ContadorDePalavras::processaLinha(const std::string &str) {
  std::stringstream ss(str);
  std::string word;
  int count = 0;

  while (std::getline(ss, word))
  {
    std::regex countWords("[^\\s]+");
    std::sregex_iterator i = std::sregex_iterator(word.begin(), word.end(), countWords);

    for(i; i != std::sregex_iterator(); ++i )
      {
        count += 1;
      }
  }
  std::cout << count << '\n';
}


bool InversorDeFrases::linhaValida(const std::string &str) const {
  std::regex reverseWords("[[:alpha:]+\\s*]+");
  return std::regex_match(str, reverseWords);
}

void InversorDeFrases::processaLinha(const std::string &str) {
  std::stringstream ss(str);
  std::string word;
  std::list <std::string> toReverse;
  
  while (std::getline(ss, word))
  {  
    std::regex reverseWords("[\\w]+");
    std::sregex_iterator i = std::sregex_iterator(word.begin(), word.end(), reverseWords);
 
    for(i; i != std::sregex_iterator(); i++ )
      {
        std::smatch m = *i;
        toReverse.push_front(m.str());
      } 
  }
  for (auto it = toReverse.begin(); it != toReverse.end(); ++it)
    {
      std::cout << *it << " ";
    }   
    std::cout << "\n";
}

bool EscritorDeDatas::linhaValida(const std::string &str) const {
  std::regex dateFormat("\\s*\\d\\d?/\\d\\d?/\\d{4}");
  return std::regex_match(str, dateFormat);
}

void EscritorDeDatas::processaLinha(const std::string &str) {

  std::stringstream ss(str);
  std::string date;
  std::string key = "/";
  std::string aux;
  ss >> date;
  size_t pos = 0;

while ((pos = date.find("/")) != std::string::npos)
{
  aux = date.substr(0, pos);
  date.erase(0, pos + key.length());  
}

std::stringstream monthAux (aux);
int month = 0;
monthAux >> month;
std::string monthsName[12] = 
{"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", 
"Jul", "Ago", "Set", "Out","Nov", "Dez"};

  for (int i = 0; i <= 12; i++)
  {
    if (i == month)
    {
     std::cout << monthsName[i-1] << std::endl;
    }
  }
}