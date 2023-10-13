#include "Vocabulary.h"
#include <iostream>
using namespace std;
void Vocabulary::addElement(string a, string b)
{
	vocab.insert(pair<string, string>(a, b));
}
void Vocabulary:: deleteElement(string a)
{
	for (auto iter = vocab.begin(); iter != vocab.end(); iter++)
	{
		if (a == iter->first || a == iter->second)
		{
			vocab.erase(iter);
			break;
		}
	}
}
void Vocabulary::editElement(string a)
{
	string str, str1;
	bool flag = false;
	for (auto iter = vocab.begin(); iter != vocab.end(); iter++)
	{
		if (a == iter->first || a == iter->second)
		{
			flag = true;
			cout << "How do you want to name it? Type both words:" << endl;
			cin >> str;
			cout << "And the translation: " << endl;
			cin >> str1;
			vocab.erase(iter);
			break;
		}
	}
	if(!str.empty()&&!str1.empty())
		vocab.insert(pair<string, string>(str, str1));
}
void Vocabulary::findElement(string a)
{
	for (auto iter = vocab.begin(); iter != vocab.end(); iter++)
	{
		if (a == iter->first || a == iter->second)
		{
			cout << iter->first << "\t\t\t" << iter->second << endl;
		}
	}
}