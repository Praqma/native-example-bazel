#include "gtest/gtest.h"
#include "liby/shapey.h"

TEST(ShapeyTest, GetWidth) {
  Shapey shapey;

  shapey.setWidth(4);
  EXPECT_EQ(shapey.width(), 4);
  EXPECT_NE(shapey.width(), 8);
  
  shapey.setWidth(8);
  EXPECT_EQ(shapey.width(), 8);
  EXPECT_NE(shapey.width(), 16);
}

TEST(ShapeyTest, GetHeight) {
  Shapey shapey;

  shapey.setHeight(4);
  EXPECT_EQ(shapey.height(), 4);
  EXPECT_NE(shapey.height(), 8);
  
  shapey.setHeight(8);
  EXPECT_EQ(shapey.height(), 8);
  EXPECT_NE(shapey.height(), 16);
}