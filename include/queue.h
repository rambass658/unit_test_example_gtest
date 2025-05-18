#pragma once

template<typename T>
class Queue {
public:
    Queue() = default;
    ~Queue() = default;

    // Добавляет элемент в конец очереди
    void push(const T& value) {}

    // Удаляет элемент из начала очереди
    void pop() {}

    // Возвращает элемент из начала очереди
    T& front() { static T t{}; return t; }

    // Проверяет, пуста ли очередь
    bool empty() const { return true; }

    // Возвращает количество элементов
    size_t size() const { return 0; }
};