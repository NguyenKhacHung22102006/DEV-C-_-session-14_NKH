#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, how are you?";
    char ch;
    printf("Nhap vào mot ky tu bat ky: ");
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ký t? '%c' xu?t hi?n %d l?n trong chu?i.\n", ch, count);
    return 0;
}

