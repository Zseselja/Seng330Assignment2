/*
 * AllTests.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Zachary Seselja
 */


#include "gtest/gtest.h"
#include "mainTest.cpp"
#include "main.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

