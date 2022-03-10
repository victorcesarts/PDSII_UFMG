# Módulo 4: POO Avançado. VPL2 - Figuras
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

﻿﻿Neste exercício, você deverá implementar Figuras. Uma figura é um objeto que sabe dizer se ele contém ou não um ponto bidimensional. Figuras devem implementar a classe abstrata abaixo. Essa classe está disponível no arquivo Figuras.h, que faz parte do trabalho:

class Figure {
  public:
    virtual bool contains(double x, double y) const = 0;
    virtual ~Figure() {}
};

Neste trabalho estão disponíveis já duas implementações da classe Figure no arquivo Figuras.h, porém você deverá implementar o método contains de cada uma dessas classes:

A classe Rectangle, que representa retângulos definidos por um canto inferior esquerdo (um ponto bidimensional), mais uma largura e uma altura.
A classe Circle, que representa círculos definidos por um centro (um ponto bidimensional), mais um raio.
Figuras podem ser compostas. Neste exercício, define-se duas maneiras de compor figuras:

A adição de figuras, via o operador aritmético de adição (+). O resultado de adicionar duas figuras, f1 e f2, é uma nova figura, ff, que contém qualquer ponto que está contido em f1 ou em f2.
A subtração de figuras, via o operador aritmético binário de subtração (-). O resultado de subtrair duas figuras (f1 - f2) é uma nova figura que contém qualquer ponto de f1, desde que este ponto não esteja também presente em f2.

A assinatura desses operadores já está disponível no arquivo Figuras.h, porém você deverá completar a implementação desses operadores. Note que uma solução para este VPL é pequena, porém não é trivial. Caso o código extra que você criar ultrapasse 50 linhas, busque pensar em alternativas. Procure pensar em termos de orientação a objetos. Uma sugestão: defina uma nova classe para representar figuras compostas. Por exemplo:

/**
 * \class CompositeFigure
 * \brief Representacao de figuras compostas. Esta classe representa o tipo das
 * figuras retornadas pelos operadores de adicao ou subtracao de figuras.
 */
class CompositeFigure: public Figure {
  // TODO: implemente a figura composta aqui
};

Assim, você pode implementar os operadores de composição de tal forma que eles retornam figuras compostas. Você pode estender a classe CompositeFigure com especializações, denotando, por exemplo, a união de figuras ou a diferença delas. Sua implementação pode ser mais ou menos assim:

Figure* operator+(const Figure& lhs, const Figure& rhs) {
  CompositeFigure *f = NULL // Crie uma figura composta que represente
                            // a uniao de lhs e rhs.
  return f;
}

Existe um arquivo de testes neste trabalho (main.h), o qual será usado para verificar sua implementação. O arquivo contém três testes exemplos que você pode usar para verificar seu código durante o desenvolvimento. O resultado esperado para esses arquivos pode ser visto nas figuras abaixo:
![image](https://user-images.githubusercontent.com/83244223/131254941-133fb044-b3d0-4ed2-867d-b9cab38dcb7a.png)

O teste a seguir verifica se as operações de subtração estão sendo implementadas na ordem correta. A operação (f1 - f2) retorna uma nova figura que contém os pontos de f1, a menos que esses pontos estejam também em f2:

![image](https://user-images.githubusercontent.com/83244223/131254954-e8d92870-bf0f-4d07-bb0d-d7ccc176dcb6.png)

O teste a seguir verifica se a implementação de figuras permite a composição de adição com subtração:

![image](https://user-images.githubusercontent.com/83244223/131254969-36736169-e7c7-41fc-8714-6af04da2b9ea.png)
