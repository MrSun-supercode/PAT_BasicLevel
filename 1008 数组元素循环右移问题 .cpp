///*
//1008 数组元素循环右移问题 （20 分)
//一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置，即将A中的数据由（A
//​0
//​​ A
//​1
//​​ ⋯A
//​N−1
//​​ ）变换为（A
//​N−M
//​​ ⋯A
//​N−1
//​​ A
//​0
//​​ A
//​1
//​​ ⋯A
//​N−M−1
//​​ ）（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？
//
//输入格式:
//每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。
//
//输出格式:
//在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。
//
//输入样例:
//6 2
//1 2 3 4 5 6
//输出样例:
//5 6 1 2 3 4
//题目链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805316250615808
//*/
////#include<iostream>
////#include<algorithm>
////using namespace std;
////typedef struct Node {
////	int data;
////	bool checked=false;
////}nodelist;
////int main(void)
////{
////	int n, k;
////	cin >> n >> k;
////	nodelist arraylist[101];
////	for (int i = 1; i <= n; i++)
////	{
////		cin >> arraylist[i].data;
////	}
////	int temp;
////	if (n==1)
////	{
////		cout << arraylist[n].data << endl;
////	}
////	else {
////		for (int i = 1; i <= n; i++)
////		{
////			if (!arraylist[i].checked)
////			{
////				if (i==n)
////				{
////					temp = arraylist[i].data;
////				}
////				else temp = arraylist[i%n].data;	
////				
////				while ((i+k)%n==0)
////				{
////						
////
////				}
////				if (i + k == n)
////				{
////					swap(temp, arraylist[i + k].data);
////				}
////				else swap(temp, arraylist[(i + k) % n].data);
////				arraylist[i].checked = true;
////				if (i + k == n)
////				{
////					i = i + k;
////				}
////				else i = (i + k) % n;
////			}
////			while (!arraylist[i].checked)
////			{
////				if (i + k == n)
////				{
////					swap(temp, arraylist[i + k].data);
////				}
////				else swap(temp, arraylist[(i + k) % n].data);
////				arraylist[i].checked = true;
////				if (i + k == n)
////				{
////					i = i + k;
////				}
////				else i = (i + k) % n;
////			}
////		}
////		for (int i = 1; i <= n; i++)
////		{
////			if (i == 1)
////			{
////				cout << arraylist[i].data;
////			}
////			else {
////				cout << ' ' << arraylist[i].data;
////			}
////		}
////		cout << endl;
////	}	
////	system("pause");
////	return 0;
////}
//
//
//
///*
//注释为自己写的写法
//第一种思路（上面）：写法为需要一个临时空间来存放换的数，从而改变数组，最后输出数组即可
//第二种思路（下面）：不需要变换数组，只需要改变输出的先后顺序即可。
//*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n, k;
//	int arraylist[100];
//	/*bool flag = true;*/
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arraylist[i];
//	}
//	k = k%n;//若k比n大，则相当于移动k%n次，因为多出来的n也要循环一遍
//	/*for (int i = 0; i < k; i++)
//	{
//		if (i==0)
//		{
//			cout << arraylist[n - k + i];
//		}
//		else cout << ' '<<arraylist[n - k + i];		
//	}*/
//	for (int i = n-k; i < n; i++)//从n-k到n-1的数先输出
//	{
//		cout << arraylist[i]<<' ';
//	}
//	/*for (int i = 0; i < n-k; i++)
//	{
//		switch (k == 0 && flag == true) {
//			case true:
//				cout << arraylist[i];
//				flag = false;
//				break;
//			default:
//				cout << ' ' << arraylist[i];
//				break;
//		}				
//	}*/
//	for (int i = 0; i < n-k; i++)//再输出从0到n-k-1的数，注意空格
//	{
//		cout << arraylist[i];
//		if (i<n-k-1)//如果i不为最后一个数字，那么要在后面多输出一个空格
//		{
//			cout << ' ';
//		}
//	}
//	/*cout << endl;*/
//	system("pause");
//	return 0;
//}
