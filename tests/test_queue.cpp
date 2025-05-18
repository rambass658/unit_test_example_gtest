#include <gtest/gtest.h>
#include "queue.h"

TEST(QueueTest, PushPop) {
    Queue<int> q;
    EXPECT_TRUE(q.empty());
    q.push(10);
    EXPECT_FALSE(q.empty());
    EXPECT_EQ(q.size(), 1u);
    EXPECT_EQ(q.front(), 10);
    q.pop();
    EXPECT_TRUE(q.empty());
    EXPECT_EQ(q.size(), 0u);
}

TEST(QueueTest, MultiplePushPop) {
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    EXPECT_EQ(q.size(), 3u);
    EXPECT_EQ(q.front(), 1);
    q.pop();
    EXPECT_EQ(q.front(), 2);
    q.pop();
    EXPECT_EQ(q.front(), 3);
    q.pop();
    EXPECT_TRUE(q.empty());
}