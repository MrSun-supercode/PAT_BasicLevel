///*
//让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
//
//输入格式：
//每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。
//
//输出格式：
//每个测试用例的输出占一行，用规定的格式输出 n。
//
//输入样例 1：
//234
//输出样例 1：
//BBSSS1234
//输入样例 2：
//23
//输出样例 2：
//SS123
//*/
///*
//思路，n《1000，则分为三部分，n为个位，n为十位和n为百位（不会超过百位）
//然后创建一个栈将所有的n位数放进去并依次拿出执行相应的操作即可
//*/
//#include<iostream>
//#include<stack>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	if (n<10)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			cout << i;
//		}
//	}
//	else if (n>=10&&n<100)
//	{
//		int temp = n;
//		stack <int> s;
//		while (n)
//		{
//			s.push(n % 10);
//			n /= 10;
//		}
//		for (int i = 0; i < s.top(); i++)
//		{
//			cout << 'S';
//		}
//		s.pop();
//		for (int i = 1; i <= s.top(); i++)
//		{
//			cout << i;
//		}
//	}
//	else {
//		int temp = n;
//		stack <int> s;
//		while (n)
//		{
//			s.push(n % 10);
//			n /= 10;
//		}
//		for (int i = 0; i < s.top(); i++)
//		{
//			cout << "B";
//		}
//		s.pop();
//		for (int j = 0; j < s.top(); j++)
//		{
//			cout << 'S';
//		}
//		s.pop();
//		for (int m = 1; m <= s.top(); m++)
//		{
//			cout << m;
//		}
//	}
//	system("pause");
//	return 0;
//}
