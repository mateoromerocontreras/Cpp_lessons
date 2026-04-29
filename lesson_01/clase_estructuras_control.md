# Lección: Estructuras de Control en C++

**Fecha:** 20 de marzo de 2026  
**Nivel:** Repaso + Introducción  
**Metodología:** I do, We do, You do

---

## Objetivos de aprendizaje

Al final de esta clase, el estudiante podrá:

- Usar `if`, `else if` y `else` para tomar decisiones.
- Implementar repeticiones con `for`, `while` y `do-while`.
- Aplicar buenas prácticas de legibilidad y seguridad básica en bucles.
- Manejar correctamente divisiones con decimales evitando división entera no deseada.

---

## Buenas prácticas (aplican a toda la clase)

1. **Siempre usar llaves** `{}` en condicionales y bucles.
2. **Indentación consistente** (4 espacios).
3. **Variables con nombres claros** (`promedio`, `saldo`, `opcion`).
4. **Evitar bucles infinitos** actualizando la variable de control.
5. **Cuidar tipos en división**: usar `double` o conversiones (`static_cast<double>`).

---

## I do (explicación + ejemplos)

### 1) `if`, `else if`, `else`
Permiten ejecutar caminos distintos según una condición.

Archivo de ejemplo: `i_do_if_else.cpp`

### 2) `for`
Se usa cuando sabes cuántas iteraciones necesitas.

Archivo de ejemplo: `i_do_for.cpp`

### 3) `while`
Se usa cuando la repetición depende de una condición que puede cambiar en tiempo de ejecución.

Archivo de ejemplo: `i_do_while.cpp`

### 4) `do-while`
Ejecuta al menos una vez y luego valida condición. Muy útil para validar entradas.

Archivo de ejemplo: `i_do_do_while.cpp`

---

## We do (resolución guiada)

### Problema 1: Cajero con validación y promedio
**Enunciado:**
- Leer saldo inicial.
- Pedir 3 retiros.
- Aprobar solo si `monto > 0` y `monto <= saldo`.
- Mostrar saldo final, retiros válidos y promedio.

**Lógica sugerida (pseudocódigo):**
1. Leer `saldo`.
2. Inicializar `sumaRetiros = 0.0`, `retirosValidos = 0`.
3. Repetir 3 veces (`for`):
   - Leer `monto`.
   - Si es válido: descontar, acumular y contar.
   - Si no: rechazar.
4. Calcular promedio si hay retiros válidos.
5. Mostrar resultados.

Archivo resuelto: `we_do_problema1.cpp`

### Problema 2: Menú con suma/división y validación
**Enunciado:**
- Menú con opciones: sumar, dividir, salir.
- Repetir hasta elegir salir.
- En división, validar divisor distinto de cero.

**Lógica sugerida (pseudocódigo):**
1. `opcion = 0`.
2. `do-while` hasta `opcion == 3`.
3. Si 1: sumar.
4. Si 2: dividir con `double` y validar `b != 0`.
5. Si inválida: avisar.

Archivo resuelto: `we_do_problema2.cpp`

---

## You do (práctica independiente)

Archivo base: `you_do_ejercicios.cpp`

### Ejercicio 1 (if/else)
Clasifica edad:
- `< 18`: Menor de edad
- `18 - 64`: Adulto
- `>= 65`: Adulto mayor

### Ejercicio 2 (for + if)
Pedir `N`, imprimir todos los pares entre `1` y `N` y contar cuántos hay.

### Ejercicio 3 (do-while)
Pedir una calificación entre `0` y `100`, repetir hasta que sea válida y luego mostrar aprobado/reprobado.

---

## Compilación y ejecución (Linux)

Ejemplo:

```bash
g++ -std=c++17 i_do_if_else.cpp -o i_do_if_else
./i_do_if_else
```

Puedes compilar cualquier archivo `.cpp` cambiando el nombre.

---

## Nota técnica sobre división

Si se espera resultado decimal, evita expresiones como:

```cpp
int a = 5, b = 2;
cout << a / b; // imprime 2 (división entera)
```

Usa:

```cpp
double resultado = static_cast<double>(a) / b; // 2.5
```
