#include "Set.h"
#include <cstdio>
#include <iostream>
using namespace std;
void expandSet(Set &set);

int main()
{
	Set *set;
	set = new Set(5);
	expandSet(*set);
	set->print();
}
void expandSet(Set &s)
{
	for (int i = 0; i < 10; i++)
	{
		int num;
		cout << "Please input a number" << endl;
		cin >> num;
		s.add(num);
	}
}
