#include <string.h>

char* ask_for_string(char* prompt) {
    static char buffer[256];

    printf("%s", prompt);
    fgets(buffer, sizeof(buffer), stdin);

    buffer[strcspn(buffer, "\n")] = '\0';

    return buffer;
}