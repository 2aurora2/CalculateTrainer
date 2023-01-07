#include"Trainer.h"
#include<stack>
#include<iostream>
using namespace std;
bool mark = false;
int CalculateMixed(int* num, char* ops) {
	//´æ´¢Êı×ÖµÄÕ»
	stack<int> a;
	//´æ´¢ÔËËã·ûµÄÕ»
	stack<char> b;
	for (int i = 0; i < 6; ++i)
	{
		a.push(num[i]);
		if (ops[i] != '=')
		{
			mark = false;
			while (!mark)
			{
				if (b.empty())
				{
					b.push(ops[i]);
					mark = true;
				}
				else if (Compare(ops[i], b.top()) == 1)
				{
					int one = a.top();
					a.pop();
					int two = a.top();
					a.pop();
					a.push(CountNearNum(two, b.top(), one));
					b.pop();
				}
				else if (Compare(ops[i], b.top()) == 0)
				{
					b.push(ops[i]);
					mark = true;
				}
			}
		}
	}
	while(!b.empty())
	{
		int one = a.top();
		a.pop();
		int two = a.top();
		a.pop();
		a.push(CountNearNum(two, b.top(), one));
		b.pop();
	}
	return a.top();
}