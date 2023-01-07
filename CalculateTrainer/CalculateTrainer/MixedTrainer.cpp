#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include"Trainer.h"
using namespace std;
//存储随机生成的数字
int RandomNum[6];
//0代表+，1代表-，2代表*
char operation[4] = { '+','-','*'};
//存储随机生成的运算符
char RandomOp[6];
//判断用户结果是否正确
bool isright05 = false;
//存储用户输入的结果
int userinput05;
char isback05;
void MixedTrainer() {
	system("cls");
	cout << "欢迎来到混合运算练习模式！请计算以下式子的结果：" << endl;
	while (1) {
		isright05 = false;
		srand((int)time(NULL));
		//随机生成运算数和运算符
		for (int i = 0; i < 6; ++i)
		{
			RandomNum[i] = (rand() % 150 + 1);
			if (i != 5)
				RandomOp[i] = operation[rand() % 3];
			else
				RandomOp[i] = '=';
		}
		while (!isright05)
		{
			//输出生成的算式
			for (int i = 0; i < 6; ++i)
				cout << RandomNum[i] << " " << RandomOp[i] << " ";
			cin >> userinput05;
			if (userinput05 == CalculateMixed(RandomNum, RandomOp))
			{
				cout << "√" << endl;
				isright05 = true;
			}
			else
			{
				cout << "×" << endl;
			}
			cout << "是否继续(y/n):";
			cin >> isback05;
			if (isback05 == 'n')
				isright05 = true;
		}
		if (isback05 == 'n')
			break;
	}

}