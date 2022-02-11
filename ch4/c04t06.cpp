//c04t06
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


string words;
vector<string> censored_words =
{
	"Yep",
	"Pog"
};

int main()
{
	cout << "Type in words: ";
	getline(cin, words);

	for (auto x : censored_words)
	{
		while (words.find(x) != string::npos)
		{
			words.replace(words.find(x), x.length(), "BLEEP");
			
		}
	}

	cout << words;
}

