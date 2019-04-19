///*
//1007 素数对猜想 （20 分)
//让我们定义d
//​n
//​​ 为：d
//​n
//​​ =p
//​n+1
//​​ −p
//​n
//​​ ，其中p
//​i
//​​ 是第i个素数。显然有d
//​1
//​​ =1，且对于n>1有d
//​n
//​​ 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
//
//现给定任意正整数N(<10
//​5
//​​ )，请计算不超过N的满足猜想的素数对的个数。
//
//输入格式:
//输入在一行给出正整数N。
//
//输出格式:
//在一行中输出不超过N的满足猜想的素数对的个数。
//
//输入样例:
//20
//输出样例:
//4
//题目链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805317546655744
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector <int> V;
//	//求所有小于n的素数，然后存入vector中
//	for (int i = 2; i <= n; i++)//因为1既不是素数也不是质数，所以从2开始
//	{
//		bool flag = true;//假定这个数为素数
//		for (int j = 2; j*j <= i; j++)//所有数都可以整除1，所以从2开始，当j>根号下i时就会重复，所以到根号下i停止
//		{
//			if (i%j==0)//如果这个数能被整除，则flag=false
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)//当flag=true时，即这个数为素数，所以将i放入vector中
//		{
//			V.push_back(i);
//		}
//	}
//	vector<int>::iterator item;
//	/*for (item = V.begin(); item!=V.end(); item++)
//	{
//		cout << *item << endl;
//	}*/
//	int count = 0;
//	//vector中end()返回vector中最后一个元素的后面一个元素。
//	for ( item = V.begin(); item<V.end()-1; item++)
//	{
//		if (*(item+1)-*item==2)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}