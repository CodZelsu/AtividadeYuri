#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_ocorrencias(const char *texto, const char *termo) {
    int count = 0;
    const char *temp = texto;
    
    while ((temp = strstr(temp, termo)) != NULL) {
        count++;  
        temp++;   
    }
    
    return count; 
}


void to_lowercase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);  
        str++;
    }
}

void capturar_texto(char *texto, int tamanho) {
    printf("Digite o texto: ");
    fgets(texto, tamanho, stdin); 
    texto[strcspn(texto, "\n")] = 0; 
}

int main() {
    char texto[1000]; 
    char termo[] = "cara";  
    
    
    capturar_texto(texto, sizeof(texto));
    

    
    int ocorrencias = contar_ocorrencias(texto, termo);
    
    printf("O termo '%s' apareceu %d vezes no texto.\n", termo, ocorrencias);
    
    return 0;
}
