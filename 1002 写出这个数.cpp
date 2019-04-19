///*
//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//
//输入格式：
//每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
//​100
//​​ 。
//
//输出格式：
//在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
//
//输入样例：
//1234567890987654321123456789
//输出样例：
//yi san wu
//*/
////参考的C++ string博客
////https://pintia.cn/problem-sets/994805260223102976/problems/994805324509200384
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
////创建一个拼音集，在输出的时候对应使用
//char pinyin[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//int main(void)
//{
//	string n;
//	cin >> n;
//	string::iterator iter;
//	//数组遍历
//	/*for (int i = 0; i < n.length(); i++)
//	{
//		cout << n[i] << endl;
//	}*/
//	//迭代器遍历
//	/*for ( iter=n.begin(); iter!=n.end(); iter++)
//	{
//		cout << *iter << endl;
//	}*/
//	int sum = 0;
//	//注意需将字符串类型转换为整数类型，因为char类型变量迭代器存放的是它的ascii，若要转换为整数类型就要-‘0’
//	//而不能直接int()，因为这样他会直接把ascii码的值转换为整数的值。
//	for ( iter=n.begin(); iter!=n.end(); iter++)
//	{
//		sum += *iter - '0';
//	}
//	/*cout << sum << endl;*/
//	stack <int> S;
//	//将和的每一位存到栈当中，因为是从最低位开始存，所以输出时要相反，即使用栈。
//	while (sum)
//	{
//		S.push(sum % 10);
//		sum /= 10;
//	}
//	//设定一个bool类型的变量flag来让第一个输出的前面没有空格
//	bool flag = false;
//	while (!S.empty())
//	{
//		int temp = S.top();//将temp赋值为栈顶元素
//		S.pop();//别忘了删除栈顶元素
//		if (!flag)
//		{
//			cout <<pinyin[temp];
//			flag = true;
//		}
//		else {
//			cout << ' ' << pinyin[temp];
//		}	
//	}
//	system("pause");
//	return 0;
//}