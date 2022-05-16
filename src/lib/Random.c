#include <lib/Random.h>

void full_random(char *alf, int *pw_len){
    int i;
    for(i = 0; i < *pw_len; i++){
        printf("%c", alf[rand()%strlen(alf)]);
    }
    // printf(" ", *pw_len)
}
void no_random(char *alf, int *pw_len){
    int i;
    char c, c0;
    for(i = 0; i < *pw_len; i++){
        c = alf[rand()%strlen(alf)];
        if(c0 == c) c = alf[rand()%strlen(alf)];
        printf("%c", c);
        c0 = c;
    }
    // printf(" ", *pw_len)
}