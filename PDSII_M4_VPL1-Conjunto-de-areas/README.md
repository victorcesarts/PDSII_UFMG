# Módulo 4: POO Avançado. VPL1 - Conjunto de áreas
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Neste exercício você deverá implementar uma coleção que irá armazenar objetos que possuem área. Um objeto que possui área nada mais é do que um objeto que possui um método getArea(). A interface da classe genérica que deverá ser implementada segue logo abaixo:

template <class T> class AreaSet {
  std::vector<T> areas;
  public:
    void add(T e);
    int getTotalArea();
}

Os métodos add e getTotalArea deverão ser implementados. O primeiro método adiciona um objeto à coleção. O segundo retorna a soma das areas de todos os objetos armazenados na coleção. Para ver como objetos desse tipo são usados, dê uma olhada no arquivo main.cpp. Além da classe AreaSet, você deverá implementar também três classes que definem o método getArea, a saber:

Retangulo: uma classe que representa retângulos, isto é, objetos com lado e altura.
Pais: uma classe que representa países. Um país é um objeto com um nome é uma área (um inteiro que representa a área do país, em quilômetros quadrados).
Imovel: um imóvel é um objeto formado por um conjunto de cômodos. Cada cômodo possui um nome e uma área, em metros quadrados.
Parte dessas classes já está implementada para você. A implementação de todas as classes (AreaSet, Retangulo, Pais e Imovel) encontra-se disponível no arquivo Areas.hpp. Você deverá completar as partes faltantes em cada classe. Essas partes são marcadas com comentários do tipo "TODO". Caso você queira testar sua implementação, você pode escrever arquivos de texto com informações de entrada, e passar esses arquivos para o programa compilado. Para ver quais testes estão disponíveis, leia o código do arquivo main.cpp. Por exemplo, para verificar se sua implementação de Imovel está correta, use o seguinte arquivo de texto:

i
3
3
cozinha 6
quarto 10
banheiro 4
4
cozinha 12
quarto 10
quarto 14
banheiro 4
2
quarto 12
banheiro 5

Ao passar este arquivo para seu executável, observe se você obtem a saída 77. Por exemplo, caso o arquivo chame t16.txt:

./a.out < t16.txt
77
