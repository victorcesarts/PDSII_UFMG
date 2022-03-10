# Módulo 5: Boas práticas. Exercício de Revisão e Refatoração
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

O objetivo dessa atividade é praticar a parte de revisão e refatoração utilizando um sistema de controle de versão.

**Considere a seguinte descrição em alto nível da funcionalidade do código:**  
Uma imobiliária oferece um portifólio de imóveis para venda. Cada imóvel tem seu valor avaliado pela sua metragem e valor por metro quadrado estimado, sendo que o valor final inclui a comissão do corretor. A taxa de corretagem neste exercício é determinada pelo tipo do imóvel: apartamento, casa ou cobertura. 

# Mudanças realizadas pelo autor:
As alterações feitas em referência à refatoração do código foram:

- Criado um padrão de identação a fim de manter o código limpo, organizado e mais legível;

- Mudança de nome de variáveis e métodos, os substituindo por nomes mais significativos;

- Seguindo o princípio de Encapsulamento de POO, as variáveis que guardam os dados dos "Clientes" tiveram seu acesso mudado para "Private". Já as variáveis que guardam informações do Imóvel tiveram seu acesso mudado para "Protected";

- Optou-se por utilizar métodos "setters" e "getters", em vez de inicializar as variáveis pelo construtor, pois as informações dos objetos poderiam mudar durante o tempo, sendo necessário métodos para alterar esses dados;

- Modularização dos tipos de imóveis e da própria classe "Imóvel", separando os contratos da implementação (arquivos hpp e cpp);

- A classe "Imóvel" foi declarada como sendo uma classe abstrata (métodos virtuais puros), pois as subclasses (Casa, Apartamento, Cobertura) se relacionam de forma estrita, sendo todas um imóvel que implementam os mesmo métodos, obedecendo o Princípio de Substituição de Liskov;

- Declarado um destrutor virtual para a classe abstrata Imóvel;

- Mudança do método print ( ), que quando chamado no "main" acessava vários arquivos, demonstrando um alto acoplamento;

- Remoção de "números mágicos", como os que determinavam a porcentagem da comissão;

- Adição de comentários para tornar o código mais compreensível sem se tornar redundante;

- Separação dos arquivos em diretórios;

- Criação do Makefile para realizar a compilação automática somente dos arquivos com mudanças: comando "make" para executar compilação;

- Criação de arquivo .gitignore, para ignorar arquivos "build" (.o), arquivos ".log" e ".json";

- Comando ./program realiza a execução do programa;
