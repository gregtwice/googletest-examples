#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "singleton_user.hpp"
#include "mocks/singleton.hpp"

#include <iostream>

TEST(Singleton, doing_work_fails){
    using namespace ::testing;
    mocks::MySingleton * instance = mocks::MySingleton::getInstance();
    EXPECT_CALL(*instance, do_work()).WillOnce(Return(false));
    SingletonUser<mocks::MySingleton> user{};
    ASSERT_FALSE(user.work());
}