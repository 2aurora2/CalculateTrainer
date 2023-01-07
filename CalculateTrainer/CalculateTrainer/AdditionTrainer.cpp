#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int CreateNum01[5], n01 = 2, result01, userinput01;
bool isright01 = false;
char isback01;
void AdditionTrainer() {
	system("cls");
	cout << "欢迎来到加法练习模式！请计算以下式子的结果：" << endl;
	while (1) {
		isright01 = false;
		srand((int)time(NULL));
		n01 = rand() % 4 + 2;
		result01 = 0;
		//生成随机数
		for (int i = 0; i < n01; ++i) {
			CreateNum01[i] = rand() % 1000 + 1;
			result01 += CreateNum01[i];
		}
		//用户未答对
		while (!isright01)
		{
			//输出加法算式
			for (int i = 0; i < n01; ++i) {
				cout << CreateNum01[i];
				if (i != n01 - 1)
					cout << " + ";
				else
					cout << " = ";
			}
			cin >> userinput01;
			if (userinput01 == result01)
			{ 
				cout << "√" << endl;
				isright01 = true;
			}
			else
			{
				cout << "×" << endl;
			}
			cout << "是否继续(y/n):";
			cin >> isback01;
			if (isback01 == 'n')
				isright01 = true;
		}
		if (isback01 == 'n')
			break;
	}
}