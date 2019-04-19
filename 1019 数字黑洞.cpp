///*
//1019 数字黑洞 （20 分)
//给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递增排序，再按非递减排序，然后用第 1 个数字减第 2 个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇的数字也叫 Kaprekar 常数。
//
//例如，我们从6767开始，将得到
//
//7766 - 6677 = 1089
//9810 - 0189 = 9621
//9621 - 1269 = 8352
//8532 - 2358 = 6174
//7641 - 1467 = 6174
//... ...
//现给定任意 4 位正整数，请编写程序演示到达黑洞的过程。
//
//输入格式：
//输入给出一个 (0,10
//​4
//​​ ) 区间内的正整数 N。
//
//输出格式：
//如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；否则将计算的每一步在一行内输出，直到 6174 作为差出现，输出格式见样例。注意每个数字按 4 位数格式输出。
//
//输入样例 1：
//6767
//输出样例 1：
//7766 - 6677 = 1089
//9810 - 0189 = 9621
//9621 - 1269 = 8352
//8532 - 2358 = 6174
//输入样例 2：
//2222
//输出样例 2：
//2222 - 2222 = 0000
//链接：https://pintia.cn/problem-sets/994805260223102976/problems/994805302786899968
//遇到问题参考的博客：https://blog.csdn.net/id33749110/article/details/85720619
//*/
///*
//思路：把数用字符串的格式读入并且用temp数组存下来，通过对temp数组的升序和降序排序后得到最大值和最小值，
//如果最大值-最小值不为6174则一直循环。
//注意点:因为原式会输入1-9999的数字，所以如果输入的格式为个位，十位，百位时要自动将0补到4位数
//在运算途中，应该没进行一次循环之前将temp数组全部初始化为0，否则如果位数不够时会使得temp某位上保留上一次的结果
//在运算途中，有可能sum_a-sum_b的结果为个位或十位或百位，这样也需要用0补齐到4位数
//*/
//#include<iostream>
//#include<sstream>
//#include<string>
//#include<algorithm>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//void heiDong(string s);
//int main(void)
//{
//	string n;
//	cin >> n;
//	heiDong(n);
//	system("pause");
//	return 0;
//}
//bool cmp(int l, int r) {
//	return l > r;
//}
//void heiDong(string s)
//{
//	int temp[4];
//	int sum_a, sum_b;
//	if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3])
//	{
//		cout << s << " - " << s << " = " << "0000" << endl;
//	}
//	else {
//		//当输入的数在1000以下时他应该自动补全数组为千位且高位为0
//		stringstream sr;
//		string stm;
//		//若stmp为百、十、个位，也要在千位上补0
//		sr << setfill('0') << setw(4) << s;
//		sr >> stm;
//		for (int i = 0; i < 4; i++)
//		{
//			temp[i] = stm[i] - '0';
//		}
//		sort(temp, temp + 4, cmp);//从大到小
//		sum_a = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			sum_a += temp[i] * pow(10, 3 - i);
//		}
//		sort(temp, temp + 4);//从小到大
//		sum_b = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			sum_b += temp[i] * pow(10, 3 - i);
//		}
//		while (true)
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				temp[i] = 0;
//			}
//			if (sum_a - sum_b == 6174)
//			{
//				break;
//			}
//			cout << setfill('0') << setw(4) << sum_a << " - " << setfill('0') << setw(4) << sum_b << " = " << setfill('0') << setw(4) << sum_a - sum_b << endl;
//			stringstream ss;
//			string stmp;
//			//若stmp为百位，也要在千位上补0
//			ss << setfill('0') << setw(4) << sum_a - sum_b;
//			ss >> stmp;
//			for (int i = 0; i < 4; i++)
//			{
//				temp[i] = stmp[i] - '0';
//			}
//			sum_a = 0, sum_b = 0;
//			sort(temp, temp + 4, cmp);//从大到小			
//			for (int i = 0; i < 4; i++)
//			{
//				sum_a += temp[i] * pow(10, 3 - i);
//			}
//			sort(temp, temp + 4);//从小到大			
//			for (int i = 0; i < 4; i++)
//			{
//				sum_b += temp[i] * pow(10, 3 - i);
//			}
//		}
//		cout << setfill('0') << setw(4) << sum_a << " - " << setfill('0') << setw(4) << sum_b << " = " << "6174" << endl;
//	}
//}