/*
 * mainTest.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Zachary Seselja
 */




/*
 * mainTest.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Zachary Seselja
 */




#include "gtest/gtest.h"
//#include "Foo.h"
#include "main.cpp"
#include "main.h"

namespace {
  class mainTest_ship : public ::testing::Test {
  public:
	  int x;
//
  };
  TEST_F(mainTest_ship, Ship) {

	  	Ship *ship1;
	    EXPECT_EQ(ship1->x , 0);

    }



  TEST_F(mainTest_ship, shipFactoryBattle) {

	  	Ship *ship1;
	  	ship1 = new battleship(5);

	    EXPECT_EQ(ship1->x , 5);

    }
  TEST_F(mainTest_ship, shipFactorySub) {

	  	Ship *ship1;
	  	ship1 = new sub(3);

	    EXPECT_EQ(ship1->x , 3);


    }
  TEST_F(mainTest_ship, shipFactory) {

	  	Ship *ship1;
	  	Ship *ship2;
	  	ship1 = new sub(3);
	  	ship2 = new battleship(5);
	    EXPECT_EQ(ship1->x , ship2->x);



    }

}



//  class mainTest_SUBship : public ::testing::Test {
//  public:
//	  int x;
////
//  };
//  TEST_F(mainTest_SUBship, Ship) {
////	  int num = 5;
//	  	Ship *ship1;
//
//
//	    EXPECT_EQ(ship1->x , 5);
////	  	EXPECT_EQ(num , (ship1->x));
//    }
//  class mainTest_BATTLEship : public ::testing::Test {
//  public:sub
//	  int x;
////
//  };
//  TEST_F(mainTest_BATTLEship, Ship) {
////	  int num = 5;
//	  	Ship *ship1;
//
//
//	    EXPECT_EQ(ship1->x , 5);
////	  	EXPECT_EQ(num , (ship1->x));
//    }





