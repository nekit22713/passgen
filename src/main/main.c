#include <lib/Generate.h>
#include <lib/Option.h>
#include "lib/Random.h"
#include <time.h>


int main(int argc, char **argv){
    srand(time(NULL));
    option *P = (option*)malloc(sizeof(option));
    init_option(P);
    if(get_option(P, &argc, argv) == 1){
        printf("Can't get options, please read help -h!");
        return 1;
    }

    // int pw_len = 12, num_pw = 20;
    // char s[100]; 
    generate(P);


    free(P);
    
}
