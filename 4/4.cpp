#include "string"
#include "iostream"
#include "fstream"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream in("f.txt");
	string a, b;
	while (in.peek() != EOF)
	{
		getline(in, a);
		if (a.size() > b.size())
		{
			b = a;
		}
	}
	cout << "Длина максимальной строки = " << b.size() << ". Сама строка:  " << b << endl;
	in.close();
	return 0;
}
