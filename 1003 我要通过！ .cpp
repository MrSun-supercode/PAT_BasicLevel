///*
//������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ����������� PAT �ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�
//
//�õ�������ȷ���������ǣ�
//
//�ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
//�������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
//��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
//���ھ�����Ϊ PAT дһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
//
//�����ʽ��
//ÿ������������� 1 �������������� 1 �и���һ�������� n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ����� 100���Ҳ������ո�
//
//�����ʽ��
//ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ��������� YES��������� NO��
//
//����������
//8
//PAT
//PAAT
//AAPATAA
//AAPAATAAAA
//xPATx
//PT
//Whatever
//APAAATAA
//���������
//YES
//YES
//YES
//YES
//NO
//NO
//NO
//NO
//*/
////�ο����� ��https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
//#include<iostream>
//#include<string>
//using namespace std;
//string s[9];
//int main(void)
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << s[i]<<endl;
//	}*/
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int count_x = 0, count_y = 0, count_z = 0;//��Pǰ�棬P��T�м��T֮���A�������ֱ𱣴���������ΪX,Y,Z��
//		int count_a = 0, count_p = 0, count_t = 0;//��¼a��p��t���ֵĴ���
//		for (int j = 0; j < s[i].length(); j++)
//		{
//			if (s[i][j] != 'A'&& s[i][j] != 'P'&&s[i][j] != 'T')//�������Ԫ�ز���APT�У�ֱ�����NO
//			{
//				cout << "NO" << endl;
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			for (int j = 0; j < s[i].length(); j++)//����A��P,T������
//			{
//				if (s[i][j] == 'A')
//				{
//					count_a++;
//				}
//				else if (s[i][j] == 'T')
//				{
//					count_t++;
//				}
//				else {
//					count_p++;
//				}
//			}
//			if (count_a < 1 || count_t < 1 || count_p < 1)//������������PTΪһ����A����Ϊһ��
//			{
//				cout << "NO" << endl;
//			}
//			else {//��Pǰ�棬P��T�м��T֮���A�������ֱ𱣴���������ΪX,Y,Z
//				for (int j = 0; j < s[i].length(); j++)
//				{
//					while (s[i][j] != 'P'&&j<s[i].length())
//					{
//						count_x++;
//						j++;
//					}
//					j++;
//					while (s[i][j] != 'T'&&j < s[i].length())
//					{
//						count_y++;
//						j++;
//					}
//					j++;
//					while (j < s[i].length())
//					{
//						count_z++;
//						j++;
//					}
//				}
//				//����x*y==z��ʱ��Ҳ��һ����YES��������x��zͬ������Ҫô����0��Ҫô������0
//				//���x��Ϊ0��yΪ0��zΪ0����ʽҲ��������������YES��������
//
//				if (count_x*count_y == count_z)
//				{
//					if ((count_x==0&&count_z!=0)||(count_x != 0 && count_z == 0))
//					{
//						cout << "NO" << endl;
//					}
//					else cout << "YES" << endl;
//				}
//				else {
//					cout << "NO" << endl;
//				}
//			}
//		}		
//	flag = true;//�����˸Ļ�flag��ֵ�����򽫿��ڵ�һ��NO�Ľڵ�
//	}
//	system("pause");
//	return 0;
//}