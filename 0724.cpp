// 0724.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Dir.h"
#include <iostream>
using namespace std;

void test72401() {
	Dir dir;
// 	if (dir.mkdir("C:\\Users\\Administrator\\Desktop\\1"))
// 	{
// 		cout << "�����ɹ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "����ʧ��" << endl;
// 	}
// 	if (dir.remove("C:\\Users\\Administrator\\Desktop\\1.txt"))
// 	{
// 		cout << "ɾ���ɹ�" << endl;
// 	}
// 	else
// 	{
// 		cout << "ɾ��ʧ��" << endl;
// 	}
	int n = dir.list("C:");
	cout << "�ļ�������" << n << endl;
}
int main()
{
	test72401();
    return 0;
}

