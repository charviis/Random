#include <stdio.h>
#include <string.h>

typedef struct phoneRecords {
    char znacka[20];
    char model[60];
    int cpu;
    int pamet;
} 
Phone;

int main() {
    Mobil p[10];

    strcpy(p[0].znacka, "Samsung");
    strcpy(p[0].model, "A40");
    x[0].cpu = 8; 
    x[0].pamet = 64GB;

    printf("znacka: %d\n", x(0).znacka);
    printf("model: %d\n", x(0).model);
    printf("cpu: %d\n", x(0).cpu);
    printf("pamet: %d gb \n", x(0).pamet);
}
