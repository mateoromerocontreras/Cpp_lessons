# Compilar y ejecutar C++ desde consola (Windows y Linux)

## Linux (g++)

### 1) Compilar
```bash
g++ -std=c++17 -Wall -Wextra -O2 main.cpp -o programa
```

### 2) Ejecutar
```bash
./programa
```

## Windows

### Opcion A: MinGW / MSYS2 (g++)

#### 1) Compilar
```powershell
g++ -std=c++17 -Wall -Wextra -O2 main.cpp -o programa.exe
```

#### 2) Ejecutar
```powershell
.\programa.exe
```

### Opcion B: Visual Studio Build Tools (MSVC - `cl`)

> Abre la terminal **Developer Command Prompt for VS**.

#### 1) Compilar
```cmd
cl /EHsc /W4 /std:c++17 main.cpp
```

#### 2) Ejecutar
```cmd
main.exe
```

## Nota rapida

- Reemplaza `main.cpp` por el nombre de tu archivo fuente.
- Si tu programa usa varios archivos `.cpp`, agrega todos en el comando de compilacion.
  - Ejemplo Linux/MinGW: `g++ main.cpp util.cpp -o programa`
