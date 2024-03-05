#include <stdio.h>

int main() {
    int num = 0, num2 = 0, num3 = 0;
    printf("Digite 3 números inteiros:\n");
    scanf("%i%i%i", &num, &num2, &num3);

    if (num == num2 && num2 == num3) {
        printf("1, todos números são iguais");
    }
    else if (num != num2 && num2 != num3) {
        printf("2, todos números são diferentes");
    }
    else if (num == num2 || num == num3 || num2 == num3){
        printf("3, apenas dois números são iguais");
    }

    return 0;
}
