//定义比较优先级函数，只需判断小于等于和大于
int Compare(char front, char rear) {
    if ((front == '+' && rear == '+') || (front == '-' && rear == '-') || (front == '*' && rear == '*') || (front == '+' && rear == '*') || (front == '-' && rear == '*') || (front == '+' && rear == '-') || (front == '-' && rear == '+'))
    {
        return 1;
    }
    else {
        return 0;
    }
}