#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cerraduraKleene(char *conjunto, int intervalos) {
	int i, j;
    printf("Cerradura de Kleene de %s para %d intervalos:\n", conjunto, intervalos);
  
    printf("vacio"); 
    for (i = 1; i <= intervalos; i++) {
        printf(", ");
        for (j = 0; j < i; j++) {
            printf("%c", conjunto[j % strlen(conjunto)]);
        }
    }
    printf("\n");
}

void cerraduraPositiva(char *conjunto, int intervalos) {
	int i, j;
    printf("Cerradura Positiva de %s para %d intervalos:\n", conjunto, intervalos);
    for (i = 1; i <= intervalos; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", conjunto[j % strlen(conjunto)]);
        }
        printf(",");
    }
    printf("\n");
}

int main() {
    int intervalos;
    
    printf("Introduce la cantidad de intervalos: \n");
    scanf("%d", &intervalos);
    
    char conjuntoA[] = "123"; 
    char conjuntoB[] = "abc"; 
    char conjuntoC[] = "1a2b"; 
    
    cerraduraKleene(conjuntoA, intervalos);
    cerraduraKleene(conjuntoB, intervalos);
    cerraduraKleene(conjuntoC, intervalos);
  
    cerraduraPositiva(conjuntoA, intervalos);
    cerraduraPositiva(conjuntoB, intervalos);
    cerraduraPositiva(conjuntoC, intervalos);

    return 0;
}
