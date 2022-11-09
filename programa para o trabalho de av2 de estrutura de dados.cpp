//Programa de ordena��o e string e vetores em C
//Grupo : Ricardo e Diego.
//Materia: Estrutura de dados.
//Professor: Rafael Jesus.

#include<stdio.h>
#include<string.h>

char nome [10][80]; // variavel global para acessar a variavel da fun��o ORDENA quanto do "int main"

void ORDENA(){
	int x, y,r;
	char aux[80];
	for(x = 0; x <= 9; x++)
	{
		for(y = x + 1; y <= 9; y++)
		{
			r = strcmp(nome[x],nome[y]); //essa fun��o returna 0, 1 ou -1 
			if(r > 0) // Se r for maior que 0 significa que nome[x] e maior que nome[y].
			{
				strcpy(aux,nome[x]); // strcpy e uma fun��o que  copia string e o aux ele recebera o nome[x].
				strcpy(nome[x], nome[y]); // o nome[x] recebe o nome[y].
				strcpy(nome[y],aux); //O nome[y] recebe o aux.
			}
		}
	}
}

int main(){
	
	int x;
	
	printf("\nDigite 10 nomes:\n");
	
	for(x = 0; x <= 9; x++)
	{
		gets(nome[x]); // a fun��o "gets" ler uma string.
	}
	
	ORDENA();
	
	printf("\nNomes ordenados:");
	
	for(x = 0; x<= 9; x++)
	{
		puts(nome[x]); //essa fun��o "puts" imprimi e pula linha.
	}
	
	return 0;
}
