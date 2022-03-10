# Módulo 6: Corretude de programas. VPL2 - Arranjos Limitados (exceções)
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Este é uma continuação do VPL1. Sendo assim, primeiramente você deve implementar o que é pedido naquele VPL antes de prosseguir.

Os principais problemas de usar asserts para identificar erros são que:
(i) as mensagens de erro são pouco explicativas, e que (ii) o programa é necessariamente abortado quando a cláusula do assert não é verdadeira. Sendo assim, esta técnica pode ser útil  para o programador durante o processo de desenvolvimento do software. Entretanto, mesmo um software correto pode apresentar um comportamento indeterminado/inesperado diante de uma má operação do usuário. Um software robusto precisa antever estes episódios e tratá-los de alguma forma, mesmo que seja abortando o programa e explicando claramente ao usuário o que aconteceu.

Para ilustrar como lidar com este tipo de erro, nós vamos alterar o código do VPL4 de forma a trocar os asserts por lançamentos de exceções. A função main já está implementada. Ela capta (catch) corretamente três tripos de exceções: ExcecaoIntervaloVazio, ExcecaoIndiceNaoInicializado, e ExcecaoIndiceInvalido.

O que você tem que fazer neste VPL é garantir que os métodos da classe Arranjo lancem (throw) estas exceções de acordo com suas pré-condições.
