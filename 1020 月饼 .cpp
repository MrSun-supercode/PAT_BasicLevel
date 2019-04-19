///*
//1020 月饼 （25 分)
//月饼是中国人在中秋佳节时吃的一种传统食品，不同地区有许多不同风味的月饼。现给定所有种类月饼的库存量、总售价、以及市场的最大需求量，请你计算可以获得的最大收益是多少。
//
//注意：销售时允许取出一部分库存。样例给出的情形是这样的：假如我们有 3 种月饼，其库存量分别为 18、15、10 万吨，总售价分别为 75、72、45 亿元。如果市场的最大需求量只有 20 万吨，那么我们最大收益策略应该是卖出全部 15 万吨第 2 种月饼、以及 5 万吨第 3 种月饼，获得 72 + 45/2 = 94.5（亿元）。
//
//输入格式：
//每个输入包含一个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N 表示月饼的种类数、以及不超过 500（以万吨为单位）的正整数 D 表示市场最大需求量。随后一行给出 N 个正数表示每种月饼的库存量（以万吨为单位）；最后一行给出 N 个正数表示每种月饼的总售价（以亿元为单位）。数字间以空格分隔。
//
//输出格式：
//对每组测试用例，在一行中输出最大收益，以亿元为单位并精确到小数点后 2 位。
//
//输入样例：
//3 20
//18 15 10
//75 72 45
//输出样例：
//94.50
//*/
///*
//思路：先将月饼的信息保存到一个结构体数组中，然后将月饼按单价从大到小排列，然后从最大项开始，
//如果需求比月饼的库存要小，直接将需求*月饼的单价放入sum中，
//如果需求比月饼的库存要大，则需求-=库存，sum+=月饼的总价。
//*/
///*
//第一个，自己写的程序：
//问题1：月饼的总价和库存都有可能是小数，所以也要声明为float
//问题2：在判断时，如果需求比月饼的库存要小，我是直接用库存-月饼*单价，
//*/
////#include<iostream>
////#include<algorithm>
////#include<cstdio>
////using namespace std;
////typedef struct Mooncake {
////	int inventory;
////	int sum_price;
////	float unit_price;
////}M;
////bool cmp(M a, M b)
////{
////	return a.unit_price > b.unit_price;
////}
////int main(void)
////{
////	int type, requirement;
////	M cake[1000];
////	cin >> type >> requirement;
////	for (int i = 0; i < type; i++)
////	{
////		cin >> cake[i].inventory;
////	}
////	for (int i = 0; i < type; i++)
////	{
////		cin >> cake[i].sum_price;
////	}
////	for (int i = 0; i < type; i++)
////	{
////		cake[i].unit_price = float(cake[i].sum_price) / float(cake[i].inventory);
////	}
////	sort(cake, cake + type, cmp);//按照cake的unit_price属性从大到小排列
////	/*for (int i = 0; i < type; i++)
////	{
////		cout << cake[i].unit_price << endl;
////	}*/
////	float sum = 0.00;
////	for (int i = 0; i < type; i++)
////	{
////		if (cake[i].inventory <= requirement)
////		{
////			requirement -= cake[i].inventory;
////			sum += cake[i].sum_price;
////		}
////		else {
////			int diff_requirement = cake[i].inventory - requirement;
////			requirement = 0;
////			sum += float(diff_requirement * cake[i].unit_price);
////		}
////		if (requirement == 0)
////		{
////			break;
////		}
////	}
////	printf("%.2f", sum);
////	system("pause");
////	return 0;
////}
//
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//typedef struct Mooncake {
//	float inventory;
//	float sum_price;
//	float unit_price;
//}M;
//bool cmp(M a, M b)
//{
//	return a.unit_price > b.unit_price;
//}
//int main(void)
//{
//	int type, requirement;
//	M cake[1000];
//	cin >> type >> requirement;
//	for (int i = 0; i < type; i++)
//	{
//		cin >> cake[i].inventory;
//	}
//	for (int i = 0; i < type; i++)
//	{
//		cin >> cake[i].sum_price;
//	}
//	for (int i = 0; i < type; i++)
//	{
//		cake[i].unit_price = cake[i].sum_price / cake[i].inventory;
//	}
//	sort(cake, cake + type,cmp);//按照cake的unit_price属性从大到小排列
//	/*for (int i = 0; i < type; i++)
//	{
//		cout << cake[i].unit_price << endl;
//	}*/
//	float sum = 0.00;
//	for (int i = 0; i < type; i++)
//	{
//		if (cake[i].inventory>=requirement)
//		{
//			sum += requirement * cake[i].unit_price;
//			break;
//		}
//		else {			
//			requirement -= cake[i].inventory;
//			sum += cake[i].sum_price;
//		}
//		/*if (requirement==0)
//		{
//			break;
//		}*/
//	}
//	printf("%.2f\n",sum);
//	system("pause");
//	return 0;
//}
//
