
# Universidad Tecnológica Nacional  
## Facultad Regional Resistencia  
**Técnico Universitario en Programación**

---

### Funciones de Entrada/Salida en C

- `getchar`, `putchar`, `scanf`, `printf`, `gets`, `puts`

Estas funciones permiten la transferencia de información entre la computadora y los dispositivos de entrada/salida estándar (como teclado y monitor).

#### Ejemplo 1: `getchar` y `putchar`
```c
#include <stdio.h>
#include <conio.h>

int main() {
    char c;
    c = getchar();
    putchar(c);
    getch();
    return 0;
}
```

#### Ejemplo 2
```c
#include <stdio.h>
#include <conio.h>

int main() {
    char c;
    printf("Ingrese un caracter por teclado\n");
    c = getchar();
    printf("El caracter ingresado es:");
    putchar(c);
    return 0;
}
```

#### Ejemplo 3: `gets` y `puts`
```c
#include <stdio.h>
#include <conio.h>

int main() {
    char c[10];
    printf("Ingrese su nombre por teclado\n");
    gets(c);
    printf("El nombre ingresado es:");
    puts(c);
    return 0;
}
```

#### Ejemplo con formateadores
```c
#include <stdio.h>

int main() {
    char c;
    float x;
    int i;

    printf("Ingrese un caracter:");
    c = getchar();
    printf("Ingrese un valor flotante:");
    scanf("%f", &x);
    printf("Ingrese un valor entero:");
    scanf("%d", &i);
    printf("Mostrar los valores ingresados:\n");
    putchar(c);
    printf("%3d %7.4f", i, x);

    return 0;
}
```

---

### Sentencia IF

#### Tipos de estructura de control

- **Secuencia**
- **Selección** (`if`, `switch`)
- **Iteración** (`while`, `for`, `do-while`)

#### Ejemplo simple
```c
#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    printf("Ingrese un número entero por teclado: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d es POSITIVO", num);
    getch();
    return 0;
}
```

#### Ejemplo `if-else`
```c
if (condición)
    sentencia1;
else
    sentencia2;
```

```c
if (num > 0)
    printf("Positivo");
else
    printf("Negativo o cero");
```

#### Ejemplo con condiciones múltiples
```c
if (num >= 0 && num <= 10) {
    // Acción
} else {
    // Otra acción
}
```

#### Ejemplo anidado
```c
if (num > 0)
    printf("Positivo");
else if (num == 0)
    printf("Cero");
else
    printf("Negativo");
```

---

### Estructuras Repetitivas (Cíclicas)

- `while`
- `do-while`
- `for`

#### Ejemplo WHILE
```c
int cont = 0, acum = 0, a;
while (cont < 3) {
    printf("Ingrese un valor:");
    scanf("%d", &a);
    printf("Numero ingresado: %d\n", a);
    cont++;
    acum += a;
}
printf("El valor acumulado es: %d\n", acum);
```

#### Tablas de multiplicar
```c
int a, b = 1, c;
scanf("%d", &a);
while (b <= 10) {
    c = a * b;
    printf("%d x %d = %d\n", a, b, c);
    b++;
}
```

---

### Estructuras de Datos

#### Tipos primitivos

- Entero
- Real
- Booleano
- Carácter

#### Tipos compuestos

- Arreglos
- Strings
- Archivos
- Registros

#### Tipos dinámicos

- Listas
- Pilas (LIFO)
- Colas (FIFO)

#### Tipos no lineales

- Árboles
- Grafos

---

### Sentencia SWITCH
```c
switch (expresión) {
    case valor1:
        sentencias;
        break;
    case valor2:
        sentencias;
        break;
    ...
    default:
        sentencias;
}
```

#### Ejemplo
```c
int num;
scanf("%d", &num);

switch(num) {
    case 1: printf("Es un 1\n"); break;
    case 2: printf("Es un 2\n"); break;
    case 3: printf("Es un 3\n"); break;
    default: printf("No es ni 1, ni 2, ni 3\n"); break;
}
```

---

### Ejercicios

- Detectar errores en código.
- Comparar expresiones equivalentes.
- Validar condiciones para cálculos.
- Usar `while` para validaciones con contador.
- Contar pares ingresados.
- Repetir ejecución según desee el usuario.
- Implementar `switch` en menús.
- Crear estructuras de control anidadas.
