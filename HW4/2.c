#include <stdio.h>

int main(){
    int n;
    int k;
    int count = n;
    scanf("%d %d", &n, &k);
    
    printf("Mo Tu We Th Fr Sa Su\n"); //Все дни недели по порядку 

    for (int i = 0; i < n - 1; i++){
        printf("%2c ", ' '); //Вывод нескольких пробелов чтобы сдвинуть первую строку
    }
    for (int i = 1; i <= k; i++){
        printf("%2d ", i);
        count++;
        if(count > 7){ //При достижении 7 дней преходим на следующую строку
            printf("\n");
            count = 1;
        }
    }
    printf("\n");
}