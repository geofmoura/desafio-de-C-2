#include <stdio.h>

void Cripto(char s[]);
void Decripto(char s[]);

int main() {
    char str[100];

    printf("Digite uma string para criptografar: ");
    scanf("%s", str);

    Cripto(str);
    printf("String criptografada: %s\n", str);

    Decripto(str);
    printf("String decriptografada: %s\n", str);

    return 0;
}

void Cripto(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] >= 'A' && s[i] <= 'Z') {

            s[i] = (s[i] == 'Z') ? 'A' : s[i] + 1;

        } else if (s[i] >= '0' && s[i] <= '9') {

            s[i] = (s[i] == '9') ? '0' : s[i] + 1;
        }
    }
}

void Decripto(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] >= 'A' && s[i] <= 'Z') {

            s[i] = (s[i] == 'A') ? 'Z' : s[i] - 1;

        } else if (s[i] >= '0' && s[i] <= '9') {

            s[i] = (s[i] == '0') ? '9' : s[i] - 1;
        }
    }
}