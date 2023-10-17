#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab51
{
	TEST_CLASS(UnitTestlab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = g(1, 2);
			Assert::AreEqual(c, 0.4, 0.00001);
		}
	};
}
