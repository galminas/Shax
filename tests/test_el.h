#ifndef TEST_EL_H
#define TEST_EL_H
#include <gtest/gtest.h>

extern "C" {
#include "func.h"
}
TEST(moveElephant,t1){
    ASSERT_EQ(moveElephant(1,1,2,2),1);
     ASSERT_EQ(moveElephant(1,1,0,0),1);
     ASSERT_EQ(moveElephant(1,1,3,3),1);
         ASSERT_EQ(moveElephant(2,2,1,1),1);
          ASSERT_EQ(moveElephant(5,5,6,7),0);
          ASSERT_EQ(moveElephant(0,1,0,2),0);
     }

#endif // TEST_EL_H
