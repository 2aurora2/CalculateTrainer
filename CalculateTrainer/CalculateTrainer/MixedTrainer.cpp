#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include"Trainer.h"
using namespace std;
//�洢������ɵ�����
int RandomNum[6];
//0����+��1����-��2����*
char operation[4] = { '+','-','*'};
//�洢������ɵ������
char RandomOp[6];
//�ж��û�����Ƿ���ȷ
bool isright05 = false;
//�洢�û�����Ľ��
int userinput05;
char isback05;
void MixedTrainer() {
	system("cls");
	cout << "��ӭ�������������ϰģʽ�����������ʽ�ӵĽ����" << endl;
	while (1) {
		isright05 = false;
		srand((int)time(NULL));
		//��������������������
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
			//������ɵ���ʽ
			for (int i = 0; i < 6; ++i)
				cout << RandomNum[i] << " " << RandomOp[i] << " ";
			cin >> userinput05;
			if (userinput05 == CalculateMixed(RandomNum, RandomOp))
			{
				cout << "��" << endl;
				isright05 = true;
			}
			else
			{
				cout << "��" << endl;
			}
			cout << "�Ƿ����(y/n):";
			cin >> isback05;
			if (isback05 == 'n')
				isright05 = true;
		}
		if (isback05 == 'n')
			break;
	}

}