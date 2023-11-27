#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char **argv)
{
	system("echo off");
	system("chcp 28591");
	system("echo on");
	printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,"portuguese"));
	char nome[100];
	int numero;
	printf("Hello world !!!\n");
	printf("Digite seu nome:\n");
	scanf("%s:",nome);
	printf("Olá %s, como vai?\n",nome);
	printf("Digita um numero de 0 a 10:\n");
	scanf("%d",&numero);
	printf("O numero escolhido é %d",numero);
	
	return 0;
}
