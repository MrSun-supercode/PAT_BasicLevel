///*
//1009 说反话 （20 分)
//给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
//
//输入格式：
//测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。
//
//输出格式：
//每个测试用例的输出占一行，输出倒序后的句子。
//
//输入样例：
//Hello World Here I Come
//输出样例：
//Come I Here World Hello
//*/
///*
//思路：将整个字符串读入一个字符串变量中，然后再根据空格进行拆分放到一个vector中，最后反向遍历输出
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	string S;
//	getline(cin, S);//读入一行数据，以回车结尾。cin>>是以空格结尾
//	//分割字符串思想，新建一个保存分割下来的字符串的变量buff
//	string buff{ "" };
//	vector<string> v;
//	//从字符串首开始遍历
//	for (auto n : S)
//	{
//		//若n不等于空格，则buff加上这个字符
//		if (n != ' ') buff += n;
//		else
//			//如果n等于空格并且buff不为空，则将buff放入vector中，并重新将buff调整为空字符串
//			if (n == ' ' && buff != "")
//			{
//				v.push_back(buff);
//				buff = "";
//			}
//	}
//	if (buff != "") v.push_back(buff);//由于整个字符串最后可能没有空格，则将最后一段字符串保存到vector中
//	vector<string>::reverse_iterator item;
//	//反向遍历迭代器，从rbegin（）到rend（），注意rend()返回的是第一个字符串前面的一个位置，
//	//(类似于end（）返回最后一个字符串后面的一个位置)
//	//注意输出格式
//	for (item=v.rbegin(); item!=v.rend(); item++)
//	{
//		if (item==v.rbegin())
//		{
//			cout << *item;
//		}
//		else cout << ' ' << *item;
//	}
//	system("pause");
//	return 0;
//}