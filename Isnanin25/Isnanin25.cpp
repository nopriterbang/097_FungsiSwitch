#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
	cout << "Masukan Bilangan Pertama = ";
	cin >> bilSatu;
	cout << "Masukan Bilangan Dua = ";
	cin >> bilDua;
}

float penjumlahan(float a, float b)
{
	return a + b;
}

float pembagian(float a, float b)
	{
		return a / b;
	}

float perkalian(float a, float b)
{
	return a * b;
}

float pengurangan(float a, float b)
{
	return a - b;
}

int main()
{
	int pilihan;

	do
	{
		cout << "==============" << endl;
		cout << "MENU" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pembagian "  << endl;
		cout << "3. Perkalian " << endl;
		cout << "4. Pengurangan " << endl;
		cout << "5.Exit " << endl;
		cout << "Masukan pilihan 1/2/3/4/5"
	}
}