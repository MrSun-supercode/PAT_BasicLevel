///*
//1016 部分A+B （15 分)
//正整数 A 的“D
//​A
//​​ （为 1 位整数）部分”定义为由 A 中所有 D
//​A
//​​  组成的新整数 P
//​A
//​​ 。例如：给定 A=3862767，D
//​A
//​​ =6，则 A 的“6 部分”P
//​A
//​​  是 66，因为 A 中有 2 个 6。
//
//现给定 A、D
//​A
//​​ 、B、D
//​B
//​​ ，请编写程序计算 P
//​A
//​​ +P
//​B
//​​ 。
//
//输入格式：
//输入在一行中依次给出 A、D
//​A
//​​ 、B、D
//​B
//​​ ，中间以空格分隔，其中 0<A,B<10
//​10
//​​ 。
//
//输出格式：
//在一行中输出 P
//​A
//​​ +P
//​B
//​​  的值。
//
//输入样例 1：
//3862767 6 13530293 3
//输出样例 1：
//399
//输入样例 2：
//3862767 1 13530293 8
//输出样例 2：
//0
//*/
///*
//思路：就是将每个值在大值里面出现的个数记录下来然后生成两个新数相加
//*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(void)
//{
//	long long int A, B;
//	int a, b;
//	cin >> A >> a >> B >> b;
//	int count_a = 0, count_b = 0;
//	int temp;
//	while (A>0)
//	{
//		temp = A % 10;
//		if (temp==a)
//		{
//			count_a++;
//			A /= 10;
//		}
//		else A /= 10;
//	}
//	while (B > 0)
//	{
//		temp = B % 10;
//		if (temp == b)
//		{
//			count_b++;
//			B /= 10;
//		}
//		else B /= 10;
//	}
//	int sum_a = 0, sum_b = 0;
//	while (count_a>=0)
//	{
//		count_a--;
//		sum_a += a * pow(10, count_a);		
//	}
//	while (count_b >= 0)
//	{
//		count_b--;
//		sum_b += b * pow(10, count_b);
//	}
//	cout << sum_a + sum_b;
//	system("pause");
//	return 0;
//}