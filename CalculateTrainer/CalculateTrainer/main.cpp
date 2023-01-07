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
		cout << "请用户输入选择的选项：";
		cin >> MainMenuChoice;
		switch(MainMenuChoice)
		{
		case 1:
			while (1) {
				yornBackMainMenu = 'n';
				system("cls");
				ShowPatternMenu();
				cout << "请用户输入选择(1-6)：";
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
			cout << "输入任意字符返回主菜单：";
			cin >> BackMainMenu;
			break;
		case 3:
			return 0;
		default:
			cout << "无此选项，请用户在3s后重新输入!" << endl;
			Sleep(3000);
			break;
		}
	}
	return 0;
}