///*
//˼·��ֱ�Ӱѳ������°�string���ʹ棬ֱ�ӱȽϽ������
//�������������룬Ȼ���ж��Ƿ���Ч������Ч�������ҳ�maxyear��maxname�Լ�minyear��minname
//���ע�������ʽ
//���Ե�3������������������С������ˣ�ֻ�������0�����Һ��治�����ж���Ŀո�
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	int n, sum = 0;
//	string name, year, maxname, maxyear, minname, minyear;
//	maxyear = "1814/09/06";
//	minyear = "2014/09/06";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name >> year;
//		if (year >= "1814/09/06"&&year <= "2014/09/06")
//		{
//			sum++;
//			if (year >= maxyear)
//			{
//				maxname = name;
//				maxyear = year;
//			}
//			if (year <= minyear)
//			{
//				minname = name;
//				minyear = year;
//			}
//		}
//	}
//	cout << sum;
//	if (sum != 0) cout << " " << minname << " " << maxname;
//
//	system("pause");
//	return 0;
//}