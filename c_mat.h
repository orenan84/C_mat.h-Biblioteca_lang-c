// FUNCÕES PARA EXTRAÇÃO DE RAÍZES:
double processarFuncao(double x, double valor) {
    return x * x - valor;
}

double gerarPrimeiroB(double valor) {
    for (float cont = 0; cont <= valor; cont++) {
        if (processarFuncao(cont, valor) < 0) {
            return cont ;
        }
    }
}

double gerarPrimeiroA(double valor) {
    for (int cont = 0; cont <= valor; cont++) {
        if (processarFuncao(cont, valor) > 0) {
            return cont;
        }
    }

}

double processarValorEntreAeB(double a, double b) {
    return (a + b) / 2;
}

int escolherFaixa(double a, double b, double c, double valor) {
    if (processarFuncao(a, valor) * processarFuncao(c, valor) < 0) {
        return 1;
    } else {
        return 2;
    }
}

double extrairRaiz(double valor) {
    if(valor >= 0){
        if(valor == 1){
            return 1; 
        }
        else {
    double a = gerarPrimeiroA(valor);
    double b = gerarPrimeiroB(valor);

while(processarValorEntreAeB(a, b) * processarValorEntreAeB(a, b)  - valor != 0) { 
        int cont; 
        cont++;
        double c = processarValorEntreAeB(a, b);
         if(processarValorEntreAeB(a, b) == valor){
            return processarValorEntreAeB(a, b);
        }
        int faixa = escolherFaixa(a, b, c, valor);

        if (faixa == 1) {
            b = c;
        } else {
            a = c;
        }
        if(cont > 1000){
            break;
        }
    }

    return processarValorEntreAeB(a, b);
    }
    }
    return 0; 
}
//FUNÇÃO PARA CALCULO DE POTÊNCIA DE EXPOENTE NATURAL
double potencia(double a, int b){
    double resposta = a; 
        if(b > 0){
        for(int cont = 1; cont < b; cont++){
            resposta = resposta * a;
        }
        return resposta; 
        }
        else if(b == 0){
            return 1; 
        }
}
// FUNÇÃO QUE CALCULA FATORIAL DE UM NÚMERO NATURAL MAIOR OU IGUAL A 0
int fatorial(int x){
    if(x > 0){
    int r; 
    for(int cont = x - 1; cont > 0; cont--){
        if(cont == x - 1){
         r = cont * x;
        }
        else{
            r = r * cont;
        }
    }
    return r; 
    }
    else if(x == 0){
        return 1; 
    }

    return 0;
}

// FUNÇÃO PARA SOMA DE TODOS OS NÚMEROS EM DETERMINADO INTERVALO NATURAL (CONSIDERE 0 NATURAL)
int somarIntervalo(int a, int b){
    int soma = 0; 
    if(a <= b){
        for(int cont = b; cont >= a; cont-- ){
        soma += cont; 
        return soma; 
        }
    }
    else {
        for(int cont = a; cont >= b; cont-- ){
        soma += cont; 
    }
    return soma; 
    }
}
    
// FUNÇÃO RETORNA VALOR DA HIPOTENUSA A PARTIR DOS CATETOS
double calcularHipotenusa(double c1, double c2){
    double hipotenusa;
    hipotenusa = potencia(c1, 2) + potencia (c2, 2);
    return extrairRaiz(hipotenusa); 
}

// FUNÇÃO RETORNA CONVERSÃO DE CELSIUS PARA fahrenheit
double converterParaCelsius(double f){
    return (f - 32) * 5/9 ;
 }

// RETORNA TAMANHO DE STRING
int tamanhoTexto(char *texto) {

    char caractere = texto[0];  
    int cont;

    for (cont = 1; caractere != '\0'; cont++) {
        caractere = texto[cont];
    }

    return cont - 1; 
}

// RETORNA 1 PARA NÚMERO NATURAL MAIOR QUE 1 E PRIMO, ASSIM COMO 0 PARA NÚMERO NÃO PRIMO 
    int verficarPrimo(int n){
    if(n > 1){
        int divisores; 
    for(int cont = 0; cont <= n; cont++){
        if(n % 2 == 0){
        divisores++;
        }
        if(divisores > 2){
         return 0; 
         break; 
        }
      return 1; 
    }
    }
    else {
        return 0; 
    }

}

// SOMA TODOS OS NÚMEROS DE UM VETOR INTEIRO
int somarVetor(int *vetor, int tamanho){
    int soma = 0; // Inicializa a variável soma com zero
    for(int cont = 0; cont < tamanho; cont++){
        soma += vetor[cont]; 
    }
    return soma; 
}

// FUNÇÕES QUE REALIZAM AS QUATRO OPERAÇÕES BÁSICAS
float somar(float a, float b){
    return a + b; 
}
float dividir(float a, float b){
    return a / b; 
}
float multiplicar(float a, float b){
    return a * b; 
}
float subtrair(float a, float b){
    return a - b; 
}
// RETORNA VALOR DE PI
double valorDePI(){
    return  3.1415926535897932384626433832795028841971693993751;
}
