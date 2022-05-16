#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
#pragma once

typedef struct option{
    int no_num; // -0
    int one_line; // -1
    int no_cap; // -A
    int only_num; // -N
    int help; // -h
    int full_r; // -s
    int spec; // -y 
    int pw_len;
    int num_pw;
}option;

int get_option(option *P, int *argc, char **argv);
void init_option(option *P);