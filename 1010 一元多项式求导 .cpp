///*
//1010 一元多项式求导 （25 分)
//设计函数求一元多项式的导数。（注：x
//​n
//​​ （n为整数）的一阶导数为nx
//​n−1
//​​ 。）
//
//输入格式:
//以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。
//
//输出格式:
//以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是 0，但是表示为 0
//0。
//
//输入样例:
//3 4 -5 2 6 1 -2 0
//输出样例:
//12 3 -10 1 6 0
//*/
///*
//自己的思路：将xishu和zishu储存起来，并放入一个队列中，然后从队列中一个一个取，如果取出来的指数为0，则不输出
//否则就输出系数乘指数和指数-1.并且若系数和指数同时为0时输出0 0.
//但是第三个监测点一直过不去
//他人的思路：不需要储存，直接按照格式输出，并且使用while(cin>>xishu>>zhishu)的方式。
//*/
////#include<iostream>
////using namespace std;
////typedef struct Dao {
////	int xishu;
////	int zhishu;
////}dao;
////int main(void)
////{
////	dao temp;
////	bool flag = false;
////	while (cin >> temp.xishu >> temp.zhishu)
////	{
////		if (temp.xishu == 0 && temp.zhishu == 0 && !flag)
////		{
////			cout << "0 0";
////		}
////		else if (temp.xishu == 0 && temp.zhishu == 0 && flag)
////		{
////			cout << " 0 0";
////		}
////		else if (temp.zhishu != 0 && !flag)
////		{
////			cout << temp.xishu*temp.zhishu << ' ' << temp.zhishu - 1;
////			flag = true;
////		}
////		else if (temp.zhishu != 0 && flag)
////		{
////			cout << ' ' << temp.xishu*temp.zhishu << ' ' << temp.zhishu - 1;
////		}
////	}
////	system("pause");
////	return 0;
////}
//
////#include<iostream>
////#include<queue>
////using namespace std;
////typedef struct Dao {
////	int xishu;
////	int zhishu;
////}dao;
////int main(void)
////{
////	queue <dao> Q;
////	dao temp;
////	bool flag = false;
////	while (cin >> temp.xishu >> temp.zhishu)
////	{
////		if (temp.xishu == 0 && temp.zhishu == 0)
////		{
////			cout << "0 0" << endl;
////		}
////		else if (temp.zhishu != 0 && !flag)
////		{
////			cout << temp.xishu*temp.zhishu << ' ' << temp.zhishu - 1;
////			flag = true;
////		}
////		else if (temp.zhishu != 0 && flag)
////		{
////			cout << ' ' << temp.xishu*temp.zhishu << ' ' << temp.zhishu - 1;
////		}
////	}
////
////	system("pause");
////	return 0;
////}
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int xishu;
//	int zhishu;
//	cin >> xishu >> zhishu;
//	if (zhishu==0)
//	{
//		cout << "0 0";
//	}
//	else {//第一个输出的一对数前面不需要空格
//		cout << xishu * zhishu << " " << zhishu - 1;
//	}
//	while (cin>>xishu>>zhishu)
//	{//后面循环的输入的一对数需要在前面加空格
//		if (zhishu!=0)//如果zhishu==0，则说明这个项为常数项，不需要输出。若不为0说明是普通项按格式输出。
//		{
//			cout << ' ' << xishu * zhishu << ' ' << zhishu - 1;
//		}
//	}
//	system("pause");
//	return 0;
//}
