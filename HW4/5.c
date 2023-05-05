#include <stdio.h>

int main(){
    int numb;
    double sum = 0, allnumb = 0;
    scanf("%d", &numb);
    while (numb != 0) //Проверка пока значение переменной не равно 0
    {
        allnumb++;
        sum += numb;
        scanf("%d", &numb);
    }
    printf("%f", sum / allnumb);
    return 0;
}