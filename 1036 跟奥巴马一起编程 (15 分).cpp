/*
������ͳ�°��������������˶�ѧϰ��̣��������������д���룬��Ϊ������ʷ����λ��д������������ͳ��2014 ��ף�Ϊ��ף���������ѧ�����ܡ���ʽ�������°����д�˺ܼ򵥵ļ�������룺����Ļ�ϻ�һ�������Ρ�������Ҳ����һ�𻭰ɣ�

�����ʽ��
������һ���и��������α߳� N��3��N��20������������αߵ�ĳ���ַ� C�����һ���ո�

�����ʽ��
����ɸ����ַ� C �����������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ���������Σ��������������ʵ������������ 50%����������ȡ������

����������
10 a
���������
aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	double line;
	char symbol;
	cin >> line >> symbol;
	for (int i = 0; i < line; i++)
	{
		cout << symbol;
	}
	cout << endl;
	int column = round(line / 2) - 2;
	for (int i = 0; i < column; i++)
	{
		cout << symbol;
		for (int j = 0; j < line - 2; j++)
		{
			cout << ' ';
		}
		cout << symbol;
		cout << endl;
	}
	for (int i = 0; i < line; i++)
	{
		cout << symbol;
	}

	system("pause");
	return 0;
}