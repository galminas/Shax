#include "test_can.h"
#include "test_move.h"
#include "test_peshka.h"
#include "test_king.h"
#include "test_tower.h"
#include "test_queen.h"
#include "test_horse.h"
#include "test_el.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
