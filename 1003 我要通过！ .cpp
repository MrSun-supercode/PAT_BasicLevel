///*
//“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。
//
//得到“答案正确”的条件是：
//
//字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
//任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
//如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
//现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
//
//输入格式：
//每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。
//
//输出格式：
//每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。
//
//输入样例：
//8
//PAT
//PAAT
//AAPATAA
//AAPAATAAAA
//xPATx
//PT
//Whatever
//APAAATAA
//输出样例：
//YES
//YES
//YES
//YES
//NO
//NO
//NO
//NO
//*/
////参考博客 ：https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
//#include<iostream>
//#include<string>
//using namespace std;
//string s[9];
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << s[i]<<endl;
//	}*/
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int count_x = 0, count_y = 0, count_z = 0;//将P前面，P和T中间和T之后的A的数量分别保存起来并存为X,Y,Z。
//		int count_a = 0, count_p = 0, count_t = 0;//记录a，p，t出现的次数
//		for (int j = 0; j < s[i].length(); j++)
//		{
//			if (s[i][j] != 'A'&& s[i][j] != 'P'&&s[i][j] != 'T')//如果存在元素不在APT中，直接输出NO
//			{
//				cout << "NO" << endl;
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			for (int j = 0; j < s[i].length(); j++)//查找A，P,T的数量
//			{
//				if (s[i][j] == 'A')
//				{
//					count_a++;
//				}
//				else if (s[i][j] == 'T')
//				{
//					count_t++;
//				}
//				else {
//					count_p++;
//				}
//			}
//			if (count_a < 1 || count_t < 1 || count_p < 1)//成立的条件是PT为一个，A至少为一个
//			{
//				cout << "NO" << endl;
//			}
//			else {//将P前面，P和T中间和T之后的A的数量分别保存起来并存为X,Y,Z
//				for (int j = 0; j < s[i].length(); j++)
//				{
//					while (s[i][j] != 'P'&&j<s[i].length())
//					{
//						count_x++;
//						j++;
//					}
//					j++;
//					while (s[i][j] != 'T'&&j < s[i].length())
//					{
//						count_y++;
//						j++;
//					}
//					j++;
//					while (j < s[i].length())
//					{
//						count_z++;
//						j++;
//					}
//				}
//				//符合x*y==z的时候，也不一定是YES，必须是x和z同步，即要么都是0，要么都不是0
//				//如果x不为0，y为0，z为0，该式也成立，但不满足YES的条件，
//
//				if (count_x*count_y == count_z)
//				{
//					if ((count_x==0&&count_z!=0)||(count_x != 0 && count_z == 0))
//					{
//						cout << "NO" << endl;
//					}
//					else cout << "YES" << endl;
//				}
//				else {
//					cout << "NO" << endl;
//				}
//			}
//		}		
//	flag = true;//别忘了改回flag的值，否则将卡在第一个NO的节点
//	}
//	system("pause");
//	return 0;
//}