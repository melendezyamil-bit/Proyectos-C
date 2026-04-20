#include <stdio.h>
#include <string.h>

void cifrarMensaje(char mensaje[], int desplazamiento);

int main() {
    char mensaje[100];
    int desplazamiento;

    printf("--- Cifrador de Mensajes Basico ---\n");
    printf("Ingresa el mensaje a cifrar (sin espacios para esta version): ");
    scanf("%s", mensaje);

    printf("Ingresa el numero de desplazamiento (ej. 3): ");
    scanf("%d", &desplazamiento);

    cifrarMensaje(mensaje, desplazamiento);

    printf("\nMensaje cifrado: %s\n", mensaje);
    
    return 0;
}

// Función para cifrar el texto
void cifrarMensaje(char mensaje[], int desplazamiento) {
    int i;
    // Recorremos cada caracter del mensaje
    for(i = 0; i < strlen(mensaje); ++i) {
        char letra = mensaje[i];
        
        // Si es una letra minúscula
        if(letra >= 'a' && letra <= 'z') {
            letra = letra + desplazamiento;
            if(letra > 'z') {
                letra = letra - 'z' + 'a' - 1;
            }
            mensaje[i] = letra;
        }
        // Si es una letra mayúscula
        else if(letra >= 'A' && letra <= 'Z') {
            letra = letra + desplazamiento;
            if(letra > 'Z') {
                letra = letra - 'Z' + 'A' - 1;
            }
            mensaje[i] = letra;
        }
    }
}
