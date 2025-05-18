#include <gtest/gtest.h>
#include "heap.h"

TEST(HeapTest, PushPop) {
    Heap<int> h;
    EXPECT_TRUE(h.empty());
    h.push(5);
    EXPECT_FALSE(h.empty());
    EXPECT_EQ(h.size(), 1u);
    EXPECT_EQ(h.top(), 5);
    h.pop();
    EXPECT_TRUE(h.empty());
    EXPECT_EQ(h.size(), 0u);
}

TEST(HeapTest, MultiplePushPop) {
    Heap<int> h;
    h.push(3);
    h.push(1);
    h.push(4);
    EXPECT_EQ(h.size(), 3u);
    h.pop();
    EXPECT_EQ(h.size(), 2u);
}