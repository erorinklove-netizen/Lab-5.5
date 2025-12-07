#include "pch.h"
#include "CppUnitTest.h"
#include "D:\education\Lab 5.5/Lab 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
#define UNIT_TESTING
namespace UnitTestLab55
{
    TEST_CLASS(UnitTestLab55)
    {
    public:

        TEST_METHOD(TestBinaryConversion)
        {
            maxDepth = 0;
            string result = toBase(37, 2);

            Assert::AreEqual(string("100101"), result);
            Assert::AreEqual(6, maxDepth);
        }

        TEST_METHOD(TestOctalConversion)
        {
            maxDepth = 0;
            string result = toBase(64, 8);

            Assert::AreEqual(string("100"), result);
            Assert::AreEqual(3, maxDepth);
        }

        TEST_METHOD(TestBase10)
        {
            maxDepth = 0;
            string result = toBase(123, 10);

            Assert::AreEqual(string("123"), result);
            Assert::AreEqual(1, maxDepth);
        }
    };
}
