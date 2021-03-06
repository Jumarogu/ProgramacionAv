#include <stdio.h>

typedef struct s {
    char firstName[20];
    char lastName[20];
    short ID;
    char semester[3];
    char free;
} Student;

int main() {
    char *dbName = "student.dat";
    Student pAvanzada[10];

    for(int i = 0; i < 10; i++) {
        sprintf(pAvanzada[i].firstName, "name%i", i);
        sprintf(pAvanzada[i].lastName, "lastname%i", i);
        pAvanzada[i].ID = i;
        sprintf(pAvanzada[i].semester, "S%i", 8);
        pAvanzada[i].free = 0;
    }
    FILE *data = fopen(dbName, "wb");
    fwrite(pAvanzada, sizeof(Student), 10, data);
    fclose(data);
    return 0;
}