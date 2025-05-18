#include <gtest/gtest.h>
#include "binary_tree.h"

TEST(BinaryTreeTest, InsertSearch) {
    BinaryTree<int> t;
    EXPECT_FALSE(t.search(42));
    t.push(42);
    EXPECT_TRUE(t.search(42));
}

TEST(BinaryTreeTest, InsertRemoveSearch) {
    BinaryTree<int> t;
    t.push(10);
    t.push(20);
    t.push(30);
    EXPECT_TRUE(t.search(20));
    t.pop(20);
    EXPECT_FALSE(t.search(20));
    EXPECT_TRUE(t.search(10));
    EXPECT_TRUE(t.search(30));
}