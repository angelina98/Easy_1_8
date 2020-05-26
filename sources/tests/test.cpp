#include <gtest/gtest.h>
#include "../Read.h"

TEST(Read, numbers)
{
    std::string file = "D:/Tasks/Easy_1_8/file.bin";
    std::vector<uint8_t> s = { 1, 2, 3, 4, 5, 6, 7, 8, 0 };
    base::made(file, s);
    auto result = base::read(file);
    ASSERT_EQ (s, result);
}

TEST(Read, letters)
{
    std::string file = "D:/Tasks/Easy_1_8/file.bin";
    std::vector<uint8_t> s = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
    base::made(file, s);
    auto result = base::read(file);
    ASSERT_EQ (s, result);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return  RUN_ALL_TESTS();
}