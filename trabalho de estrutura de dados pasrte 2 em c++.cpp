//Porgrama de ordenação de vertor
// Essse programa e o mesmo da versão C so que em C++
//Grupo - Ricardo e Diego.
//Materia: Estrutura de dados.
//Professor: Rafael Jesus

#include<iostream> 
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[100], aux, qtd;
	
	std :: cout << "\n Digite quantos espaços tera o vetor:";
	std :: cin >> qtd;
	
	for(int i = 0; i < qtd; i++)
		
	{
		std :: cout << "\nDigite um numero na posição " << i <<"º do vetor:";
		std :: cin >> vetor[i];
	}
	
	for(int x = 0; x < qtd; x++)
	{
		for(int y = x; y < qtd; y++)
		{
			if(vetor[x] > vetor[y])
			{
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	
	std :: cout << "\nVetor ordenado em ordem cresente:";
	
	for(int i = 0; i < qtd; i++)
	{
		std :: cout <<"\nEm " << i << "º é:" << vetor[i];
	}
	
	
	return 0;
}
