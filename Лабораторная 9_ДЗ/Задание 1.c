#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "rus");

    long long n;
    int m;

    printf("введите 15-значное число: ");
    scanf("%lld", &n);

    printf("введите количество первых цифр для суммы (m): ");
    scanf("%d", &m);

    long long temp = n;

    // отрезаем последние цифры, чтобы остались только первые m
    for (int i = 0; i < 15 - m; i++)
    {
        temp = temp / 10;
    }

    int sum = 0;

    // суммируем оставшиеся цифры
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    printf("сумма первых %d цифр равна: %d\n", m, sum);

    system("pause");
    return 0;
}