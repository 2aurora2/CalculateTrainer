//����Ƚ����ȼ�������ֻ���ж�С�ڵ��ںʹ���
int Compare(char front, char rear) {
    if ((front == '+' && rear == '+') || (front == '-' && rear == '-') || (front == '*' && rear == '*') || (front == '+' && rear == '*') || (front == '-' && rear == '*') || (front == '+' && rear == '-') || (front == '-' && rear == '+'))
    {
        return 1;
    }
    else {
        return 0;
    }
}