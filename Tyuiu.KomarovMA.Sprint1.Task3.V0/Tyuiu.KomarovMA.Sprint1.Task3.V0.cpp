#include "../Tyuiu.KomarovMA.Sprint1.Task3.V0.Lib/Tyuiu.KomarovMA.Sprint1.Task3.V0.Lib.cpp"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	ISprint0Task3V0* date = new Service();
	cout << "������� ����� �� 1000 �� 9999" << endl;
	int a;
	cin >> a;
	int b;
	b = date->Uslovie(a);
	cout << "�����: " << b << endl;
}