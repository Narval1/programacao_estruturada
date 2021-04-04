#include <stdio.h>
#include <stdlib.h>

void func(char *str, char letter) {
    for (int i = 0; i < 5; i++) *(str + i) = letter;
    for (int i = 0; i < 5; i++) printf("%c", *(str + i));

}

void main() {
    int size = 5;
    char str[size], *pointer = str, letter;

    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) scanf(" %c", pointer + i);
    scanf(" %c", &letter);
    func(pointer, letter);
}