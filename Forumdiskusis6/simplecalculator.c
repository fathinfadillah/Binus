#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Pilih operasi:\n");
    printf("1. Penambahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");
    
    printf("Masukkan nomor operasi: ");
    scanf(" %c", &operator);

    printf("Masukkan bilangan pertama: ");
    scanf("%lf", &num1);
    
    printf("Masukkan bilangan kedua: ");
    scanf("%lf", &num2);
    
    switch (operator) {
        case '1':
            result = num1 + num2;
            break;
        case '2':
            result = num1 - num2;
            break;
        case '3':
            result = num1 * num2;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Input tidak valid.\n");
            return 1;
    }

    printf("Hasil: %.2lf\n", result);

    return 0;
}

