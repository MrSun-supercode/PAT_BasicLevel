///*
//现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
//
//输入格式：
//输入第 1 行给出正整数 N（≤10
//​5
//​​ ），即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。
//
//输出格式：
//输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。
//
//输入样例：
//10
//C J
//J B
//C B
//B B
//B C
//C C
//C B
//J B
//B C
//J J
//输出样例：
//5 3 2
//2 3 5
//B B
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805304020025344
//*/
//#include<iostream>
//using namespace std;
//void checked(char Jia, char Yi);
//int Jia_B = 0, Jia_J = 0, Jia_C = 0;
//int Yi_B = 0, Yi_J = 0, Yi_C = 0;
//int Jia_win = 0, Yi_win = 0, Jia_lose = 0, Yi_lose = 0, Draw = 0;
//int main(void)
//{
//	int n;
//	cin >> n;
//	char Jia, Yi;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> Jia >> Yi;
//		checked(Jia, Yi);
//	}
//	cout << Jia_win << ' ' << Draw << ' ' << Jia_lose << endl;
//	cout << Yi_win << ' ' << Draw << ' ' << Yi_lose<<endl;
//	if (Jia_B >= Jia_C && Jia_B >= Jia_J)
//	{
//		cout << 'B';
//	}
//	else if (Jia_C >= Jia_B && Jia_C >= Jia_J)
//	{
//		cout << 'C';
//	}
//	else if (Jia_J >= Jia_C && Jia_J >= Jia_B)
//	{
//		cout << 'J';
//	}
//	cout << ' ';
//	if (Yi_B >= Yi_C && Yi_B >= Yi_J)
//	{
//		cout << 'B';
//	}
//	else if (Yi_C >= Yi_B && Yi_C >= Yi_J)
//	{
//		cout << 'C';
//	}
//	else if (Yi_J >= Yi_C && Yi_J >= Yi_B)
//	{
//		cout << 'J';
//	}
//	system("pause");
//	return 0;
//}
//void checked(char Jia, char Yi)
//{
//	if (Jia == 'B'&&Yi == 'B')
//	{
//		Draw++;
//	}
//	else if (Jia == 'C'&&Yi == 'C')
//	{
//		Draw++;
//	}
//	else if (Jia == 'J'&&Yi == 'J')
//	{
//		Draw++;
//	}
//	else if (Jia == 'B'&&Yi == 'C')
//	{
//		Jia_win++;
//		Yi_lose++;
//		Jia_B++;
//	}
//	else if (Jia == 'B'&&Yi == 'J')
//	{
//		Jia_lose++;
//		Yi_win++;
//		Yi_J++;
//	}
//	else if (Jia == 'J'&&Yi == 'B')
//	{
//		Jia_win++;
//		Yi_lose++;
//		Jia_J++;
//	}
//	else if (Jia == 'J'&&Yi == 'C')
//	{
//		Jia_lose++;
//		Yi_win++;
//		Yi_C++;
//	}
//	else if (Jia == 'C'&&Yi == 'J')
//	{
//		Jia_win++;
//		Yi_lose++;
//		Jia_C++;
//	}
//	else if (Jia == 'C'&&Yi == 'B')
//	{
//		Jia_lose++;
//		Yi_win++;
//		Yi_B++;
//	}
//}