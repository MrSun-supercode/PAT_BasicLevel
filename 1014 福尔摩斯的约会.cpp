///*
//1014 ����Ħ˹��Լ�� ��20 ��)
//����̽����Ħ˹�ӵ�һ����ֵ�����������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm������̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04����Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ��� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ�����������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣
//
//�����ʽ��
//������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����
//
//�����ʽ��
//��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣
//
//����������
//3485djDkxh4hhGE
//2984akDfkkkkggEdsb
//s&hgsfdk
//d&Hyscvnm
//���������
//THU 14:04
//���ӣ�https://pintia.cn/problem-sets/994805260223102976/problems/994805308755394560
//*/
///*
//�ӵ�϶࣬�Լ�������������Ե����ȥ
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
//				{//��ΪA��ʼ��10������s1[i]-'A'����Ҫ��10
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