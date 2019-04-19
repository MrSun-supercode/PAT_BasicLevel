///*
//1014 福尔摩斯的约会 （20 分)
//大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。
//
//输入格式：
//输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。
//
//输出格式：
//在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。
//
//输入样例：
//3485djDkxh4hhGE
//2984akDfkkkkggEdsb
//s&hgsfdk
//d&Hyscvnm
//输出样例：
//THU 14:04
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805308755394560
//*/
///*
//坑点较多，自己的最后两个测试点过不去
//*/
////#include<iostream>
////#include<string>
////#include<map>
////#include<iomanip>
////using namespace std;
////string min(string x, string y)
////{
////	if (x.length() > y.length())
////	{
////		return y;
////	}
////	else return x;
////}
////int main(void)
////{
////	string Time1, Time2;
////	string Minute1, Minute2;
////	map <int, int> Time_num;
////	map <char, int> Time_char;
////	map <char, string> Week;
////	Time_num[0] = 0;
////	Time_num[1] = 1;
////	Time_num[2] = 2;
////	Time_num[3] = 3;
////	Time_num[4] = 4;
////	Time_num[5] = 5;
////	Time_num[6] = 6;
////	Time_num[7] = 7;
////	Time_num[8] = 8;
////	Time_num[9] = 9;
////	Time_char['A'] = 10;
////	Time_char['B'] = 11;
////	Time_char['C'] = 12;
////	Time_char['D'] = 13;
////	Time_char['E'] = 14;
////	Time_char['F'] = 15;
////	Time_char['G'] = 16;
////	Time_char['H'] = 17;
////	Time_char['I'] = 18;
////	Time_char['J'] = 19;
////	Time_char['K'] = 20;
////	Time_char['L'] = 21;
////	Time_char['M'] = 22;
////	Time_char['N'] = 23;
////
////	Week['A'] = "MON";
////	Week['B'] = "TUE";
////	Week['C'] = "WED";
////	Week['D'] = "THU";
////	Week['E'] = "FRI";
////	Week['F'] = "SAT";
////	Week['E'] = "SUN";
////	cin >> Time1;
////	cin >> Time2;
////	cin >> Minute1;
////	cin >> Minute2;
////	int temp1, temp2;
////	bool flag = false;
////	for (int i = 0; i < min(Time1, Time2).length(); i++)
////	{
////		if (Time1[i] == Time2[i])
////		{
////			if (flag && (Time1[i] >= 'A'&&Time1[i] <= 'N'))
////			{
////				temp2 = i;
////				cout << setfill('0') << setw(2) << Time_char[Time1[temp2]] << ':';
////				break;
////			}		
////			if (flag && (Time1[i] >= '0'&&Time1[i] <= '9'))
////			{
////				temp2 = i;
////				cout << setfill('0') << setw(2) << Time_num[Time1[temp2]] << ':';
////				break;
////			}
////			if (Time1[i] >= 'A'&&Time1[i] <= 'G' && !flag)
////			{
////				temp1 = i;
////				cout << Week[Time1[temp1]] << ' ';
////				flag = true;
////			}
////		}	
////	}				
////	for (int i = 0; i < min(Minute1, Minute2).length(); i++)
////	{
////		if (Minute1[i] == Minute2[i])
////		{
////			if ((Minute1[i] >= 'a'&&Minute1[i] <= 'z') || (Minute1[i] >= 'A'&&Minute1[i] <= 'Z'))
////			{
////				cout << setfill('0') << setw(2) << i;
////				break;
////			}			
////		}
////	}
////	cout<<endl;
////	system("pause");
////	return 0;
////}
//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//string min(string x, string y)
//{
//	if (x.length() > y.length())
//	{
//		return y;
//	}
//	else return x;
//}
//int main()
//{
//	string s1, s2, s3, s4;
//	cin >> s1 >> s2 >> s3 >> s4;
//	bool flag = false;
//	string s[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//	for (int i = 0; i < min(s1, s2).length(); i++)
//	{
//		if (s1[i] == s2[i])
//		{
//			if (!flag)
//			{
//				if (s1[i] >= 'A' && s1[i] <= 'G')
//				{
//					cout << s[s1[i] - 'A'] << ' ';
//					flag = true;
//				}
//			}
//			else
//			{
//				if (s1[i] >= '0' && s1[i] <= '9')
//				{
//					cout << setfill('0') << setw(2) << s1[i] - '0' << ':';
//					break;
//				}
//				if (s1[i] >= 'A' && s1[i] <= 'N')
//				{//因为A开始算10，所以s1[i]-'A'后需要加10
//					cout << setfill('0') << setw(2) << s1[i] - 'A' + 10 << ':';
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < min(s3, s4).length(); i++)
//	{
//		if (s3[i] == s4[i])
//		{
//			if (s3[i] <= 'z' && s3[i] >= 'a' || s3[i] <= 'Z' && s3[i] >= 'A')
//			{
//				cout << setfill('0') << setw(2) << i;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}