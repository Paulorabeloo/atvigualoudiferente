#include <stdio.h>

int main() {
    int num = 0, num2 = 0, num3 = 0;
    printf("Digite 3 n�meros inteiros:\n");
    scanf("%i%i%i", &num, &num2, &num3);

    if (num == num2 && num2 == num3) {
        printf("1, todos n�meros s�o iguais");
    }
    else if (num != num2 && num2 != num3) {
        printf("2, todos n�meros s�o diferentes");
    }
    else if (num == num2 || num == num3 || num2 == num3){
        printf("3, apenas dois n�meros s�o iguais");
    }

    return 0;
}
