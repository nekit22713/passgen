#include <lib/Generate.h>

void generate(option *P){
    char alf[MAX_LEN] = "abcdefghijklmnopqrstuvwxyz";
    char numeric[MAX_LEN] = "0123456789";
    char up_alf[MAX_LEN] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char special[MAX_LEN] = "!@#$&*?";
    char all_alf[MAX_LEN*4] = "";

    if(P->only_num == 0){
        strcat(all_alf, alf);
        if(P->no_num != 1) strcat(all_alf, numeric);
        if(P->no_cap != 1) strcat(all_alf, up_alf);
        if(P->spec == 1) strcat(all_alf, special);
    }
    else{
        strcat(all_alf, numeric);
        P->no_cap = 1;
    }

    if(P->help == 1){
        print_help();
        return ;
    }
    if(P->full_r == 1){
        int i, dec = 4;
        if(P->one_line == 1) dec = 1;
        
        for(i = 0; i < P->num_pw; i++){
            full_random(all_alf, &P->pw_len);
            dec--;
            if(dec == 0){ 
                printf("\n");
                if(P->one_line == 1) dec = 1;
                else dec = 4;
            }
            else printf(" ");
        }
    }
    else{
        int i, dec = 4;
        if(P->one_line == 1) dec = 1;

        if(P->only_num == 0) strcat(all_alf, "aeiouyaeiouyaeiouyaeiouyaeiouy");    
        if(P->no_cap != 1) strcat(all_alf, "AEIOUYAEIOUYAEIOUYAEIOUYAEIOUY");

        for(i = 0; i < P->num_pw; i++){
            no_random(all_alf, &P->pw_len);
            dec--;
            if(dec == 0){ 
                printf("\n");
                if(P->one_line == 1) dec = 1;
                else dec = 4;
            }
            else printf(" ");
        }
    }
}