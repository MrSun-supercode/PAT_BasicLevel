/*
1013 数素数 （20 分)
令 P
​i
​​  表示第 i 个素数。现任给两个正整数 M≤N≤10
​4
​​ ，请输出 P
​M
​​  到 P
​N
​​  的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 P
​M
​​  到 P
​N
​​  的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112
*/
/*
第一个算法时间复杂度太高。
*/
//#include<iostream>
//#include<vector>
//#define MAXSIZE 1000000
//using namespace std;
//int main(void)
//{
//	int n, m;
//	cin >> m >> n;
//	vector<int> V;
//	int i, j;
//	for (i = 2; i <= MAXSIZE; i++)
//	{
//		for (j = 2; j<= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j*j > i)
//		{
//			V.push_back(i);
//		}
//	}
//	int count = 0;
//	for (int x = m - 1; x < n; x++)
//	{
//		if (count % 10 == 0)
//		{
//			cout << V[x];
//			count++;
//		}
//		else {
//			cout << ' ' << V[x];
//			count++;
//		}
//		if (count % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
/*
第二个思路：将数组内所有可以被2和3整除的数据设置为1
*/
//#include<iostream>
//#define MAXSIZE 1000000
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int list[MAXSIZE] = { 0 };
//	for (int i = 4; i < MAXSIZE; i++)
//	{
//		if (i%2==0||i%3==0)
//		{
//			list[i] = 1;
//		}
//	}
//	system("pause");
//	return 0;
//}