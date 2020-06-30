Introdução a Programação

TEMA 1 - CONCEITOS BÁSICOS DE PROGRAMAÇÃO ESTRUTURADA E DA LINGUAGEM C

* Linguagem de programação é um método padronizado para comunicar instruções para um computador, um 
conjunto de regras sintáticas e semânticas usadas para definir um programa de computador. Ela permite que um 
programador especifique precisamente sobre quais dados um computador vai atuar, como estes dados serão 
armazenados ou transmitidos e quais ações devem ser tomadas sob várias circunstâncias.

* O desenvolvimento de um programa pode ser dividido em três etapas básicas:

- Análise: corresponde à análise do problema a ser resolvido.

- Algoritmo: uma sequência de passos a ser seguida para a realização de determinada tarefa. Utilizam-se 
ferramentas do tipo descrição narrativa, fluxograma ou português estruturado (pseudocódigo) para 
descrever o problema com sua possível solução.

- Codificação: O algoritmo definido na etapa anterior é transformado em código a partir da linguagem de 
programação escolhida.

- UM ALGORITMO DIVIDE O PROBLEMA A SER RESOLVIDO EM TRÊS ETAPAS BÁSICAS 

* ENTRADA
* PROCESSAMENTO 
* SAÍDA


LINGUAGEM C

- A linguagem de programação C é uma linguagem de propósito geral, que foi originalmente projetada para ser implementada no sistema operacional UNIX. No entanto, a linguagem não está presa a um sistema operacional específico. C foi desenvolvido a partir de duas linguagens anteriores: BCPL e B. A linguagem foi desenvolvida por Dennis Ritchie em 1972.

CARACTERÍSTICAS DA LINGUAGEM C

C é uma linguagem case sensitive, isto é, termos e comandos escritos em maiúsculas são diferentes dos escritos em minúsculas. Todos os comandos em C devem ser escritos em letras minúsculas.C, assim como as demais linguagens de programação, possui palavras reservadas, que têm um significado 
especial para a linguagem. Exemplos dessas palavras: auto, break, case, if, else, switch, for, while, begin, end, continue, return, const, sizeof, typedef. Oferece um conjunto de bibliotecas e permite que sejam definidas bibliotecas próprias. Tais 
bibliotecas são um conjunto de funções para realizar tarefas específicas. As primeiras linhas do programa 
indicam as bibliotecas utilizadas. Exemplo: #include “minha_biblioteca.h” ou #include <minha_biblioteca.h>
Comentários: textos no código que não serão processados pelo compilador. Serve para uso do programador 
como forma de explicar trechos de código e fazer anotações, por exemplo. São representados por: // para 
comentário feito em uma única linha ou /* comentário */ para comentários utilizando várias linhas.
Ponto e vírgula: Ao final de cada comando utiliza-se ; indicar o término do comando.

- TIPOS DE DADOS

Programas utilizam a todo instantes dados para a realização das tarefas sob sua responsabilidade. Muitos desses dados serão armazenados na memória do computador para que possam ser utilizados e processados durante a execução de um programa. Desse modo, a definição e utilização de tipos de dados tornam-se necessárias. Os tipos de dados básicos da linguagem C são:

* Inteiro: números positivos ou negativos e não possuem parte fracionária. Ocupam quatro
bytes para armazenamento na memória. Utiliza-se o termo int para representá-lo.
Exemplos: -1, -4, 1, 100.
Modificadores podem ser utilizados associados a esse tipo, tais como long (números inteiros mais 
extensos), short (números inteiros mais curtos) e unsigned (números inteiros não negativos).

* Real: números inteiros positivos ou negativos e possuem parte fracionária. Podem ser definidos com os termos float (número real de precisão simples – menores) ou double (números reais com dupla precisão – maiores).
Exemplos: 23.58 36.49 -25.59869

* Caractere: tipo de dado formado por um único caractere, que pode ser letra maiúscula, letra minúscula, número, caractere especial (&, #, @, ...). É definido pelo termo char.
Exemplo: ‘a’, ‘e’, ‘1’, ‘$’.

* Variáveis
Os dados recebidos e manipulados em um programa precisam ser armazenados na memória do computador. As variáveis representam espaços de memória utilizados para armazenar esses dados do programa. Cada 
variável possui um identificador (nome), um valor, um tipo de dado associado ao valor que armazenará e um endereço de memória (local em que esse valor será armazenado). O valor armazenado em uma variável pode 
ser alterado durante a execução do programa.

* Constantes
São espaços de memória que armazenam dados que, durante a execução de um programa, permanecem com os seus valores inalterados. Utiliza-se a palavra reservada const para especificar a declaração de uma 
constante. Também pode ser utilizada a diretiva #define.
Sintaxe:
const int PI = 3.14159;
#define PI 3.14159

* Identificadores
São os nomes dados às variáveis, constantes e funções. Tais nomes possuem regras para a sua definição:
* Primeiro caractere deve ser sempre uma letra ou sublinhado.
* Próximos caracteres podem ser letras (maiúsculas ou minúsculas), números ou o caractere sublinhado.
* Não são permitidos caracteres especiais (#, @, $, ...) nem espaços em branco.
* Não é permitido utilizar como identificador as palavras reservadas da linguagem C.

<!-- FIM -->

TEMA 2 - COMANDOS DE ATRIBUIÇÃO E DE ENTRADA E SAÍDA DE DADOS

É importante ressaltar que um programa estará não só armazenando, mas processando, manipulando e exibindo dados durante a sua execução visando gerar os resultados desejados. Ao manipular dados, constantemente, o programa precisa realizar operações sobre tais dados.

De acordo com os tipos de dados das variáveis, determinadas operações podem ser aplicadas nesses dados. Os principais operadores na linguagem C são:

* Operadores relacionais: 

* Operadores lógicos:

* Operadores aritméticos: 

são operadores básicos, já conhecidos da Matemática, que podem ser aplicados em tipos de dados numéricos como int, float e double. O uso dos operadores geram expressões, que podem ser armazenadas em variáveis com o uso de comandos de atribuição.

* Operadores de incremento

Os operadores de incremento e decremento têm a finalidade de simplificar o processo de adicionar ou remover uma unidade de um determinado número. São representados pelos operadores ++ (incremento) e – (decremento).


* Operadores Relacionais

Operadores relacionais são utilizados para fazer alguma comparação entre variáveis, retornando 1 (ou valores 
diferentes de 0) se a comparação obteve um resultado verdadeiro e 0 caso a comparação tenha obtido um 
resultado falso.

* Operadores Lógicos

Em programação, valores lógicos retornam verdadeiro ou falso. A linguagem C não possui um tipo de dado específico para representar os valores lógicos. Em C, o valor lógico é representado por 0 (zero) e qualquer valor diferente de zero representa o valor lógico verdadeiro. Para qualquer situação que se deseja verificar a combinação de comparações serão utilizados operadores lógicos.

ESTRUTURA SEQUENCIAL

Na estrutura sequencial, um conjunto predeterminado de comandos é executado de forma sequencial, seguindo a ordem em que foram declarados. Desse modo, ao escrever um programa deve-se ter bastante 
atenção à ordem dos comandos utilizados.