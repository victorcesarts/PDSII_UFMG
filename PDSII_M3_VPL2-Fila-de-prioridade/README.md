# Módulo 3: POO. VPL 2: Fila de prioridade
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Neste VPL, você vai terminar de implementar um programa que lê, da entrada padrão, uma lista de nomes e idades. Ao final, ele imprime somente os nomes (um por linha) ordenados pela idade (da maior para a menor). Você pode assumir que cada nome tem apenas uma palavra. Se dois nomes têm a mesma prioridade, aquele digitado primeiro tem prioridade sobre o outro.

Este programa já está implementado no arquivo main.cpp, mostrado a seguir.

![image](https://user-images.githubusercontent.com/83244223/131255273-0582479e-c259-47ba-bab2-2c1c18b67085.png)

Resta a você implementar (no arquivo fila_de_prioridade.cpp) a classe FilaDePrioridade definida no arquivo fila_de_prioridade.h. Você não pode, em hipótese alguma, alterar a interface pública desta classe, sob pena de inviabilizar a compilação do arquivo main.cpp (ou qualquer outro arquivo hipotético que utilize esta classe). Entretanto, você pode alterar os dados privados, além de incluir quaisquer bibliotecas que julgar necessárias ou implementar funções auxiliares no arquivo  fila_de_prioridade.cpp.

Exemplo de entrada/saída:
input = 
João 26
Marcos 54
Maria 35
Ana 65
Bia 35

output =
Ana
Marcos
Maria
Bia
João
