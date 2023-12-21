# C_mat.h-Biblioteca_lang-c
Trata-se de uma biblioteca para rotinas matemáticas de minha autoria para a linguagem C.
  <section>
    Modo de uso:
    <ol>
      <li>Crie um arquivo C, e salve esse arquivo na mesma pasta da biblioteca.</li>
      <li>Inclua a bilioteca no seu arquivo C, para assim usar suas funcionalidades: </li>
     <code>
       #include "c_mat.h"
     </code>
    </ol>
<section>
<h3>funções diponíveis na biblioteca: </h3>
   <p>
     A primeira função extraí e retorna a raiz quadrada com precisão de até 51 casas decimais, através do método bisseção. 
     Sintática: 
   <code>
     extrairRaiz(valorRealPositivo)
   </code>
      Exemplo prático:
     <code>
       #include<stdio.h>
       #include "c_mat.c"
       int main(){
           printf("A raiz de 5 em 20 casas decimais: %.20lf", extrairRaiz(5));
         }
     </code>
   </p>
</section>
