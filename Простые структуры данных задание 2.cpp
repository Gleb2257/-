#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int a[10];      
    int n = 10;     // количество элементов массива
    int i = 0;

    // Создание генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными числами
    while (i < n)
    {
        a[i] = rand() % 100;  // присваиваем каждому элементу случайное число от 0 до 99
        i++;
    }

    // Вывод массива на экран
    i = 0;
    while (i < n)
    {
        printf("%d ", a[i]);
        i++;
    }

    printf("\n");

    return 0;
}
