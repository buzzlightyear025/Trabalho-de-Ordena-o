//NOMES: Ricardo Leite e Diego Ferreira
//Turma: Estrutura de dados em C++
// Professor : Rafael Jesus
#include <iostream>

int main () 
{
  
 
 
int vetor[100], i2, i3, qtd; // Declaracao de variaveis
  
std::cout << "\nDigite a quantidade de numeros..: "; // Lendo a quantia de numeros
std::cin >> qtd;
  
for (i2 = 0; i2 < qtd; i2++)
    
 
    {
        std::cout << "\nInsira um numero..: "; // Lendo os numeros
        std::cin >> vetor[i2];
    }
  
 
int memoria, troca, i, j; // Declaracao de mais variaveis
  
 
troca = 1;			/*A variavel "troca" vai ser a verificacao da troca em cada passada */
  
 
for (j = qtd - 1; (j >= 1) && (troca == 1); j--)
    
 
    {
        
     
        troca = 0;		/*Se o valor continuar 0 na proxima passada quer dizer que houve troca. */
    
     
        for (i = 0; i < j; i++)
    
     
    	{
	        if (vetor[i] > vetor[i + 1])
	        {
                memoria = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = memoria;
                troca = 1;	/*Se houve troca, "troca" recebe 1 para continuar rodando. */
            }
        }
    }
        for(i3 = 0; i3 < qtd; i3++)
        {
            std::cout<< "\n" << vetor[i3];
        }
}
