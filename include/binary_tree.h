#pragma once

template<typename T>
class BinaryTree {
public:
    BinaryTree() = default;
    ~BinaryTree() = default;

    // Добавляет элемент в дерево
    void push(const T& value) {}

    // Удаляет элемент из дерева
    void pop(const T& value) {}

    // Ищет элемент в дереве
    bool search(const T& value) const { return false; }
};