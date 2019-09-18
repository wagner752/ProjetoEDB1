#include <iostream>
#include <time.h>

/*
    FAZER ARMAZENAMENTO DE VALORES:
    1. arranjos com elementos em ordem n~ao decrescente,
    2. arranjos com elemento em ordem n~ao crescente,
    3. arranjos com elementos 100% aleatorios == OK
    4. arranjos com 75% de seus elementos em sua posic~ao denitiva,
    5. arranjos com 25% de seus elementos em sua posic~ao denitiva, e
    6. arranjos com 50% de seus elementos em sua posic~ao denitiva.
*/

int main(){
    
    srand (time(NULL));
    
    //Variavel para armazenar o valor máximo de valores a ser armazenado
    //de forma aleatória.
    //Variaveis aleatórias até limiteAleatorio
    int limiteAleatorio;
    
    //Auxiliares na ordenacao do insertion sort
    //i =  indice
    int i, k, n, auxiliar;
    
    //Alocacao dinamica de um ponteiro que aponta para um array de 16 posicoes
    //Esse valor devera ser modificado para o valor máximo que a memória consegue
    //alocar
    int *Array = new int [100000];
    
    //Definindo valores aleatórios em um vetor de 100000 posições, os valores
    //vao de 1 até 666.
    for(i = 0 ; i<= 100000; i++){
        limiteAleatorio = rand() % 666 + 1;
        Array[i] = limiteAleatorio;
    }
    
    //Implementacao do Insertion Sort
        //Percorre todo o vetor criado (Array)
    std::cout << "Ordenando com Insertion sort" << std::endl;
    for(k = 1; k<= 100000 ; k++){
        auxiliar = Array[k];
        n = k - 1;

        //Empurra o elemento para o inicio do vetor    
        while(n >= 0 && auxiliar < Array[n]){
            Array[n + 1] = Array[n];
            n--;
        }

        //Próximo elemento do velor;
        Array[n+1] =  auxiliar;
    }
    //Fim Insertion Sort
    /*
    //Imprime os valores na tela ordenados através do Insertion Sort
    std::cout << "Os valores foram ordenados atraves do Insertion Sort: " << std::endl;
    for (i = 0 ; i <= 100000 ; i++){
        std::cout << Array[i] << " ";
    }
    */
    //Implementacao do Bubble Sort
        //Percorre todo o vetor criado (Array)
    std::cout << "Ordenando com Bubble sort" << std::endl;
    for(k = 1; k < 100000 ; k++){
        //Percorrer o vetor procurando os pares para fazermos a troca
        for(n = 0; n < 100000 - k ; n++){
            //Se o valor comparado for menor que o próximo valor
            //será realizada a troca 
            if(Array[n] > Array[n+1]){
                auxiliar = Array[n];
                Array[n] = Array[n+1];
                Array[n+1] = auxiliar;
            }
        }
    }
    //Fim Bubble Sort

    //Implementacao do Quick sort

    
    //Imprime os valores na tela ordenados através do Bubble Sort
    std::cout << "\nOs valores foram ordenados atraves do Bubble Sort: " << std::endl;
    
    for (i = 0 ; i <= 100000 ; i++){
        std::cout << Array[i] << " ";
    }
    
    return 0;
}