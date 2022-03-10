# Módulo 3: POO. VPL1 - Contagem de palavras
(Esses exercícios/códigos fazem parte da matéria "Programação e Desenvolvimento de Software II" oferecida pelo DCC/UFMG)

Neste VPL, você terminará a implementação de um programa que conta a frequência de palavras em arquivo digitado na entrada padrão. Segue a função main() deste programa.

![image](https://user-images.githubusercontent.com/83244223/131255208-b4476886-53fc-409d-a7da-c6dc19613c98.png)

Este programa já está implementado no arquivo main.cpp (vide anexos). Ele lê um conjunto de palavras da entrada padrão, até que um '.' seja digitado. Em seguida, ele imprime na saída padrão a lista de palavras e suas respectivas frequências, separadas por um único espaço (" ").  Sua implementação do método ImprimirOrdenado tem que ser tal que as palavras (i) sejam impressas uma por linha, e (ii) estejam ordenadas lexicograficamente.

Para facilitar seu trabalho, a implementação da classe Palavra pode ser encontrada nos arquivos em anexo. Esse exercício consiste em implementar (dentro do arquivo ContadorDePalavras.cpp) a classe ContadorDePalavras que está definida no arquivo ContadorDePalavras.hpp.

Você deve alterar unicamente e exclusivamente o arquivo ContadorDePalavras.cpp, pois o principal objetivo desse exercício é observar a comunicação entre objetos de diferentes classes. Você pode incluir qualquer biblioteca ou novos métodos auxiliares no arquivo ContadorDePalavras.cpp, mas precisa garantir que a interface pública da classe ContadorDePalavras mantenha-se a mesma, ou seja, nome dos métodos e suas assinaturas (argumentos) precisam manter-se como estão, caso contrário, o arquivo main.cpp não mais compilará corretamente. Esta regra não se aplica aos novos métodos que você criar, pois os trechos do código que já foram implementados não dependem diretamente de tais novos métodos.

Alguns exemplos de uso podem ser vistos logo abaixo:

$ cat t0.txt
uma frase outra frase mais uma frase .
$ ./a.out < t0.txt 
frase 3
mais 1
outra 1
uma 2

$ cat t1.txt
a a a b c a b b c a a b a a b c .
$ ./a.out < t2.txt 
a 8
b 5
c 3

$ cat t2.txt
1 2 3 4 2 1 4 3 2 1 .
$ ./a.out < t2.txt 
1 3
2 3
3 2
4 2
