///*
//1033 旧键盘打字 (20 分)
//旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及坏掉的那些键，打出的结果文字会是怎样？
//
//输入格式：
//输入在 2 行中分别给出坏掉的那些键、以及应该输入的文字。其中对应英文字母的坏键以大写给出；每段文字是不超过 10
//​5
//​​  个字符的串。可用的字符包括字母 [a-z, A-Z]、数字 0-9、以及下划线 _（代表空格）、,、.、-、+（代表上档键）。题目保证第 2 行输入的文字串非空。
//
//注意：如果上档键坏掉了，那么大写的英文字母无法被打出。
//
//输出格式：
//在一行中输出能够被打出的结果文字。如果没有一个字符能被打出，则输出空行。
//
//输入样例：
//7+IE.
//7_This_is_a_test.
//输出样例：
//_hs_s_a_tst
//*/
///*
//思路：先判断是否上档键坏了，若坏了，将input里面所有大写字母都除去，否则不做处理
//循环判断input的每一个字符是否存在于first里面（此处应该包括大小写两种情况，比如T键错了，但是input中含有t，此时需要判断t是否在错的键中（包括其大写））
//*/
//#include<iostream>
//#include<string>
//#include<string.h>
//using namespace std;
//bool has(char c, string temp)
//{
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (temp[i] == c||(temp[i]-32)==c)
//		{
//			return true;//如果temp中存在c，return true
//		}
//	}
//	return false;//如果temp中不存在c，return false
//}
//int main(void)
//{
//	string first, input;
//	string ans_first = "";
//	string ans_input = "";
//	bool flag = false;//上档键是否坏掉，false表示没坏，true表示坏了
//	getline(cin, first);//这里必须用getline或者gets，因为有可能存再first为空即没有键坏的情况
//	getline(cin, input);
//	for (int i = 0; i < first.size(); i++)
//	{
//		if (first[i] == '+' )
//		{
//			flag = true;
//			break;
//		}
//	}
//	for (int i = 0; i < first.size(); i++)
//	{
//		if (first[i] <= 'Z'&&first[i] >= 'A')
//		{
//			ans_first += (first[i] + 32);//大小写之前差32个位置
//		}
//		else ans_first += first[i];
//	}
//	//cout << ans;
//	if (flag)
//	{
//		for (int i = 0; i < input.size(); i++)
//		{
//			if (input[i] <= 'Z'&&input[i] >= 'A')
//			{
//				/*ans_input += (input[i] + 32);*/
//			}
//			else ans_input += input[i];
//		}
//	}
//	else  ans_input = input;
//	/*cout << ans_input;*/
//	//做一个预处理：如果存在+表示上档键坏了，那么带大写字母的就会被去掉
//	//如果上档键没有坏，那么就不做处理
//	for (int i = 0; i < ans_input.size(); i++)
//	{
//		if (!has(ans_input[i],ans_first))
//		{
//			cout << ans_input[i];
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}