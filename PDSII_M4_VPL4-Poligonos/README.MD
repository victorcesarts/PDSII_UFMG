# Módulo 4: POO Avançado. VPL4 - Polígonos
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Neste exercício você deverá terminar a implementação do tipo abstrato de dados Polygon. Esse tipo abstrato de dados representa polígonos. Um polígono é formado por um conjunto de N pontos de duas dimensões, que em sequência, determinam N arestas. A classe abstrata Polygon já está quase toda implementada para você:

class Polygon {
  public:
    virtual ~Polygon() {}
    virtual bool contains(const Point& p) const = 0;
    operator const std::vector<Point>&() const { return limits; }
    friend std::ostream& operator << (std::ostream &out, const Polygon &poly);
  protected:
    std::vector<Point> limits;
};

Note que os pontos que compõem um polígono são armazenados no vetor limits. O importante é saber que o ponto em limits[i] forma uma aresta com o ponto em limits[i+1], e que o último ponto de limits forma uma aresta com o ponto em limits[0]. A figura abaixo vai lhe ajudar a entender como polígonos são represetados.
![image](https://user-images.githubusercontent.com/83244223/131254566-3c933352-c431-40e7-9d2c-03891efa30f3.png)
  
  Três classes concretizam polígonos. São elas Point, RightRectangle and RightSquare. Instâncias de pontos representam pares de coordenadas no plano cartesiano bidimensional. Instâncias de RightRectangle representam retângulos retos, isso é, retângulos cujos lados são paralelos aos eixos X e Y do plano cartesiano. Note que dois pontos sempre determinam um único retângulo reto. Por exemplo, há duas formas de determinar o retângulo que começa na origem e vai até o ponto (2, 2):
![image](https://user-images.githubusercontent.com/83244223/131254592-31924ebc-648d-4a64-bc0b-2d4433a5d0ce.png)
Note que isso vale mesmo se ambos os pontos são iguais, ou se compartilham a mesma coordenada X, ou a mesma coordenada Y. A última classe concreta, RightSquare, é uma especialização de RightRectangle. Em outras palavras, RightSquare estende RightRectangle. Assim, as mesmas propriedades de RightRectangle se aplicam a RightSquare.

Neste exercício, você terá de implementar quatro operações. Todas essas operações já tem uma definição no arquivo polygon.cpp, porém incompleta. São elas:

O construtor de Point
O construtor de RightRectangle.
O operador de igualdade (==) entre polígonos. Dois pontos são iguais se eles existem na mesma região do plano cartesiano.
O método contains da classe RightRectangle.

Por simplicidade, assumiremos que dois poligonos, P e Q são iguais se P contém todos os pontos de Q, e Q contém todos os pontos de P. Veja que simplesmente testar se os vetores de ponto de cada polígono são iguais não resolve o problema da comparação entre polígonos. Os pontos podem aparecer em ordem diferente. E note que um retângulo cujos pontos são iguais, isto é, se sobrepõem, é igual a um ponto. Sua implementação deverá passar por três testes. Esses testes estão disponíveis no arquivo main.cpp. Não se preocupe: você não precisa implementar nada no arquivo main.cpp. Tudo o que você precisa implementar está no arquivo polygon.cpp. Os testes são:

testCountContainsOrigin: conta o número de polígonos lidos da entrada que contém o ponto (0, 0)
testCountSquare(sq): conta o número de polígonos que contém o quadrado sq.
hasEqualFigures: retorna verdadeiro se existem pelo menos duas figuras iguais lidas da entrada.
