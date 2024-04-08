# include <stdio.h>

int main (){
    int maior, num = 1;
    maior = 0;
    while(num!=0){
        scanf("%d",&num);
        if (num>maior){
            maior=num;
        };
    }
    printf("%d", maior);
    return 0;
}
