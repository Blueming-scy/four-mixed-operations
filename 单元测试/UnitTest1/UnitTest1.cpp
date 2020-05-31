#include "pch.h"
#include "CppUnitTest.h"
#include "..\单元测试\test.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Plus)
		{	
			Assert::AreEqual(plus(12, 28), 40);
			Assert::AreEqual(plus(63, 23), 86);
			Assert::AreEqual(plus(63, 83), -1);
		}
		TEST_METHOD(Subtract)
		{
			Assert::AreEqual(subtract(45, 12), 33);
			Assert::AreEqual(subtract(65, 9), 56);
			Assert::AreEqual(subtract(65, 79), -1);
		}
		TEST_METHOD(Multiply)
		{
			Assert::AreEqual(multiply(5, 17), 85);
			Assert::AreEqual(multiply(3, 9), 27);
			Assert::AreEqual(multiply(13, 9), -1);
		}
		TEST_METHOD(Divide)
		{
			Assert::AreEqual(divide(99, 11), 9);
			Assert::AreEqual(divide(50, 2), 25);
			Assert::AreEqual(divide(70, 8), -1);
		}

	};
}
