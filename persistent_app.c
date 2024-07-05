#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    bool running = true;
    FILE *fptr;
    char input[40];
    if (access("persistent_app_data.dt", F_OK) == 0) {
        printf("Loading data...\n");
    } else {
        printf("Creating reminders data...\n");
        fptr = fopen("persistent_app_data.dt", "w");
    }
    while(running==true){
        fputs("Would you like to create a new reminder? (y/n)", stdout);
        fflush(stdout);
        fgets(input, sizeof(input), stdin);
        if(strcmp(input,"q")==0){
            break;
        }
        if(strcmp(input,"y")==0){
            fptr = fopen("persistent_app_data.dt", "a");
        }
    }
    printf("Shutting down.\n");
    return 0;
}
