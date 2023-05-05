#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) { //Ввод элементов массива и подсчёт положительных чисел
        scanf("%d", &arr[i]);
        if (arr[i] > 0) { //Если элемент i массива больше нуля, увеличиваю счётчик положительных чисел на единицу
            count++;
        }
    }
    printf("%d", count);
    return 0;
}