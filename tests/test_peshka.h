#ifndef TEST_PESHKA_H
#define TEST_PESHKA_H
#include <gtest/gtest.h>

extern "C" {
#include "func.h"
}
TEST(movePeshka,t1){
    int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                       {-6, -6, -6, -6, -6, -6, -6, -6},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 6,  6,  6,  6,  6,  6,  6,  6},
                       { 4,  1,  2,  5,  3,  2,  1,  4}};
            ASSERT_EQ(movePeshka(0,1,0,3,board),1);
}

TEST(movePeshka,t2){
    int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                       {-6, -6, -6, -6, -6, -6, -6, -6},
                       { 0,  0,  1,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 6,  6,  6,  6,  6,  6,  6,  6},
                       { 4,  1,  2,  5,  3,  2,  1,  4}};
            ASSERT_EQ(movePeshka(1,1,2,2,board),1);
}
TEST(movePeshka,t3){
    int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                       {-6, -6, -6, -6, -6, -6, -6, -6},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  1,  0,  0,  0,  0,  0},
                       { 6,  6,  6,  6,  6,  6,  6,  6},
                       { 4,  1,  2,  5,  3,  2,  1,  4}};
            ASSERT_EQ(movePeshka(2,6,2,5,board),0);
}
            TEST(movePeshka,t4){
                int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                                   {-6, -6, -6, -6, -6, -6, -6, -6},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 6,  6,  6,  6,  6,  6,  6,  6},
                                   { 4,  1,  2,  5,  3,  2,  1,  4}};
                        ASSERT_EQ(movePeshka(0,1,0,4,board),0);

}
            TEST(movePeshka,t5){
                int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                                   {-6, -6, -6, -6, -6, -6, -6, -6},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 0,  0,  0,  0,  0,  0,  0,  0},
                                   { 6,  6,  6,  6,  6,  6,  6,  6},
                                   { 4,  1,  2,  5,  3,  2,  1,  4}};
                        ASSERT_EQ(movePeshka(0,1,1,2,board),0);

}
#endif // TEST_PESHKA_H
