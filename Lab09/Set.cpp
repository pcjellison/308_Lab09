#include "Set.h"
#include <cstdio>
#include <iostream>
using namespace std;
Set::Set(int max)
{
	nums = new int[max];
	pos = 0;
	this->max = max;
}

Set::~Set()
{
	delete[] nums;
}

void Set::add(int elem)
{
	int i;
	if (pos >= max)
	{
		int newMax = max * 2;
		int *temp = new int[newMax];
		for (int i = 0; i < max; i++)
		{
			temp[i] = nums[i];
		}
		delete[] nums;
		nums = temp;
		max = newMax;
	}
	//for (i = 0; i < pos; i++)
	//{
	//	if (nums[i] = elem)
	//		return;
	//}
	nums[pos++] = elem;
}

void Set::print()
{
	for (int i = 0; i < max; i++)
	{
		cout << nums[i] << endl;
	}
}