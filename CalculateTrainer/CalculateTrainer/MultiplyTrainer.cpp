#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int CreateNum03[2], n03 = 2, result03, userinput03;
bool isright03 = false;
char isback03;
void MultiplyTrainer() {
	system("cls");
	cout << "欢迎来到乘法练习模式！请计算以下式子的结果：" << endl;
	while (1) {
		isright03 = false;
		srand((int)time(NULL));
		result03 = 1;
		//生成随机数
		for (int i = 0; i < n03; ++i) {
			CreateNum03[i] = rand() % 100 + 1;
			result03 *= CreateNum03[i];
		}
		//用户未答对
		while (!isright03)
		{
			//输出乘法算式
			for (int i = 0; i < n03; ++i) {
				cout << CreateNum03[i];
				if (i != n03 - 1)
					cout << " * ";
				else
					cout << " = ";
			}
			cin >> userinput03;
			if (userinput03 == result03)
			{
				cout << "√" << endl;
				isright03 = true;
			}
			else
			{
				cout << "×" << endl;
			}
			cout << "是否继续(y/n):";
			cin >> isback03;
			if (isback03 == 'n')
				isright03 = true;
		}
		if (isback03 == 'n')
			break;
	}
}