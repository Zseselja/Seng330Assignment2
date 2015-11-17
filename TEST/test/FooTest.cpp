/*
 * FooTest.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Zachary Seselja
 */




#include "gtest/gtest.h"
#include "Foo.h"
#include "main.cpp"

namespace {
  class FooTest : public ::testing::Test {
  protected:
    Foo foo;
  };

  TEST_F(FooTest, Foo) {
    ASSERT_TRUE(foo.foo());
  }
}
