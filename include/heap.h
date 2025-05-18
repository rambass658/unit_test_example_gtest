#pragma once

template<typename T>
class Heap {
public:
    Heap() = default;
    ~Heap() = default;

    // Добавляет элемент в кучу
    void push(const T& value) {}

    // Удаляет корневой элемент из кучи
    void pop() {}

    // Возвращает корневой элемент
    T& top() { static T t{}; return t; }

    // Проверяет, пуста ли куча
    bool empty() const { return true; }

    // Возвращает количество элементов
    size_t size() const { return 0; }
};