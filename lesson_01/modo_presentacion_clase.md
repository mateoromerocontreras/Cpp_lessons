# Modo Presentación: Estructuras de Control en C++

**Clase:** Repaso e introducción (`if`, `else`, `for`, `while`, `do-while`)  
**Duración sugerida:** 60 minutos  
**Formato:** I do, We do, You do

---

## Bloque 0 — Apertura (5 min)

### Objetivo 
- Identificar cuándo usar cada estructura de control.
- Escribir código legible y seguro (llaves, indentación, validaciones).
- Evitar errores frecuentes: bucles infinitos y división entera no deseada.



### Preguntas
1. ¿Cuándo usarían un `if` en un programa real?
2. ¿Qué diferencia hay entre `while` y `do-while`?
3. ¿Qué pasa con `5 / 2` si ambos son `int`?

---

## Bloque 1 — I do: `if / else if / else` (8 min)

### Idea clave
- Toma de decisiones por condiciones.

### Archivo demo
- `i_do_if_else.cpp`

### Paso en vivo
1. Compilar: `g++ -std=c++17 i_do_if_else.cpp -o i_do_if_else`
2. Ejecutar: `./i_do_if_else`
3. Mostrar cómo se calcula `promedio` con `double`.

### Mini-check de comprensión
- Si `promedio = 6.9`, ¿qué bloque se ejecuta?
- ¿Por qué usamos `2.0` y no `2`?

---

## Bloque 2 — I do: `for` y `while` (10 min)

### Idea clave
- `for`: repeticiones con cantidad conocida.
- `while`: repeticiones según condición dinámica.

### Archivos demo
- `i_do_for.cpp`
- `i_do_while.cpp`

### Paso a paso
1. Ejecutar ambos ejemplos.
2. Señalar variable de control y actualización (`++i`, `++numero`).
3. Preguntar qué pasa si quitamos la actualización (bucle infinito).

### Pregunta
- ¿Cuál usarían para "imprimir del 1 al 100" y cuál para "leer hasta que el usuario escriba 0"?

---

## Bloque 3 — I do: `do-while` (7 min)

### Idea clave
- Se ejecuta al menos una vez.
- Ideal para validación de entrada.

### Archivo demo
- `i_do_do_while.cpp`

### Paso a paso
1. Ejecutar e ingresar valores inválidos varias veces.
2. Mostrar que el ciclo se repite hasta rango válido.

### Pregunta de participación
- ¿Por qué aquí conviene `do-while` en lugar de `while`?

---

## Bloque 4 — We do: Problema 1 (12 min)

### Problema
Cajero con 3 retiros, validación y promedio de retiros válidos.

### Archivo
- `we_do_problema1.cpp`

### Secuencia guiada
1. Leer enunciado.
2. Escribir pseudocódigo en pizarra (5 pasos).
3. Revisar condición de validez del retiro.
4. Revisar cálculo de promedio con protección si no hay retiros.

### Preguntas 
- ¿Qué condición evita saldo negativo?
- ¿Por qué inicializamos `promedio = 0.0`?

---

## Bloque 5 — We do: Problema 2 (10 min)

### Problema
Menú repetitivo (sumar/dividir/salir) con validación de divisor.

### Archivo
- `we_do_problema2.cpp`

### Secuencia guiada
1. Identificar estructura principal (`do-while`).
2. Navegar decisiones con `if / else if`.
3. Validar división entre cero.
4. Confirmar uso de `double` para resultado decimal.

### Preguntas durante la resolución
- ¿Qué condición cierra el menú?
- ¿Dónde está la protección de seguridad en la división?

---

## Bloque 6 — You do: práctica independiente (8 min)

### Archivo base
- `you_do_ejercicios.cpp`

### Instrucciones de aula
- Resolver ejercicios en orden.
- Probar con al menos 2 casos por ejercicio.
- Verificar formato de salida y casos límite.

### Checklist rápido (autoevaluación)
- [ ] Uso llaves en todas las estructuras.
- [ ] Variables con nombres claros.
- [ ] Ningún ciclo queda sin actualización.
- [ ] Si hay división, el resultado decimal es correcto.

---

## Cierre y evaluación rápida (5 min)

### Preguntas de salida
1. Una situación donde usarías `for`.
2. Una situación donde usarías `do-while`.
3. Un error que evitarás desde hoy en bucles o condicionales.

### Tarea opcional
- Convertir `you_do_ejercicios.cpp` en un programa con menú para ejecutar cada ejercicio.

---

## Comandos rápidos para demostración (chuleta)

```bash
# Compilar todos
for f in *.cpp; do g++ -std=c++17 "$f" -o "${f%.cpp}"; done

# Ejecutar demos I do
./i_do_if_else
./i_do_for
./i_do_while
./i_do_do_while

# Ejecutar problemas We do
./we_do_problema1
./we_do_problema2

# Ejecutar práctica
./you_do_ejercicios
```
