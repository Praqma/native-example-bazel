#include "gtest/gtest.h"
#include "liby/triangley.h"

TEST(TriangleyTest, GetArea) {
  Triangley triangley;

  triangley.setWidth(4);triangley.setHeight(5);
  EXPECT_EQ(triangley.getArea(), 10);
  EXPECT_NE(triangley.getArea(), 20);
  
  triangley.setWidth(8);triangley.setHeight(8);
  EXPECT_EQ(triangley.getArea(), 32);
  EXPECT_NE(triangley.getArea(), 64);
}