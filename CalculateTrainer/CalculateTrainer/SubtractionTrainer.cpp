#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int CreateNum02[5], n02 = 2, result02, userinput02;
bool isright02 = false;
char isback02;
void SubtractionTrainer() {
	system("cls");
	cout << "��ӭ����������ϰģʽ�����������ʽ�ӵĽ����" << endl;
	while (1) {
		isright02 = false;
		srand((int)time(NULL));
		n02 = rand() % 4 + 2;
		result02 = 0;
		//���������
		for (int i = 0; i < n02; ++i) {
			CreateNum02[i] = rand() % 1000 + 1;
			if (i == 0)
				result02 += CreateNum02[i];
			else
				result02 -= CreateNum02[i];
		}
		//�û�δ���
		while (!isright02)
		{
			//���������ʽ
			for (int i = 0; i < n02; ++i) {
				cout << CreateNum02[i];
				if (i != n02 - 1)
					cout << " - ";
				else
					cout << " = ";
			}
			cin >> userinput02;
			if (userinput02 == result02)
			{
				cout << "��" << endl;
				isright02 = true;
			}
			else
			{
				cout << "��" << endl;
			}
			cout << "�Ƿ����(y/n):";
			cin >> isback02;
			if (isback02 == 'n')
				isright02 = true;
		}
		if (isback02 == 'n')
			break;
	}
}