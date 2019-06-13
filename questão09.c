#include<stdio.h>
#include<stdlib.h>

void endereco(int a) {
    char *temp;
    temp = &a;
    printf("%x \n", temp);
    binario(temp);
}

void binario(char temp[7]) {
    for (int i = 7; i >= 0; i--) {
        if (temp[i] == '0') {
            temp[i] = 0000;
        } else if (temp[i] == '1') {
            temp[i] = 0001;
        } else if (temp[i] == '2') {
            temp[i] = 0010;
        } else if (temp[i] == '3') {
            temp[i] = 0011;
        } else if (temp[i] == '4') {
            temp[i] = 0100;
        } else if (temp[i] == '5') {
            temp[i] = 0101;
        } else if (temp[i] == '6') {
            temp[i] = 0110;
        } else if (temp[i] == '7') {
            temp[i] = 0111;
        } else if (temp[i] == '8') {
            temp[i] = 1000;
        } else if (temp[i] == '9') {
            temp[i] = 1001;
        } else if ((temp[i] == 'A') || (temp[i] == 'a')) {
            temp[i] = 1010;
        } else if ((temp[i] == 'B') || (temp[i] == 'b')) {
            temp[i] = 1011;
        } else if ((temp[i] == 'C') || (temp[i] == 'c')) {
            temp[i] = 1100;
        } else if ((temp[i] == 'D') || (temp[i] == 'd')) {
            temp[i] = 1101;
        } else if ((temp[i] == 'E') || (temp[i] == 'e')) {
            temp[i] = 1110;
        } else if ((temp[i] == 'F') || (temp[i] == 'f')) {
            temp[i] = 1111;
        }
    }
    for (int i = 7; i >= 0; i--) {
        printf("%d", temp[i]);
    }

    return;
}

void main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    endereco(num);
}
