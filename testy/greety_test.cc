#include "gtest/gtest.h"
#include "mainy/greety.h"

TEST(GreetyTest, GetGreety) {
  EXPECT_EQ(get_greety("Bazel"), "Hello, Bazel?");
  EXPECT_NE(get_greety("Bazel"), "Hello, Bazel!");
  EXPECT_NE(get_greety("Bazel"), "Hello Bazel.");
  EXPECT_NE(get_greety("Bazel"), "Hello, Bazel!?");
  EXPECT_NE(get_greety("Bazel"), "Hello Bazel!");

  EXPECT_STREQ(get_greety("Bazel").c_str(), "Hello, Bazel?");
  EXPECT_STRNE(get_greety("Bazel").c_str(), "hello, Bazel?");

  EXPECT_STRCASEEQ(get_greety("Bazel").c_str(), "hello, BAZEL?");
  EXPECT_STRCASEEQ(get_greety("Bazel").c_str(), "HELLO, bazel?");
  EXPECT_STRCASENE(get_greety("Bazel").c_str(), "HELLO, Bazel!?");
  EXPECT_STRCASENE(get_greety("Bazel").c_str(), "hello BAZEL!");
}