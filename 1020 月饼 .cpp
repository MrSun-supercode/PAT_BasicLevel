///*
//1020 �±� ��25 ��)
//�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ��������಻ͬ��ζ���±����ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�
//
//ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ����������� 3 ���±����������ֱ�Ϊ 18��15��10 ��֣����ۼ۷ֱ�Ϊ 75��72��45 ��Ԫ������г������������ֻ�� 20 ��֣���ô��������������Ӧ��������ȫ�� 15 ��ֵ� 2 ���±����Լ� 5 ��ֵ� 3 ���±������ 72 + 45/2 = 94.5����Ԫ����
//
//�����ʽ��
//ÿ���������һ������������ÿ�����������ȸ���һ�������� 1000 �������� N ��ʾ�±������������Լ������� 500�������Ϊ��λ���������� D ��ʾ�г���������������һ�и��� N ��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и��� N ��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���
//
//�����ʽ��
//��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С����� 2 λ��
//
//����������
//3 20
//18 15 10
//75 72 45
//���������
//94.50
//*/
///*
//˼·���Ƚ��±�����Ϣ���浽һ���ṹ�������У�Ȼ���±������۴Ӵ�С���У�Ȼ�������ʼ��
//���������±��Ŀ��ҪС��ֱ�ӽ�����*�±��ĵ��۷���sum�У�
//���������±��Ŀ��Ҫ��������-=��棬sum+=�±����ܼۡ�
//*/
///*
//��һ�����Լ�д�ĳ���
//����1���±����ܼۺͿ�涼�п�����С��������ҲҪ����Ϊfloat
//����2�����ж�ʱ�����������±��Ŀ��ҪС������ֱ���ÿ��-�±�*���ۣ�
//*/
////#include<iostream>
////#include<algorithm>
////#include<cstdio>
////using namespace std;
////typedef struct Mooncake {
////	int inventory;
////	int sum_price;
////	float unit_price;
////}M;
////bool cmp(M a, M b)
////{
////	return a.unit_price > b.unit_price;
////}
////int main(void)
////{
////	int type, requirement;
////	M cake[1000];
////	cin >> type >> requirement;
////	for (int i = 0; i < type; i++)
////	{
////		cin >> cake[i].inventory;
////	}
////	for (int i = 0; i < type; i++)
////	{
////		cin >> cake[i].sum_price;
////	}
////	for (int i = 0; i < type; i++)
////	{
////		cake[i].unit_price = float(cake[i].sum_price) / float(cake[i].inventory);
////	}
////	sort(cake, cake + type, cmp);//����cake��unit_price���ԴӴ�С����
////	/*for (int i = 0; i < type; i++)
////	{
////		cout << cake[i].unit_price << endl;
////	}*/
////	float sum = 0.00;
////	for (int i = 0; i < type; i++)
////	{
////		if (cake[i].inventory <= requirement)
////		{
////			requirement -= cake[i].inventory;
////			sum += cake[i].sum_price;
////		}
////		else {
////			int diff_requirement = cake[i].inventory - requirement;
////			requirement = 0;
////			sum += float(diff_requirement * cake[i].unit_price);
////		}
////		if (requirement == 0)
////		{
////			break;
////		}
////	}
////	printf("%.2f", sum);
////	system("pause");
////	return 0;
////}
//
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//typedef struct Mooncake {
//	float inventory;
//	float sum_price;
//	float unit_price;
//}M;
//bool cmp(M a, M b)
//{
//	return a.unit_price > b.unit_price;
//}
//int main(void)
//{
//	int type, requirement;
//	M cake[1000];
//	cin >> type >> requirement;
//	for (int i = 0; i < type; i++)
//	{
//		cin >> cake[i].inventory;
//	}
//	for (int i = 0; i < type; i++)
//	{
//		cin >> cake[i].sum_price;
//	}
//	for (int i = 0; i < type; i++)
//	{
//		cake[i].unit_price = cake[i].sum_price / cake[i].inventory;
//	}
//	sort(cake, cake + type,cmp);//����cake��unit_price���ԴӴ�С����
//	/*for (int i = 0; i < type; i++)
//	{
//		cout << cake[i].unit_price << endl;
//	}*/
//	float sum = 0.00;
//	for (int i = 0; i < type; i++)
//	{
//		if (cake[i].inventory>=requirement)
//		{
//			sum += requirement * cake[i].unit_price;
//			break;
//		}
//		else {			
//			requirement -= cake[i].inventory;
//			sum += cake[i].sum_price;
//		}
//		/*if (requirement==0)
//		{
//			break;
//		}*/
//	}
//	printf("%.2f\n",sum);
//	system("pause");
//	return 0;
//}
//
