#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.4/lab6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestLab64
{
	TEST_CLASS(TestLab64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double mas[] = { 1.2, -3.4, 7.6, 5.4, 2.1 };
			int size = 5;
			double expectedMax = 7.6;
			Assert::AreEqual(expectedMax, Max(mas, size));
		}
	};
}
