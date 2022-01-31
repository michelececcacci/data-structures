#include <gtest/gtest.h>
#include "myvector.h"

// Demonstrate some basic assertions.
TEST(LenTest, BasicAssertions) {
    MyVector arr;
    ASSERT_EQ(arr.length(), 0);
    arr.append(1);
    ASSERT_EQ(arr.length(), 1);

    arr.append(1);
    ASSERT_EQ(arr.length(), 2);

}

TEST(IsEmptyTest, BasicAssertions){
    MyVector arr;
    ASSERT_EQ(arr.is_empty(), 1);
    arr.append(1);
    ASSERT_EQ(arr.is_empty(), 0);
}

TEST(AppendTest, BasicAssertions){
    MyVector arr;
    arr.append(1);
    ASSERT_EQ(arr[0], 1);
}

TEST(FindTest, BasicAssertion){
    MyVector arr;
    arr.append(2);
    arr.append(3);
    arr.append(-2);
    arr.append(4);
    ASSERT_EQ(arr.find(-2), 2);
    ASSERT_EQ(arr.find(34), -1);
}

TEST(InsertTest, BasicAssertion){
    MyVector arr;
    arr.append(2);
    arr.append(3);
    arr.append(-2);
    arr.insert(1, 10);
    ASSERT_EQ(arr.length(), 4);
    ASSERT_EQ(arr[0], 2);
    ASSERT_EQ(arr[1], 10);
    ASSERT_EQ(arr[2], 3);
    ASSERT_EQ(arr[3], -2);
}


TEST(DeleteTest, BasicAssertion){
    MyVector arr;
    arr.append(3);
    arr.append(4);
    arr.append(5);
    arr.delete_idx(1);
    ASSERT_EQ(arr[0], 3);
    ASSERT_EQ(arr[1], 5);
    ASSERT_EQ(arr.length(), 2);
} 
