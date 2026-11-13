# Ejercicios de Introducción a la Programación

Soluciones en C++. Cada archivo `.cpp` es un programa independiente y tiene su propio `main`.

| Ejercicio | Archivo | Contenido |
| --- | --- | --- |
| 3.11 | [ejercicio_3_11.cpp](ejercicio_3_11.cpp) | Alternancia de símbolos |
| 3.12 | [ejercicio_3_12.cpp](ejercicio_3_12.cpp) | Filas de signos |
| 3.25 a | [ejercicio_3_25_a.cpp](ejercicio_3_25_a.cpp) | Factorial |
| 3.25 b | [ejercicio_3_25_b.cpp](ejercicio_3_25_b.cpp) | Aproximación de e |
| 3.25 c | [ejercicio_3_25_c.cpp](ejercicio_3_25_c.cpp) | Aproximación de e^x |
| 3.26 | [ejercicio_3_26_cifrar.cpp](ejercicio_3_26_cifrar.cpp) | Cifrado |
| 3.26 | [ejercicio_3_26_descifrar.cpp](ejercicio_3_26_descifrar.cpp) | Descifrado |
| 4.6 | [ejercicio_4_6.cpp](ejercicio_4_6.cpp) | Rectángulo de arrobas |
| 4.8 | [ejercicio_4_8.cpp](ejercicio_4_8.cpp) | Producto de impares |
| 4.15 | [ejercicio_4_15.cpp](ejercicio_4_15.cpp) | Aproximaciones de pi |
| 5.1 | [ejercicio_5_1.cpp](ejercicio_5_1.cpp) | Evaluación de expresiones |
| 5.2 | [ejercicio_5_2.cpp](ejercicio_5_2.cpp) | Tarifas de aparcamiento |
| 5.6 | [ejercicio_5_6.cpp](ejercicio_5_6.cpp) | Números aleatorios |
| 5.18 | [ejercicio_5_18.cpp](ejercicio_5_18.cpp) | Inversión de cifras |
| 5.21 | [ejercicio_5_21.cpp](ejercicio_5_21.cpp) | Lanzamientos de moneda |
| 5.26 | [ejercicio_5_26.cpp](ejercicio_5_26.cpp) | Torres de Hanói |

Las respuestas escritas y los ejemplos están en [RESPUESTAS.md](RESPUESTAS.md).

## Compilación

Con un compilador compatible con C++17, compilar **un archivo cada vez**:

```bash
g++ -std=c++17 -Wall -Wextra ejercicio_4_8.cpp -o ejercicio
```

Ejecutar en Linux o macOS:

```bash
./ejercicio
```

En Windows con g++, se puede usar `-o ejercicio.exe` y ejecutar `./ejercicio.exe` desde PowerShell. En un entorno de desarrollo, abrir un proyecto separado por ejercicio o dejar activo un solo archivo con `main`.

## Notas

- El factorial usa un vector de cifras decimales para poder calcular resultados que superen los tipos enteros habituales, sin instalar Boost. Todos sus bucles son `while`, como pide el enunciado.
- En las dos series del 3.25, el número de términos incluye el `1` inicial. Por ejemplo, tres términos para e son `1 + 1/1! + 1/2!`.
- Las series usan precisión finita: añadir términos no garantiza mejorar el resultado indefinidamente. La aproximación de e^x puede perder precisión para valores negativos de gran magnitud.
- El programa de pi imprime las 200000 filas solicitadas. Se puede guardar la salida con `./ejercicio > tabla_pi.txt`.
- El código cifrado conserva cuatro posiciones, incluidos los ceros iniciales.
- Hanói imprime `2^n - 1` movimientos; conviene probarlo con pocos discos.
