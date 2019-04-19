///*
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//
//输入格式：
//每个测试输入包含 1 个测试用例，格式为
//
//第 1 行：正整数 n
//第 2 行：第 1 个学生的姓名 学号 成绩
//第 3 行：第 2 个学生的姓名 学号 成绩
//  ... ... ...
//第 n+1 行：第 n 个学生的姓名 学号 成绩
//其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
//
//输出格式：
//对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
//
//输入样例：
//3
//Joe Math990112 89
//Mike CS991301 100
//Mary EE990830 95
//输出样例：
//Mike CS991301
//Joe Math990112
//*/
//
//#include<iostream>
//#include<string>
//using namespace std;
//typedef struct node {//使用结构体将数据存入节点
//	string name;
//	string number;
//	int grade;
//}Node;
//int main(void)
//{
//	Node person[1000];
//	int n,maxgrade,mingrade;
//	int max=0, min=0;//初始化，因为遍历最大值和最小值位置的时候是从i=1开始的，可能max或min=0
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> person[i].name>>person[i].number>>person[i].grade;
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout<< person[i].name << person[i].number << person[i].grade;
//	}*/
//	maxgrade = mingrade = person[0].grade;//遍历结构体数组中成绩最高的节点，并用max记下当前位置
//	for (int i = 1; i < n; i++)
//	{
//		if (person[i].grade>maxgrade)
//		{
//			maxgrade = person[i].grade;
//			max = i;
//		}
//	}
//	for (int i = 1; i < n; i++)//遍历结构体数组中成绩最高的节点，并用min记下当前位置
//	{
//		if (person[i].grade < mingrade)
//		{
//			mingrade = person[i].grade;
//			min = i;
//		}
//	}
//	/*cout << maxgrade << mingrade;*/
//	/*cout << max << min;*/
//	cout << person[max].name << ' ' << person[max].number << endl;
//	cout << person[min].name << ' ' << person[min].number << endl;
//	system("pause");
//	return 0;
//}