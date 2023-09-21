#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint1.Task3.V0.Lib/Tyuiu.KomarovMA.Sprint1.Task3.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service();
			int a = 999;
			int b;
			b = date->Uslovie(a);
			Assert::AreEqual(199, b);
		}
	};
}
