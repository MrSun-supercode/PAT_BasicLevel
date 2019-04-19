///*
//1012 数字分类 （20 分)
//给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
//
//A
//​1
//​​  = 能被 5 整除的数字中所有偶数的和；
//A
//​2
//​​  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n
//​1
//​​ −n
//​2
//​​ +n
//​3
//​​ −n
//​4
//​​ ⋯；
//A
//​3
//​​  = 被 5 除后余 2 的数字的个数；
//A
//​4
//​​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
//A
//​5
//​​  = 被 5 除后余 4 的数字中最大数字。
//输入格式：
//每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
//
//输出格式：
//对给定的 N 个正整数，按题目要求计算 A
//​1
//​​ ~A
//​5
//​​  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
//
//若其中某一类数字不存在，则在相应位置输出 N。
//
//输入样例 1：
//13 1 2 3 4 5 6 7 8 9 10 20 16 18
//输出样例 1：
//30 11 2 9.7 9
//输入样例 2：
//8 1 2 4 5 6 7 9 16
//输出样例 2：
//N 11 2 N 9
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805311146147840
//*/
///*
//思路：没什么好说的，就是按部就班的来就可以AC。不过最后有点是在第二种分类的时候，最后判断结果不能是sum==0.
//因为如果sum==0可能是因为交错求和之后的结果==0但不能由此判断没有这一类的数
//*/
//#include<iostream>
//#include<vector>
//#include<cmath>
//#include <iomanip>
//#include<queue>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	int List[10000];
//	vector <int> A2;
//	vector <int> A4;
//	priority_queue <int> A5;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> List[i];
//	}
//	int sum = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (List[i]%5==0&&List[i]%2==0)
//		{
//			sum += List[i];
//		}
//		else if (List[i]%5==1)
//		{
//			A2.push_back(List[i]);
//		}
//		else if (List[i]%5==2)
//		{
//			count++;
//		}
//		else if (List[i]%5==3)
//		{
//			A4.push_back(List[i]);
//		}
//		else if (List[i]%5==4)
//		{
//			A5.push(List[i]);
//		}
//	}
//	if (sum==0)
//	{
//		cout << 'N';
//	}
//	else cout << sum;
//	sum = 0;
//	for (int i = 0; i < A2.size(); i++)
//	{
//		sum += A2[i] * pow(-1, i);
//	}
//	if (A2.size()==0)
//	{
//		cout << " N";
//	}
//	else cout << ' '<<sum;
//	if (count==0)
//	{
//		cout << " N";
//	}
//	else cout << ' ' << count;
//	float sum_s = 0;
//	for (int i = 0; i < A4.size(); i++)
//	{
//		sum_s += A4[i];
//	}
//	float average = sum_s / float(A4.size());
//	if (A4.size()==0)
//	{
//		cout << " N";
//	}
//	else cout << ' ' << setiosflags(ios::fixed)<<setprecision(1)<<average;
//	if (A5.size() == 0)
//	{
//		cout << " N";
//	}	
//	else cout << ' '<<A5.top();		
//	system("pause");
//	return 0;
//}