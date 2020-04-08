#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1,3,3,5,6 };
			int n = sizeof(a) / sizeof(a[0]);
			int sum = 0;
			int max = 0;
			for (int i = 0; i < n; i++)
			{
				max += a[i];
				if (max > sum)
				{
					sum = max;
				}
				else if (max < 0)
				{
					max = 0;
				}
			}
			int right = 18;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(TestMethod2)
		{
			int a[6] = { -2,11,-4,13,-5,-2 };
			int n = sizeof(a) / sizeof(a[0]);
			int sum = 0;
			int max = 0;;
			for (int i = 0; i < n; i++)
			{
				max += a[i];
				if (max > sum)
				{
					sum = max;
				}
				else if (max < 0)
				{
					max = 0;
				}
			}
			int right = 20;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(TestMethod3)
		{
			int a[4] = { -1,-2,-3,-4 };
			int n = sizeof(a) / sizeof(a[0]);
			int sum = 0;
			int max = 0;
			for (int i = 0; i < n; i++)
			{
				max += a[i];
				if (max > sum)
				{
					sum = max;
				}
				else if (max < 0)
				{
					max = 0;
				}
			}
			int right = 0;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(TestMethod4)
		{
			int a[6] = { -4,-3,-2,-1,0,1 };
			int n = sizeof(a) / sizeof(a[0]);
			int sum = 0;
			int max = 0;
			for (int i = 0; i < n; i++)
			{
				max += a[i];
				if (max > sum)
				{
					sum = max;
				}
				else if (max < 0)
				{
					max = 0;
				}
			}
			int right = 1;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(TestMethod5)
		{
			int a[5] = { 1,1,1,1,1 };
			int n = sizeof(a) / sizeof(a[0]);
			int sum = 0;
			int max = 0;
			for (int i = 0; i < n; i++)
			{
				max += a[i];
				if (max > sum)
				{
					sum = max;
				}
				else if (max < 0)
				{
					max = 0;
				}
			}
			int right = 5;
			Assert::AreEqual(right, sum);
		}

	};
}
