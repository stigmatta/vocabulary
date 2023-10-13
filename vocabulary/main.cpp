#include <map>
#include <iostream>
#include "Vocabulary.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Vocabulary vocab;
	int ch=0;
	string str, str1;
	while (ch != 5)
	{
		cout << "1. Add element" << endl;
		cout << "2. Delete element" << endl;
		cout << "3. Edit element" << endl;
		cout << "4. Find element" << endl;
		cout << "5. End" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Type a word: " << endl;
			cin >> str;
			cout << "And its translation: " << endl;
			cin >> str1;
			vocab.addElement(str, str1);
			break;
		case 2:
			cout << "Type a word OR its translation: " << endl;
			cin >> str;
			vocab.deleteElement(str);
			break;
		case 3:
			cout << "Type what word do you want to edit: " << endl;
			cin >> str;
			vocab.editElement(str);
			break;
		case 4:
			cout << "Type a word OR its translation: " << endl;
			cin >> str;
			vocab.findElement(str);
			break;
		}
	}
		return 0;
}