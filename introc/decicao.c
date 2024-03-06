#include <stdio.h>

#define TEMP_BAIXA 1
#define TEMP_MEDIA 36
#define TEMP_ALTA 184

int main() {
    int temp;
    scanf("%d", &temp);
    switch(temp){
        case 1 ... 35:
            printf("Frio\n");
            break;
        case 36 ... 183:
            printf("Moderado\n");
            break;
        case 184 ... 1000:
            printf("Quente\n");
            break;
        default:
            printf("Muito quente\n");
            break;
    }
}
// refaca usando switch case




