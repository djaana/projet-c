#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

char* ask_for_string(char* prompt) {
    static char buffer[256];

    printf("%s", prompt);
    fgets(buffer, sizeof(buffer), stdin);

    buffer[strcspn(buffer, "\n")] = '\0';

    return buffer;
}

int main() {
    int menu = ask_for_int("1. Créer un SVG\n2. Modifier un SVG\n3. Supprimer un SVG\n4. Visualiser un SVG\n0. Quitter\n\n> ");
    switch (menu) {
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            char* path = ask_for_string("Entrez le chemin du SVG à supprimer : ");

            size_t len = strlen(path);
            FILE* file = fopen(path, "r");

            if (strcmp(path + len - 4, ".svg") != 0 || file == NULL) {
                printf("Fichier introuvable ou inaccessible.\n");
            } else {
                fclose(file);
                
                if (remove(path) == 0) {
                    printf("Fichier supprimé avec succès.\n");
                } else {
                    printf("Erreur lors de la suppression du fichier.\n");
                }
            }
            break;
        }
        case 4: {
            char* path = ask_for_string("Entrez le chemin du SVG à visualiser : ");

            size_t len = strlen(path);
            FILE* file = fopen(path, "r");

            if (strcmp(path + len - 4, ".svg") != 0 || file == NULL) {
                printf("Fichier introuvable ou inaccessible.\n");
            } else {
                fclose(file);
                char cmd[1024];

                #ifdef _WIN32
                    snprintf(cmd, sizeof(cmd), "cmd /c start \"\" \"%s\"", path);
                #elif __APPLE__
                    snprintf(cmd, sizeof(cmd), "open \"%s\"", path);
                #else
                    snprintf(cmd, sizeof(cmd), "xdg-open \"%s\"", path);
                #endif

                system(cmd);
            }
            break;
        }
        case 0: {
            return EXIT_SUCCESS;
        }
        default: {
            printf("Choix invalide.\n");
            break;
        }
    }

    return EXIT_SUCCESS;
}