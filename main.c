#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int tam;

    scanf("%d", &tam);

    if(tam == 0) {
        printf("[vazio]");
}
else{
int *vetor = (int*) malloc(tam*sizeof(int));
 for(int i = 0; i<tam;i++){
     scanf("%d", &vetor[i]);
 }
    printf("[%d", vetor[0]);
    
    for(int i = 1; i<tam;i++){
       printf(",%d", vetor[i]);      
    }
printf("]");
free(vetor);
 }

}
