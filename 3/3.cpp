#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream in("f.txt");
	ofstream out("g.txt");
	int a = 0;
	string b;
	while (in.peek() != EOF)
	{
		getline(in, b);
		for (unsigned int i = 0; i < b.length(); i++)
		{
			if (b[i] == 'K')
			{
				a++;
			}
		}
		out << a << endl;
	}
	in.close();
	out.close();
	return 0;
}