///*
//1022 D进制的A+B （20 分)
//输入两个非负 10 进制整数 A 和 B (≤2
//​30
//​​ −1)，输出 A+B 的 D (1<D≤10)进制数。
//
//输入格式：
//输入在一行中依次给出 3 个整数 A、B 和 D。
//
//输出格式：
//输出 A+B 的 D 进制数。
//
//输入样例：
//123 456 8
//输出样例：
//1103
//*/
/*
思路：按照求二进制的那种方法来，类似的，先将每个数与进制数相除，得到的余数放到vector中，然后再将那个数/=进制数
循环一直到0，最后反向遍历并输出vector
注意：测试点3是add==0的情况，不管进制数是几，都要输出0
*/
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int a, b, format,temp;
//	cin >> a >> b >> format;
//	int add = a + b;
//	vector<int>V;
//	if (add==0)
//	{
//		cout << 0;
//	}
//	while (add!= 0)
//	{
//		temp = add % format;
//		V.push_back(temp);
//		add /= format;
//	}
//	vector<int>::reverse_iterator item;
//	for ( item = V.rbegin(); item!=V.rend(); item++)
//	{
//		cout << *item;
//	}
//	system("pause");
//	return 0;
//}
