
# Documentação da Biblioteca
## O que é? 
 Trata-se de uma biblioteca de minha autoria, que apenas com os usos das condições conhecidas (if, else, while, for), e operações básicas (+ , - , /, *) calcular coisas mais complexas como raízes e tamanho de uma string. 
## Como usar?
<ol>
 <li>
  Baixe o arquivo da biblioteca
 </li>
 <li>
  Inclua o arquivo da biblioteca no seu código: 
   <pre>
  #include "c_mat.h"
</pre>
 </li>
 <li>
  Após isso use as funções da biblioteca adequadamente
 </li>
</ol>

## Funcionalidades

A biblioteca fornece uma variedade de funções úteis para realizar operações matemáticas e outras tarefas. Aqui estão descritas as principais funcionalidades da biblioteca:

### Função para Extração de Raízes

#### `double extrairRaiz(double valor)`

Esta função utiliza o método da bissecção para extrair a raiz quadrada de um número. Consegue um resultado de até 51 casas decimais. 

### Funções Matemáticas

#### `double potencia(a, b)`

Esta função calcula \(a^b\). Sendo a, um número real e b um número natural. 

#### `int fatorial(int x)`

Esta função calcula o fatorial de um número natural. \(x\).

#### `int somarIntervalo(a, b)`

Esta função retorna a soma de todos os números em um intervalo fechado \([a, b]\).
Seno a r b um número inteiro. 

#### `double calcularHipotenusa(double c1, double c2)`

Esta função calcula a hipotenusa de um triângulo retângulo com catetos \(c1\) e \(c2\).

#### `double converterParaCelsius(double f)`

Esta função converte uma temperatura de Fahrenheit para Celsius.

#### `int tamanhoTexto(char *texto)`

Esta função retorna o tamanho de uma string passada como parâmetro. 

#### `int verificarPrimo(int n)`

Esta função verifica se um número \(n\) é primo.

#### `int somarVetor(int *vetor, int tamanho)`

Esta função soma todos os elementos de um vetor inteiro, você deve passar o vetor e o tamanho do vetor como parâmetro. 

#### Operações Básicas

##### `float somar(float a, float b)`

Esta função realiza a adição de dois números.

##### `float dividir(float a, float b)`

Esta função realiza a divisão de dois números.

##### `float multiplicar(float a, float b)`

Esta função realiza a multiplicação de dois números.

##### `float subtrair(float a, float b)`

Esta função realiza a subtração de dois números.

### Constantes

#### `double valorDePI()`

Esta função retorna o valor de \(\pi\)\, com 50 dígitos. 

## Observações
 - A biblioteca é apenas uma exemplo de como é possível sim, criar coisas sem a necessidade de usar bibliotecas e funções já prontas numa linguagem, mas que elas ajudam no desenvolvimento.
