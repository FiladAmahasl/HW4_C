#include <stdio.h>

int main(){
    int number;
    int binary [32];
    int i = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number < 0){ //Проверяю, отрицательно ли число, если да то заканчиваю программу
        printf("A negative number has been entered\n");
        return 0;
    }


    while (number > 0){
        binary[i] = number % 2; //Вычисляю двоичный вид числа, разделяя его на два и сохраняя остаток от деления на два в массив binary
        number = number / 2; //Делю результат на 2 и повторяю пока число не будет = 0
        i++;
    }

    printf("Binary form: ");
    if(i == 0){
        printf("0");
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}