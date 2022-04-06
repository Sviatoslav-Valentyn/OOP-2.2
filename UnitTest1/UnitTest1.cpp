#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 2.3/Point.h"
#include "../OOP 2.3/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point x(2, 2.);
			x.Angle();
			Assert::AreEqual(45., x.Angle());
		}
	};
}
