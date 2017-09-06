#include "gtest/gtest.h"
#include "liby/rectangley.h"

TEST(RectangleyTest, GetArea) {
  Rectangley rectangley;

  rectangley.setWidth(4);rectangley.setHeight(5);
  EXPECT_EQ(rectangley.getArea(), 20);
  EXPECT_NE(rectangley.getArea(), 10);
  
  rectangley.setWidth(8);rectangley.setHeight(8);
  EXPECT_EQ(rectangley.getArea(), 64);
  EXPECT_NE(rectangley.getArea(), 32);
}