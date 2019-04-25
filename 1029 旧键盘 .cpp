///*
//1029 旧键盘 （20 分)
//旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。
//
//输入格式：
//输入在 2 行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过 80 个字符的串，由字母 A-Z（包括大、小写）、数字 0-9、以及下划线 _（代表空格）组成。题目保证 2 个字符串均非空。
//
//输出格式：
//按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有 1 个坏键。
//
//输入样例：
//7_This_is_a_test
//_hs_s_a_es
//输出样例：
//7TI
//*/
///*
//思路：设立两个指针i，j分别指向两个字符串，如果pre[i]==cur[j]，那么就i,j分别加一
//如果pre[i]不等于cur[i]，则就将pre[i]的大写形式放入一个vector中（放入之前先判断vector中是否有pre[i]的大写形式）
//然后i再加一，j不需要加一了
//最后输出vector中的数值即可
//需要注意，最外层while循环不能是&&而是||，因为如果有一个字符串比较小那么可能直接会弹出而不会继续遍历长的字符串
//剩下的部分。比如12345 123（对应最后一个测试点）
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cctype>
//using namespace std;
//int searchV(char c, vector<char>V);//找到返回1，否则返回0
//int main(void)
//{
//	string pre, cur;
//	cin >> pre >> cur;
//	int i=0, j=0;
//	vector<char>V;
//	while (i<pre.size()||j<cur.size())
//	{
//		if (pre[i]==cur[j])
//		{
//			i++;
//			j++;
//		}
//		else {			
//			if (!searchV(toupper(pre[i]),V))
//			{
//				V.push_back(toupper(pre[i]));
//			}			
//			i++;
//		}
//	}
//	for (int i = 0; i < V.size(); i++)
//	{
//		cout << V[i];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//int searchV(char c,vector<char>V)
//{
//	for (int i = 0; i < V.size(); i++)
//	{
//		if (V[i]==c)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}