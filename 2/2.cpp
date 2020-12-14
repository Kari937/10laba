#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream in("f.txt");
	ofstream out("g.txt");
	char a;
	string c, b;
	while (in.peek() != EOF)
	{
		getline(in, c);
		for (unsigned int i = 0; i < c.length(); i++)
		{
			if (c[i] == 'c') b += "c++";
			else b += c[i];
		}
		out << b << endl;
	}
	in.close();
	out.close();
	return 0;
}