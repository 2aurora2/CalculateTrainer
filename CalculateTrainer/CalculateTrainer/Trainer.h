#pragma once
//加法运算练习
void AdditionTrainer();
//减法运算练习
void SubtractionTrainer();
//乘法运算练习
void MultiplyTrainer();
//除法运算练习
void DivisionTrainer();
//混合运算练习
void MixedTrainer();
//混合运算中计算相邻两个数的结果
int CountNearNum(int n1, char op, int n2);
//混合运算计算生成式子的结果
int CalculateMixed(int* num, char* ops);
//混合运算中优先级的比较
int Compare(char front, char rear);