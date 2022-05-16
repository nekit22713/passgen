#include <lib/Help.h>

void print_help(){
    printf("\npwmake [ OPTION ] [ pw_len ] [ num_pw ]\n");
    printf("[pw_len] - length of generated passwords\n");
    printf("[num_pw] - number of generated passwords\n");
    printf("[OPTION] - Attributes\n");
    printf("\nOptions:\n");
    printf("-0, Does not include numbers in the generated passwords\n");
    printf("-1, Displays the generated passwords one per line\n");
    printf("-A, There are no capital letters in the generated passwords\n");
    printf("-N, Generates numeric passwords\n");
    printf("-h, help\n");
    printf("-s, Generates completely random passwords\n");
    printf("-y, Include at least one special character in the password.\n");
}