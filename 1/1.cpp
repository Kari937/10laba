#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	int a;
	while (in.peek() != EOF)
	{
		in >> a;
		if (a > 0 && a % 3 == 0)
		{
			out << a << " ";
		}
	}
	in.close();
	out.close();
	return 0;
}