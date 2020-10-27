#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*writing to a file
    int n, i;
    FILE *fptr;
    fptr = fopen("program.txt", "w");

    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }
    for(i = 0; i < 3; i++){
        printf("Enter a value: ");
        scanf("%d", &n);
        fprintf(fptr, "%d. Value = %d\n", i+1, n);

    }

    fclose(fptr);*/

    //reading a file
    int n;
    FILE *fptr;


    if(fptr = fopen("program.txt", "r") == NULL){
        printf("Error! The file does not exist!");
        exit(1);
    }
    fscanf(fptr, "%d", &n);
    printf("Value of n = %d\n", n);
    fclose(fptr);
    return 0;



}

