#include <stdio.h>
#include <stdlib.h>
/*troca*/
void trocaPonteiro(int *a, int *b){
int temp;
temp = *a;
*a=*b;
*b = temp;
}
int main()
{
    int x,y;
    printf("Informe um valor: ");
    scanf("%d",&x);

    printf("Informe outro: ");
    scanf("%d",&y);

    printf("\nOs valores informados (SEM TROCAR) foram: %d e %d",x,y);
    trocaPonteiro(&x,&y);
    printf("\nValores Trocados: %d e %d\n\n",x,y);
    return 0;
}
