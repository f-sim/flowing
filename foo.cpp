#include <gmock/gmock.h>

using namespace testing;

TEST(ASimpleTest, ReturnsTrue) {
  ASSERT_THAT(true, Eq(true));
}