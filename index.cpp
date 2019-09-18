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

//Implementacao do Insertion Sort
void insertionSort(int *Array){
    int k, auxiliar, n;
    
        //Percorre todo o vetor criado (Array)
    std::cout << "Ordenando com Insertion sort" << std::endl;
    for(k = 1 ; k<= 100 ; k++){
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
}
//Fim Insertion Sort

//Implementacao do Selection Sort
void selectionSort(){

}
//Fim Selection Sort

//Implementacao do Bubble Sort
void bubbleSort(int *Array){
    int k, n, auxiliar;
    
    //Percorre todo o vetor criado (Array)
    std::cout << "Ordenando com Bubble sort" << std::endl;
    for(k = 1 ; k < 100 ; k++){
        //Percorrer o vetor procurando os pares para fazermos a troca
        for(n = 0; n < 100 - k ; n++){
            //Se o valor comparado for menor que o próximo valor
            //será realizada a troca 
            if(Array[n] > Array[n+1]){
                auxiliar = Array[n];
                Array[n] = Array[n+1];
                Array[n+1] = auxiliar;
            }
        }
    }
}
//Fim Bubble Sort

//Implementacao do Quick sort
void quickSort(int *Array){
    int k, pivot, auxiliar, i, n;
    //Percorre todo o vetor criado (Array)
    for(k = 1 ; k < 100000 ; k++){
        //Enquanto o K não chega ao final do vetor
        if(k < 100000){
            pivot = k;
            i = k;
            n = 100000;
            //Enquanto i não chega ao final do vetor
            while(i < n){
                while(Array[i] <= Array[pivot] && i < 100000){
                    i++;
                }
                while(Array[n] > Array[pivot]){
                    n--;
                }
                //Swap para realizar a troca das posições
                if(i < n){
                    auxiliar = Array[i];
                    Array[i] = Array[n];
                    Array[n] = auxiliar;
                }
            }
            //Swap entre o pivot e o array
            auxiliar = Array[pivot];
            Array[pivot] = Array[n];
            Array[n] = auxiliar;
        }
    }
}
//Fim Quick Sort

//Implementacao do Merge Sort
void mergeSort(int *Array){
    void sort(int L, int R){
        //L = Left
        //R = RIGHT
        //M = MIDDLE
        int M;

        //Divisao do Merge Sort
        if(L < R){
            M = (L + R) / 2;

        }
        //Ocorre a recursividade até a separação total dos elementos
        sort(L,R);
    }
}

int main(){
    
    srand (time(NULL));
    
    //Variavel para armazenar o valor máximo de valores a ser armazenado
    //de forma aleatória.
    //Variaveis aleatórias até limiteAleatorio
    int limiteAleatorio;
    
    //Auxiliares na ordenacao do insertion sort
    //i =  indice
    int unsigned i;
    int k, n, auxiliar, pivot, selecao;
    
    //Alocacao dinamica de um ponteiro que aponta para um array de 16 posicoes
    //Esse valor devera ser modificado para o valor máximo que a memória consegue
    //alocar
    int *Array = new int [100];
    
    //Definindo valores aleatórios em um vetor de >>>100<<< posições, os valores
    //vao de 1 até 666.
    for(i = 0 ; i<= 100; i++){
        limiteAleatorio = rand() % 100 + 1;
        Array[i] = limiteAleatorio;
    }

    //Menu de selecao do algoritmo de ordenacao
    std::cout << "Selecione o algoritmo de ordenacao\n" 
                 "1) Insertion Sort\n" 
                 "2) Selection Sort\n"
                 "3) Bubble Sort\n"
                 "4) Shell Sort\n"
                 "5) Quick Sort\n"
                 "6) Merge Sort\n"
                 "7) Radix Sort" << std::endl;
    std::cin >> selecao;

    //Selecao do Insertion Sort
    if (selecao == 1){
        //Ordena os valores através do Insertion Sort    
        insertionSort(Array);
        std::cout << "O arranjo foi ordenado com sucesso atraves do Insertion Sort\n" << std::endl;
    }

    //Selecao do Selection Sort
    if (selecao == 2){
        // ======================SELECTION SORT=================
    }

    //Selecao do Bubble Sort
    if (selecao == 3){
        //Ordena os valores através do Insertion Sort    
        bubbleSort(Array);
        std::cout << "O arranjo foi ordenado com sucesso atraves do Bubble Sort\n" << std::endl;
    }

    //Selecao do Shell Sort
    if(selecao == 4){
        // ======================Shell SORT=================
    }

    //Selecao do Quick Sort
    if(selecao == 5){
        quickSort(Array);
        std::cout << "O arranjo foi ordenado com sucesso atraves do Quick Sort\n" << std::endl;
    }
    
    //Selecao do Merge Sort
    if(selecao == 6){
        // ======================MERGE SORT=================  
    }

    //Selecao do Radix Sort
    if(selecao == 7){
        // ======================RADIX SORT=================
    }

    /*
    //IMPRIMIR RESULTADO
    for (i = 0 ; i <= 100000 ; i++){
        std::cout << Array[i] << " ";
    }
    */

    return 0;
}