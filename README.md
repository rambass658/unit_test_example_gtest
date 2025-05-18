# Unit Test Example with GoogleTest

## Описание

В этом проекте представлены интерфейсы и примеры юнит-тестов на GoogleTest для следующих классов:

- **Очередь (`Queue`)** — методы `push`, `pop`, `front`, `empty`, `size`
- **Куча (`Heap`)** — методы `push`, `pop`, `top`, `empty`, `size`
- **Бинарное дерево (`BinaryTree`)** — методы `push`, `pop`, `search`

Реализации методов нет, только интерфейсы и тесты.

---

## Как собрать и запустить (Windows/MSVC, Linux, macOS)

### 1. Убедитесь, что установлены:
- [CMake 3.14+](https://cmake.org/)
- Компилятор C++ с поддержкой C++17 (MSVC, GCC, Clang)

### 2. Сборка
Откройте терминал/командную строку в папке проекта и выполните:

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

> **GoogleTest скачивается и собирается автоматически, ничего вручную ставить не нужно.**

### 3. Запуск тестов

- **Linux/macOS:**
    ```
    ./runTests
    ```
- **Windows:**
    ```
    runTests.exe
    ```

---

## Структура проекта

```
/
├── CMakeLists.txt
├── README.md
├── include/
│   ├── queue.h
│   ├── heap.h
│   └── binary_tree.h
└── tests/
    ├── test_queue.cpp
    ├── test_heap.cpp
    └── test_binary_tree.cpp
```

---

## Примечания

- Если меняете настройки сборки (например, Release/Debug), полностью пересоберите проект (`cmake --build . --clean-first` или удалите папку build).
- Проект протестирован и работает на Windows (MSVC), Linux и macOS.
