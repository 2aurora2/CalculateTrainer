#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int CreateNum04[2], n04 = 2;
double userinput04;
bool isright04 = false;
char isback04;
void DivisionTrainer() {
	system("cls");
	cout << "��ӭ����������ϰģʽ�����������ʽ�ӵĽ����" << endl;
	while (1) {
		isright04 = false;
		srand((int)time(NULL));
		//���������
		for (int i = 0; i < n04; ++i)
			if(i!=0&&CreateNum04[0]>300)
				CreateNum04[i] = rand() % 100 + i;
			else
				CreateNum04[i] = rand() % 1000 + i;
		//�û�δ���
		while (!isright04)
		{
			//���������ʽ
			cout << CreateNum04[0] << " / " << CreateNum04[1] << " = ";
			cin >> userinput04;
			if (fabs(1.0*CreateNum04[0]/CreateNum04[1]-userinput04)<=1e-6)
			{
				cout << "��" << endl;
				isright04 = true;
			}
			else
			{
				cout << "��" << endl;
			}
			cout << "�Ƿ����(y/n):";
			cin >> isback04;
			if (isback04 == 'n')
				isright04 = true;
		}
		if (isback04 == 'n')
			break;
	}
}