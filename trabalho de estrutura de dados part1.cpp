//Porgrama de ordenação de vertor
//Essse programa ordena os numeros fornecidos dentra de cada espaço do vetor....
//...e ordena de menor para o maior.
//Em C.
//Grupo - Ricardo e Diego.
//Materia: Estrutura de dados.
//Professor: Rafael Jesus

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[100], aux ,qtd;
	
	printf("\nDigite quantos espaço tera o vetor:");
	scanf("%d",&qtd);
	
	for(int i= 0; i < qtd; i++) // Este for recebe os valores em cada espaço do vetor.
	{
		printf("\nDigite um numero na posição %dº do vetor:", i);
		scanf("%d",&vetor[i]);
	}
	
	for(int x = 0; x < qtd; x++)
	{
		for(int y = x; y < qtd; y++)
		{
			if(vetor[x] > vetor[y]) // Essa condição vai fazer o maior valor do vetor ficar em ultima posição.
			{
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
		
	}
			
				printf("\nVetor ordenado em ordem cresente:"); 
				
				for(int i = 0; i < qtd; i++)
	{
		printf("\nEm %dº é: %d", i , vetor[i]); //Imprimir os valor ordenados em ordem cresente.
	}
	
	return 0;
}
