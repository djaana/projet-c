#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void flush_stdin() {
    int c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

int ask_for_int(char* prompt) {
    int result = 0;
    int input = 0;

    while (result <= 0) {
        printf("%s", prompt);
        result = scanf("%d", &input);
        
        flush_stdin();
    }

    return input;
}

int main() {
    int a = ask_for_int("Entrez un nombre: ");
    printf("Le nombre: %d\n", a);

    return EXIT_SUCCESS;
}