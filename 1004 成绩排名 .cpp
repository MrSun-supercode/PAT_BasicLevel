///*
//���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
//
//�����ʽ��
//ÿ������������� 1 ��������������ʽΪ
//
//�� 1 �У������� n
//�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
//�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
//  ... ... ...
//�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
//����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
//
//�����ʽ��
//��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�
//
//����������
//3
//Joe Math990112 89
//Mike CS991301 100
//Mary EE990830 95
//���������
//Mike CS991301
//Joe Math990112
//*/
//
//#include<iostream>
//#include<string>
//using namespace std;
//typedef struct node {//ʹ�ýṹ�彫���ݴ���ڵ�
//	string name;
//	string number;
//	int grade;
//}Node;
//int main(void)
//{
//	Node person[1000];
//	int n,maxgrade,mingrade;
//	int max=0, min=0;//��ʼ������Ϊ�������ֵ����Сֵλ�õ�ʱ���Ǵ�i=1��ʼ�ģ�����max��min=0
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> person[i].name>>person[i].number>>person[i].grade;
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout<< person[i].name << person[i].number << person[i].grade;
//	}*/
//	maxgrade = mingrade = person[0].grade;//�����ṹ�������гɼ���ߵĽڵ㣬����max���µ�ǰλ��
//	for (int i = 1; i < n; i++)
//	{
//		if (person[i].grade>maxgrade)
//		{
//			maxgrade = person[i].grade;
//			max = i;
//		}
//	}
//	for (int i = 1; i < n; i++)//�����ṹ�������гɼ���ߵĽڵ㣬����min���µ�ǰλ��
//	{
//		if (person[i].grade < mingrade)
//		{
//			mingrade = person[i].grade;
//			min = i;
//		}
//	}
//	/*cout << maxgrade << mingrade;*/
//	/*cout << max << min;*/
//	cout << person[max].name << ' ' << person[max].number << endl;
//	cout << person[min].name << ' ' << person[min].number << endl;
//	system("pause");
//	return 0;
//}