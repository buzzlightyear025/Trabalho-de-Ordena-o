//NOMES: Ricardo Leite e Diego Ferreira
//Turma: Estrutura de dados em C++
// Professor : Rafael Jesus 


#include <iostream>
#include <cstring>

int main()
{
    int i, j;
    char nm[3][20], aux[20];
    for (i = 0; i < 3; i++) 
    {
        std::cout << "\nNome..: ";
        std::cin >> nm[i];
    }
    
    for (i = 1; i < 3; i++) 
    { /* 3 = qtde de palavras */
       for (j = 1; j < 3; j++) 
        {
          // verifica se tem que ser depois, se for troca de posi��o
          if (strcmp(nm[j - 1], nm[j]) > 0) 
            {
                strcpy(aux, nm[j - 1]);
                strcpy(nm[j - 1], nm[j]);
                strcpy(nm[j], aux);
            }
        }
    }
    // Mostrar o resultado
    for (i = 0; i < 3; i++)
    {
        std::cout << nm[i];
    }   
    return 0;
}
