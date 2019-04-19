///*
//返回
//1011 A+B 和 C （15 分)
//给定区间 [−2
//​31
//​​ ,2
//​31
//​​ ] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
//
//输入格式：
//输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。
//
//输出格式：
//对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。
//
//输入样例：
//4
//1 2 3
//2 3 4
//2147483647 0 2147483646
//0 -2147483648 -2147483647
//输出样例：
//Case #1: false
//Case #2: true
//Case #3: true
//Case #4: false
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805312417021952
//*/
///*
//思路：直接使用long long int即可
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//bool checked(long long int a, long long int b, long long int c)
//{
//	if (a + b > c) return true;
//	else return false;
//}
//typedef struct bijiao {
//	long long int a;
//	long long int b;
//	long long int c;
//}Bi;
//int main(void)
//{
//	int n;
//	vector <Bi> V;
//	Bi temp;
//	cin >> n;
//	long long int x, y, z;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y >> z;
//		temp.a = x;
//		temp.b = y;
//		temp.c = z;
//		V.push_back(temp);
//	}
//	int count = 1;
//	vector <Bi>::iterator item;
//	for ( int i=0;i<V.size();i++)
//	{
//		bool tmp = checked(V[i].a, V[i].b, V[i].c);
//		if (tmp)
//		{
//			cout<< "Case #"<<count<<": true"<<endl;
//		}
//		else {
//			cout << "Case #" << count << ": false" << endl;
//		}
//		count++;
//	}
//	system("pause");
//	return 0;
//}