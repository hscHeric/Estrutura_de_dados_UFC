#include <iostream>
using namespace std;

void letterToLower(char* str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

int main()
{
	char phrase[100];
	cin.get(phrase, 100);

	for (auto letter : phrase)
	{
		if (letter == '\0')
		{
			break;
		}
		letterToLower(&letter);
		cout << letter;
	}
	cout << endl;
}