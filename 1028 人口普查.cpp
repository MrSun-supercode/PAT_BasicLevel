///*
//思路：直接把出生年月按string类型存，直接比较结果即可
//将数据逐条读入，然后判断是否有效，若有效，进而找出maxyear和maxname以及minyear和minname
//最后注意输出格式
//测试点3：不存在最大年龄和最小年龄的人，只可以输出0，而且后面不可以有多余的空格
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