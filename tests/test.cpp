// Copyright 2021 Your Name <your_email>

#include <gtest/gtest.h>

#include <sharedPtr.hpp>
#include <stdexcept>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
