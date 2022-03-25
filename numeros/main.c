#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

    printf("Digite dois numeros distintos:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    if(n1>n2){
    printf("%f e o maior numero", n1);
    }
    if(n2>n1){
    printf("%f e o maior numero", n2);
    }
    return 0;
}
