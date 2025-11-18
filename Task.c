#include <stdio.h>
#include <locale.h>

#define n 10

int main() {
    setlocale(LC_CTYPE, "RUS");

    int A, sum = 0;
    int arr[n];

    printf("Введите %d целых чисел (положительных и отрицательных):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Введите число A: ");
    scanf("%d", &A);

    for (int i = 0; i < n; i++) {
        if (arr[i] == A) {
            sum += i;
        }
    }

    printf("Сумма индексов элементов, равных %d: %d\n", A, sum);
    return 0;
}