#ifndef TEST_KING_H
#define TEST_KING_H
#include <gtest/gtest.h>

extern "C" {
#include "func.h"
}
TEST(moveKing,t1){
    ASSERT_EQ(moveKing(2,2,2,3),1);
}
TEST(moveKing,t2){
    ASSERT_EQ(moveKing(3,5,3,7),0);
}
TEST(moveKing,t3){
    ASSERT_EQ(moveKing(3,3,4,3),1);
    ASSERT_EQ(moveKing(3,3,4,4),1);
    ASSERT_EQ(moveKing(3,3,3,4),1);
    ASSERT_EQ(moveKing(3,3,2,4),1);
    ASSERT_EQ(moveKing(3,3,2,3),1);
    ASSERT_EQ(moveKing(3,3,2,2),1);
    ASSERT_EQ(moveKing(3,3,3,2),1);
    ASSERT_EQ(moveKing(3,3,4,2),1);
}

#endif // TEST_KING_H
