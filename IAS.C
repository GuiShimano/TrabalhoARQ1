#include <stdio.h>

unsigned long long int memoria[1000];

// Implementei errado :(

int ler_arquivo(FILE *arquivo){

    char linha[40];
    unsigned long long int numero;

    fgets(linha, sizeof(linha), arquivo);
    sscanf(linha, "%llu", &numero);

    return numero;
}

int main(){
    char *nome_arq = "instrucoes";
    unsigned long long int numero;

    FILE *arq = fopen(nome_arq, "r");
    
    for (int i = 0; i < 3; i++){
        numero = ler_arquivo(arq);
        memoria[i] = numero;
        printf("%llu\n", numero);
    }

    printf("\nMemória\n%llu\n%llu\n%llu\n%llu\n", memoria[0], memoria[1], memoria[2], memoria[3]);

    fclose(arq);
    return 0;
}
