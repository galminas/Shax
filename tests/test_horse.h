#ifndef TEST_HORSE_H
#define TEST_HORSE_H
#include <gtest/gtest.h>

extern "C" {
#include "func.h"
}
TEST(moveHorse,t1){
    ASSERT_EQ(moveHorse(1,3,2,5),1);
     ASSERT_EQ(moveHorse(2,4,3,6),1);
     ASSERT_EQ(moveHorse(3,5,4,7),1);
         ASSERT_EQ(moveHorse(6,2,7,4),1);
          ASSERT_EQ(moveHorse(5,5,6,7),1);
          ASSERT_EQ(moveHorse(0,5,1,7),1);
     }


TEST(moveHorse,t2){
    ASSERT_EQ(moveHorse(1,3,2,6),0);
     ASSERT_EQ(moveHorse(2,4,4,6),0);
     ASSERT_EQ(moveHorse(3,5,7,7),0);
     ASSERT_EQ(moveHorse(6,2,7,5),0);
      ASSERT_EQ(moveHorse(5,4,6,7),0);
      ASSERT_EQ(moveHorse(0,3,1,7),0);

}

#endif // TEST_HORSE_H
