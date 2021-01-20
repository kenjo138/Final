#include <stdio.h>

void main(){

    FILE *pRead;

    char fname[20];
    char lname[20];
    char id[15];
    float gpa;

    pRead = fopen("students.dat", "r");
    if (pRead == NULL){
        printf("File not open\n");
    }
    else{
        printf("\Name\t\tID\t\tGPA\n\n");
        fscanf(pRead,"%s%s%s%f", fname, lname, id, &gpa);

        printf("%s %s\t%s\t%.2f\n", fname, lname, id, gpa);
        fclose(pRead);
    }
}
