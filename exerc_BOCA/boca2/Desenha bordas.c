/*
Desenha bordas (++)
(++)
Faça um programa que gere uma matriz de zeros, de tamanho definido pelo usuário, de no máximo
100×100, com uma borda de largura k de valor x.
Entrada
O programa deve ler quatro números inteiros, os dois primeiros relacionados à largura e altura da matriz,
o terceio a largura da borda e o por último o valor da borda.
Saída
O programa deve apresentar a matriz como uma imagem PGM, ou seja, seguindo a sequência:
P2
largura altura
255
<dados da matriz>
Os dados da matriz devem ser impressos sempre com um espaço à direita e seguido de quebra de linha
ao final de cada linha da matriz.
Observações
Para testar seu código, você pode redirecionar a saída padrão do seu programa para um arquivo com
extensão ".pgm", usando o comando "./programa > img.pgm".
*/

#include <stdio.h>

int main() {
    int l, altura, largura_borda, valor_borda;
    scanf("%d %d %d %d", l, altura, largura_borda, valor_borda);



    return 0;
}