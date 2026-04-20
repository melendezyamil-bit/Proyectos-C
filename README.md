# 🔐 Cifrador César en C

Un proyecto clásico de introducción a la criptografía. Este programa en C implementa un cifrado por sustitución simple (conocido como Cifrado César) que desplaza los caracteres de un mensaje basándose en sus valores en la tabla ASCII para ocultar su contenido original.

Este proyecto forma parte de mis prácticas para fortalecer la lógica de programación y la gestión de memoria antes de adentrarme en conceptos más complejos de ciberseguridad.

## 🚀 Funcionalidades
* Cifra cadenas de texto procesando dinámicamente letras mayúsculas y minúsculas.
* Permite al usuario definir la llave criptográfica (el número exacto de posiciones de desplazamiento).
* Maneja el "desbordamiento" del alfabeto (si la letra pasa de la 'Z', regresa a la 'A').

## 🛠️ Tecnologías y Conceptos
* **Lenguaje:** C
* **Estructuras:** Arreglos de caracteres (Strings), Ciclos `for`, Estructuras de control `if/else`.
* **Entorno:** Visual Studio Code / Terminal de Windows.

## ⚙️ Cómo ejecutarlo

Si quieres clonar y compilar este código localmente, ejecuta los siguientes comandos en tu terminal:

1. Compila el archivo fuente:
   ```bash
   gcc cifrador.c -o cifrador
2. Ejecuta el programa binario:
   ```bash
   # En Windows:
   cifrador.exe

   # En Linux:
   ./cifrador
Nota del Autor: Desarrollado con fines educativos. Siempre validando entradas y aprendiendo a pensar como atacante y como defensor.
