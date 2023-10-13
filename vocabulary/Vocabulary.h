#pragma once
#include <map>
#include <iostream>
using namespace std;
class Vocabulary
{
	map <string, string> vocab;
public:
	void addElement(string, string);
	void deleteElement(string);
	void editElement(string);
	void findElement(string);
};

