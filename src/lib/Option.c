#include <lib/Option.h>

int get_option(option *P, int *argc, char **argv){
    int first = 0;
    for(int i = 1; i < *argc; i++){
        if(strcmp(argv[i], "-0") == 0) P->no_num = 1;
        else if(strcmp(argv[i], "-1") == 0) P->one_line = 1;
        else if(strcmp(argv[i], "-A") == 0) P->no_cap = 1;
        else if(strcmp(argv[i], "-N") == 0) P->only_num = 1;
        else if(strcmp(argv[i], "-h") == 0) P->help = 1;
        else if(strcmp(argv[i], "-s") == 0) P->full_r = 1;
        else if(strcmp(argv[i], "-y") == 0) P->spec = 1;
        else if(atoi(argv[i]) > 0 && first == 0){
            first++;
            P->pw_len = atoi(argv[i]);
        }
        else if(atoi(argv[i]) > 0 && first == 1){
            first++;
            P->num_pw = atoi(argv[i]);
        }
        else return 1;
    }
    return 0;
}

void init_option(option *P){
    P->full_r = 0;
    P->help = 0;
    P->no_cap = 0;
    P->no_num = 0;
    P->one_line = 0;
    P->only_num = 0;
    P->spec = 0;
    P->pw_len = 12;
    P->num_pw = 20;
}