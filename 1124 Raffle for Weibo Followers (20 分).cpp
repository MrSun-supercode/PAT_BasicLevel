///*
//�����������������ע�⣺����set�������������Ϊset���ݽṹĬ�����Զ��������һ�����ʱ���ܸ�ԭ���н�˳���г��롣
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<set>
//using namespace std;
//int main(void)
//{
//	int m, n, s;
//	cin >> m >> n >> s;
//	set<string>S;
//	vector<string>V(m + 1);
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> V[i];
//	}
//	if (s > m)//�����ʼ�±��m�����Ǿ�ֱ�����Keep going...
//	{
//		cout << "Keep going..." << endl;
//	}
//	else {
//		S.insert(V[s]);//�Ƚ���ʼ�±��Ӧ��Ԫ��ֵ����set�У����������
//		cout << V[s] << endl;
//		while (s <= m)//ֻҪs<=m����ô��һ����s+=n�������ж�V[s]�Ƿ���ֹ������ֹ��Ļ�������˳��
//		{
//			s += n;
//			if (s<=m)
//			{
//				while (S.find(V[s]) != S.end())//V[s]��S�д���
//				{
//					s++;//����˳��
//				}
//				if (s <= m)//��Ϊsֵ�ı��ˣ���ʱ��������жϣ�һ��s>m���жϵĻ�vector�±�ͻ����
//				{
//					S.insert(V[s]);
//					cout << V[s] << endl;
//				}
//				else break;
//			}
//			else break;
//		}
//	}
//	system("pause");
//	return 0;
//}