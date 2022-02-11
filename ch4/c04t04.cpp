//c04t04
#include <iostream>

using namespace std;

int main()
{

	for (char c = 'a'; c <= 'z'; ++c)
	{
		cout << c << " - " << (int)c << " | " << (char)toupper(c) << " - " << (int)toupper(c) << endl;
	}
}