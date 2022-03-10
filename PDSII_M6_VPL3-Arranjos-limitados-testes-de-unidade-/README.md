# Módulo 6: Corretude de programas. VPL3 - Arranjos Limitados (testes de unidade)
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Este é uma continuação dos VPL1 e VPL2 desse módulo. Sendo assim, primeiramente você deve implementar o que é pedido naqueles VPLs antes de prosseguir.

Neste VPL, nós vamos esquecer qualquer aplicação específica da classe Arranjo e focar em escrever testes de unidade que testam cada método desta classe individualmente. Este processo é muito eficiente no processo de manutenção e evolução do sistema, porque no momento que um erro é introduzido, é possível identificar exatamente em qual unidade de código ele está. Caso um novo erro seja introduzido e não seja identificado por algum dos testes existentes, no momento que o erro é corrigido, um novo teste pode ser escrito para evitar que erros semelhantes possam ser introduzidos no código no futuro. 

O custo de escrita deste testes é alto, mas é importante notar que eles não são feitos para simplesmente testar a implementação corrente do sistema, mas também *toda* e *qualquer* alteração que venha a ser feita no sistema no futuro.

Os testes já foram escritos dentro do arquivo main.cpp. Entretanto, o conteúdo de todas as clausulas CHECK foram subtraídas do código.
O que você tem que fazer neste VPL, é única e exclusivamente preencher o conteúdo das clausulas  CHECK que já estão no arquivo main.cpp
