#include "stdafx.h"
#include "CppUnitTest.h"
#include "../lab/lab.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(unittest1)
		{
			Assert::AreEqual(120, fact::factorial(5));
		}

	};

	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(unittest1)
		{
			Assert::AreEqual(24, fact::factorial(4));
		}

	};
}
