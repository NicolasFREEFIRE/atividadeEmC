
#include <stdio.h>
#include <stdlib.h>
int main(){
    int d;
    printf("digite a nota: ");
    scanf("%d", &d);
    if (d >= 60)
        printf("aluno aprovado \n");
    else
        if(d < 30)
            printf("Aluno reprovado \n");
        else
            printf("O aluno deve fazer a prova sub \n");
    
    return 0;
}
