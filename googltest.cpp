#include <gtest/gtest.h>
#include "header.h"
#include <iostream>


TEST(Test, Monday) {
  
  EXPECT_FALSE(days("Monday",12));
  EXPECT_TRUE(days("Monday",20));
}

TEST(Test, Tuesday) {
  EXPECT_FALSE(days("Tuesday",100));
  EXPECT_TRUE(days("Tuesday",15));
}

TEST(Test, Wednesday) {
  EXPECT_FALSE(days("Wednesday",34));
  EXPECT_TRUE(days("Wednesday",110));
}

TEST(Test, Thursday) {
  EXPECT_FALSE(days("Thursday",0));
  EXPECT_TRUE(days("Thursday",84));
}

TEST(Test, Friday) {
  EXPECT_FALSE(days("Friday",12));
  EXPECT_TRUE(days("Friday",69));
}

TEST(Test, Saturday) {
  EXPECT_FALSE(days("Saturday",56));
  EXPECT_TRUE(days("Saturday",44));
}

TEST(Test, Sunday) {
  EXPECT_FALSE(days("Sunday",666));
  EXPECT_FALSE(days("Sunday",-666));
  EXPECT_TRUE(days("Sunday",100));
}