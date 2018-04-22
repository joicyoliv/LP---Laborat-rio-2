# Laboratório 3

###Uso das ferramentas de desenvolvimento de programas em C++.
Aluna: Joicy Daliane Silva Oliveira
Professor: Silvio Costa Sampaio

##Objetivo
O objetivo deste laboratório é realizar a implementação de um programa na linguagem de
programação C++ utilizando ferramentas de suporte ao programador, tais como, o compilador e um
sistema de controle de versão, aplicando modularização e outras boas práticas de programação. O
laboratório inclui ainda o uso do depurador (GDB).

##Questão 01
A tarefa principal a ser realizada neste exercício é a implementação de um programa em C++ que
permita calcular as medidas de diversas figuras geométricas planas e espaciais. O programa deverá
receber, através da linha de comando, a indicação da forma geométrica e os dados necessários para
os cálculos. Como resultado, o programa deve exibir as respectivas medidas (área, perímetro ou
volume) da figura escolhida. Note que, para figuras geométricas planas, o programa deve exibir
apenas a área e o perímetro; para figuras geométricas espaciais, o programa deve exibir apenas a
área e o volume da figura.

##Questão 02
Com a ajuda do depurador GDB, apresente os valores das variáveis arg1 e arg2 após a chamada de
cada função no código abaixo, justificando os valores apresentados. Relate a sequência de
comandos do GDB que você utilizou, indicando o propósito.

##Compilação
Clone este repositório.
Para a compilação das questões entre no diretório da questão utilize o comando 'make' no terminal do Linux.

##Executar os programas
O programa da Questão 01 - ./bin/geometria <nome_da_figura_geometrica> <valores>

O programa da Questão 03 - g++ -g -Wall -pedantic -std=c++11 -o teste main.cpp
