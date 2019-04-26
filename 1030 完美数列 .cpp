///*
//1030 完美数列 (25 分)
//给定一个正整数数列，和正整数 p，设这个数列中的最大值是 M，最小值是 m，如果 M≤mp，则称这个数列是完美数列。
//
//现在给定参数 p 和一些正整数，请你从中选择尽可能多的数构成一个完美数列。
//
//输入格式：
//输入第一行给出两个正整数 N 和 p，其中 N（≤10
//​5
//​​ ）是输入的正整数的个数，p（≤10
//​9
//​​ ）是给定的参数。第二行给出 N 个正整数，每个数不超过 10
//​9
//​​ 。
//
//输出格式：
//在一行中输出最多可以选择多少个数可以用它们组成一个完美数列。
//
//输入样例：
//10 8
//2 3 20 4 5 1 6 7 8 9
//输出样例：
//8
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224
//*/
///*
//第一遍思路：先将数组所有元素排序，然后依次试数组大小为1,2,3‘’‘’‘’‘10的时候满不满足M<=m*p，满足记录到优先队列
//中去，输出优先队列中头元素（即最大的那个元素）
//结果还有三个测试点没通过，估计就是很特殊的点，而且这个算法可能有点缺陷，都是从第一个元素开始往后找，局限性大
//*/
////#include<iostream>
////#include<algorithm>
////#include<queue>
////using namespace std;
////int main(void)
////{
////	int n;
////	long long int p;
////	long long int arr[100001];
////	cin >> n >> p;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> arr[i];
////	}
////	priority_queue<int>Q;
////	sort(arr, arr + n);
////	int wei,temp;
////	for ( wei = 0; wei < n; wei++)
////	{		
////		if (arr[wei]<=p*arr[0])
////		{
////			Q.push(wei+1);
////		}		
////	}
////	for ( wei = n-1; wei>=0; wei--)
////	{
////		if (arr[n-1]<=p*arr[wei])
////		{
////			Q.push(wei+1);
////		}
////	}
////	cout << Q.top();
////	system("pause");
////	return 0;
////}
///*
//第二遍思路：从左和右分别向里缩小数组，看到哪里能够满足条件，但是第四个测试点超时，其他都对
//本来使用优先队列输出最大的，后来改用maxnum记录最大值仍然超时
//*/
//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int main(void)
//{
//	int n;
//	long long int p;
//	long long int arr[100001];
//	cin >> n >> p;
//	int maxnum=0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	int left, right;
//	//超时代码
//	/*for (left = 0; left < n; left++)
//	{
//		for (right = n - 1; right >= 0; right--)
//		{
//			if (arr[right] <= p * arr[left])
//			{
//				if (right-left+1>maxnum)
//				{
//					maxnum = right - left + 1;
//				}				
//			}
//		}
//	}*/
//	//优化后代码
//	int ans = 1;
//	for ( left = 0; left < n; left++)
//	{
//		for ( right = left+ans; right < n; right++)//right直接从left+ans开始，表示就算0到left+ans之间存在符合规则的也不做考虑，因为及时存在他们的间隔也要小于ans，而我们需要找最大的
//		{
//			if (arr[right]<=p*arr[left])
//			{
//				if (ans<right-left+1)//更新ans的值
//				{
//					ans = right - left + 1;
//				}				
//			}
//			else break;
//		}
//	}
//	cout <<ans;
//	system("pause");
//	return 0;
//}