int CountNearNum(int n1, char op, int n2) {
	if (op == '+')
		return n1 + n2;
	else if (op == '-')
		return n1 - n2;
	else if (op == '*')
		return n1 * n2;
}