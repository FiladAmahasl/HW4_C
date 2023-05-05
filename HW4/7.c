#include <stdio.h>

int main(){
    int n;
    int pl_numbs = 0;
    int mn_numbs = 0;
    int zero = 0; 
    int numb;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &numb);
        if(numb == 0){ //Подсчитываю количество нулей
            zero++;
        }
        else if(numb > 0){ //Подсчитываю количество положительных чисел
            pl_numbs++;
        }
        else{
            mn_numbs++; //Подсчитываю количество отрицательных
        }
    }
    printf("%d %d %d", zero, pl_numbs, mn_numbs);
    return 0;
}