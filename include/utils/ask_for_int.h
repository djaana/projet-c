int ask_for_int(char* prompt) {
    int result = 0;
    int input = 0;

    while (result != 1) {
        printf("%s", prompt);
        result = scanf("%d", &input);

        if (result == EOF) return 0;

        flush_stdin();
    }

    return input;
}