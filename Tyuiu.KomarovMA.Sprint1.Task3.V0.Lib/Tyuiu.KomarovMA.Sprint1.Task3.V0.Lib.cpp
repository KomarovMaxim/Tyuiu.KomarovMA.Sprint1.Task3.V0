// Tyuiu.KomarovMA.Sprint1.Task3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint0Task3V0
{
	virtual int Uslovie(int a) override
	{
		int b = a;
		if (b % 2 == 0 && b != 1000)
		{
			if (b % 4 == 0)
			{
				b = b * 2;
			}
		}
		else
			b /= 5;
		return b;
	}
};
