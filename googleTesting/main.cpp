#include <iostream>
#include <gtest/gtest.h>

#include "module.h"
#include "basictests.hpp"
#include "fixturetests.h"
using namespace std;




int main(int argc, char *argv[])
{
    //template for testing
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
