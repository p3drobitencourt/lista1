#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1001];
    gets(mensagem); // L� a mensagem da entrada padr�o

    int comprimento = strlen(mensagem), i;

    for (i = 0; i < comprimento; i++) {
        if (mensagem[i] == 'p' || mensagem[i] == 'P') {
            i++;
        }
        printf("%c", mensagem[i]);
    }

    return 0;
}

