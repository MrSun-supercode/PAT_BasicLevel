///*
//1017 A����B ��20 ��)
//����Ҫ����� A/B������ A �ǲ����� 1000 λ����������B �� 1 λ������������Ҫ������� Q ������ R��ʹ�� A=B��Q+R ������
//
//�����ʽ��
//������һ�������θ��� A �� B���м��� 1 �ո�ָ���
//
//�����ʽ��
//��һ����������� Q �� R���м��� 1 �ո�ָ���
//
//����������
//123456789050987654321 7
//���������
//17636684150141093474 3
//*/
///*
//˼·������������Ϊһ���ַ�����Ȼ��Ӹ�λ��ʼ������ܳ����������ͼ����ڼ�����һλ��ֱ�����Գ�����Ȼ��cmp����
//�������������ans����Ӹ�λ��ʼ�Ľ���������;����������������ans�ͼӸ�0
//��󷵻صı��������ans��������cmp��ʹ�����õ��÷���
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