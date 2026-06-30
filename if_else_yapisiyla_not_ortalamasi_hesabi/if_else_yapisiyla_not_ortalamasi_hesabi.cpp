#include <iostream>
#include <string>
using namespace std;
void main()
{	//vize-->0.4 , final -->0.6 oranında etkileyecek.
	int vize, final;
	string ad;
	cout << "Adiniz:";
	cin >> ad;
	cout << "Vize ve final notunuz:";
	cin >> vize >> final;
	double ortalama = (vize*0.4) + (final*0.6);
	if (ortalama >= 90)
	{
		cout << "Tebrikler " << ad << ",not ortalaman: " << ortalama << ",harf notun:AA";
	}
	else if (ortalama >= 75)
	{
		cout << "Tebrikler " << ad << ",not ortalaman: " << ortalama << ",harf notun:BB";
	}
	else if (ortalama >= 60)
	{
		cout << "Tebrikler " << ad << ",not ortalaman: " << ortalama << ",harf notun:CC";
	}
	else if (ortalama >= 45)
	{
		cout << "Tebrikler " << ad << ",not ortalaman: " << ortalama << ",harf notun:DD";
	}
	else 
	{
		cout << "Dersten kaldin " << ad << ",not ortalaman: " << ortalama << ",harf notun:FF";
	}
}

