#include<iostream>
#include<Windows.h>
#include<cstdlib>
#include"Menu.h"
#include"var.h"
#include"Trainer.h"
using namespace std;
int main(void) {
	while (1) {
		system("cls");
		ShowMainMenu();
		cout << "���û�����ѡ���ѡ�";
		cin >> MainMenuChoice;
		switch(MainMenuChoice)
		{
		case 1:
			while (1) {
				yornBackMainMenu = 'n';
				system("cls");
				ShowPatternMenu();
				cout << "���û�����ѡ��(1-6)��";
				cin >> PatternChoice;
				switch (PatternChoice)
				{
				case 1:
					AdditionTrainer();
					break;
				case 2:
					SubtractionTrainer();
					break;
				case 3:
					MultiplyTrainer();
					break;
				case 4:
					DivisionTrainer();
					break;
				case 5:
					MixedTrainer();
					break;
				default:
					yornBackMainMenu = 'y';
					break;
				}
				if (yornBackMainMenu == 'y')
					break;
			}
			break;
		case 2:
			system("cls");
			ShowTrainerDesc();
			cout << "���������ַ��������˵���";
			cin >> BackMainMenu;
			break;
		case 3:
			return 0;
		default:
			cout << "�޴�ѡ����û���3s����������!" << endl;
			Sleep(3000);
			break;
		}
	}
	return 0;
}