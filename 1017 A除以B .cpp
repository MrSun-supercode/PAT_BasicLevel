///*
//1017 A除以B （20 分)
//本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。
//
//输入格式：
//输入在一行中依次给出 A 和 B，中间以 1 空格分隔。
//
//输出格式：
//在一行中依次输出 Q 和 R，中间以 1 空格分隔。
//
//输入样例：
//123456789050987654321 7
//输出样例：
//17636684150141093474 3
//*/
///*
//思路：将大数储存为一个字符串，然后从高位开始如果不能除开除数，就继续在加上下一位，直至可以除开，然后cmp保存
//被除后的余数，ans保存从高位开始的结果。如果中途遇到被整除的数，ans就加个0
//最后返回的被除结果是ans，余数是cmp。使用引用调用返回
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//string Expert(string s, int x, int &temp);
//int main(void)
//{
//	string s;
//	int x,temp;
//	cin >> s >> x;
//	string t = Expert(s, x, temp);
//	cout << t <<' '<<temp;
//	system("pause");
//	return 0;
//}
//string Expert(string s, int x, int &temp)
//{
//	int cmp = 0, ok = 0;
//	string ans = "";
//	for (int i = 0; i < s.size(); i++)
//	{
//		cmp = cmp * 10 + (s[i] - '0');
//		if (cmp>=x)
//		{
//			ok = 1;
//			ans += (cmp / x)+'0';
//			cmp %= x;
//		}
//		else if (ok==1)
//		{
//			ans += '0';
//		}
//	}
//	temp = cmp;
//	if (!ans.empty())
//	{
//		return ans;
//	}
//	else return "0";
//}