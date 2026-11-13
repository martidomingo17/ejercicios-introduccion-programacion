# Respuestas y ejemplos

## 3.11

Muestra diez líneas, alternando cuatro asteriscos y ocho signos de suma:

```text
****
++++++++
****
++++++++
****
++++++++
****
++++++++
****
++++++++
```

El contador empieza en 1. Si es impar imprime los asteriscos; si es par, los signos de suma.

## 3.12

Muestra diez filas de diez signos. La primera es de `>` porque `row` empieza en 10, un número par:

```text
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
```

## 3.25

**a)** Se multiplica el resultado por los enteros desde 2 hasta n. El resultado se guarda cifra a cifra para evitar el desbordamiento de un entero normal. Para `n = 5`, devuelve `120`. Para `n = 0` y `n = 1`, devuelve `1`.

**b)** Se suman los términos de la serie. Cada término se obtiene dividiendo el anterior por el nuevo índice. Con 20 términos, el resultado mostrado es aproximadamente `2.71828182845905`.

**c)** Cada término se obtiene multiplicando el anterior por `x/i`. Con `x = 2` y 30 términos, el resultado es aproximadamente `7.38905609893065`.

## 3.26

Para cifrar, se suma 7 a cada cifra y se calcula el resto módulo 10. Después se cambian las posiciones 1 y 3, y las posiciones 2 y 4.

```text
1234 -> 8901 -> 0189
```

Para descifrar, se deshace el intercambio y se suma 3 módulo 10 a cada cifra. Sumar 3 deshace la suma de 7 porque `7 + 3 = 10`.

```text
0189 -> 1234
3333 -> 0000 -> 3333
```

## 4.6

El programa dibuja un rectángulo de diez filas y cinco columnas de arrobas:

```text
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
```

El bucle exterior controla las filas y el interior imprime las cinco arrobas de cada fila.

## 4.8

```text
1 × 3 × 5 × 7 × 9 × 11 × 13 × 15 = 2027025
```

## 4.15

Se suman los términos alternando el signo y aumentando el denominador de dos en dos.

| Término | Aproximación |
| --- | --- |
| 1 | 4.00000000 |
| 2 | 2.66666667 |
| 3 | 3.46666667 |
| 4 | 2.89523810 |
| 5 | 3.33968254 |
| 136121 | 3.141599999994829… |
| 200000 | 3.14158765 |

Se necesitan **136121 términos** para obtener por primera vez un valor que empiece por `3.14159`.

Se comprueba que el valor esté en el intervalo `3.14159 <= pi < 3.14160`. No se utiliza el redondeo a cinco decimales: en ese primer término, el valor redondeado a ocho decimales aparece como `3.14160000`, aunque su expansión decimal empieza por `3.14159`.

## 5.1

| Apartado | Expresión | Valor de x |
| --- | --- | --- |
| a | `fabs(7.5)` | 7.5 |
| b | `floor(7.5)` | 7 |
| c | `fabs(0.0)` | 0 |
| d | `ceil(0.0)` | 0 |
| e | `fabs(-6.4)` | 6.4 |
| f | `ceil(-6.4)` | -6 |
| g | `ceil(-fabs(-8 + floor(-5.5)))` | -14 |

En g: `floor(-5.5) = -6`; después, `-8 + (-6) = -14`; `fabs(-14) = 14`; y `ceil(-14) = -14`.

## 5.2

La función `calculateCharges` aplica 20 dólares hasta tres horas. Para el tiempo adicional utiliza `ceil`, para cobrar también las fracciones de hora. El importe se limita a 50 dólares.

Ejemplo del enunciado:

| Coche | Horas | Importe ($) |
| --- | --- | --- |
| 1 | 1.50 | 20.00 |
| 2 | 4.00 | 25.00 |
| 3 | 24.00 | 50.00 |
| TOTAL | 29.50 | 95.00 |

Con `3.01` horas se cobran `25.00` dólares; con `4.01`, se cobran `30.00`.

## 5.6

Las instrucciones que asignan cada intervalo a `n` son:

```cpp
n = 1 + rand() % 2;       // a) 1 a 2
n = 1 + rand() % 100;     // b) 1 a 100
n = rand() % 10;          // c) 0 a 9
n = 1000 + rand() % 113;  // d) 1000 a 1112
n = -1 + rand() % 3;      // e) -1 a 1
n = -3 + rand() % 15;     // f) -3 a 11
```

El tamaño de cada intervalo es `máximo - mínimo + 1`. La semilla se inicializa una sola vez al principio del programa.

## 5.18

La función extrae la última cifra con `% 10`, la añade al resultado y elimina esa cifra mediante `/ 10`.

```text
7631 -> 1367
1200 -> 21
-7631 -> -1367
0 -> 0
```

Los ceros que quedan a la izquierda desaparecen porque el resultado es un número entero.

## 5.21

La función `flip()` devuelve 0 o 1. El programa imprime `Tails` para 0 y `Heads` para 1, repite 100 lanzamientos y muestra los dos contadores.

La suma de caras y cruces debe ser 100. No tienen por qué salir exactamente 50 de cada una.

## 5.26

La función recursiva mueve primero los `n - 1` discos superiores a la varilla auxiliar, luego el disco mayor al destino y finalmente los `n - 1` discos al destino.

Con tres discos:

```text
1 -> 3
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
```

El caso base es un solo disco, que se mueve directamente. Para tres discos se realizan `2^3 - 1 = 7` movimientos.
