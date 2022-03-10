# Módulo 6: Corretude de Programas. VPL1 - Arranjos Limitados (asserts)
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Neste VPL, vocês vão trabalhar com uma classe Arranjo, que basicamente faz o mesmo que array de c++ (e.g. int v[10]). A diferença é que os índices de um Arranjo podem ser definidos como qualquer intervalo de números inteiros. Por exemplo, a instrução

Arranjo<int> v(-10, 10);

Cria um arranjo com *21* elementos, cujos índices variam de -10 até 10. O programador pode acessar os elementos deste arranjo através de dois métodos atribuir() e valor(). Por exemplo:

Arranjo<int> v(-10, 10);
for (int i = -10; i <= 10; i++) {
  v.atribuir(i, i * i);
  cout << a.valor(i) << endl;
}

O que nós faremos neste e nos próximos dois VPLs é alterar aspectos deste código, utilizando técnicas de programação defensiva e de testes de unidade, de forma a tornar este código mais robusto a futuros erros que podem ocorrer no processo de manutenção e evolução do sistema. Além disso, também usaremos técnicas de tratamento de exceções para tornar o código mais robusto à erros de entrada de dados dos usuários. Antes de mais nada, abra os arquivos na sua IDE de programação e entenda todo o funcionamento do programa.

Neste primeiro VPL, nós vamos utilizar a biblioteca de assertivas <cassert> para garantir que as pré-condições de cada método da classe Arranjo sejam satisfeitas. Na definição da classe Arranjo, você encontrará exatamente quais são as precondições que você terá que testar.
