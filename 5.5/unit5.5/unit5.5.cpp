#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit55
{
	TEST_CLASS(unit55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c = F(1, 1);
			Assert::AreEqual(c, 1);
		}
	};
}
