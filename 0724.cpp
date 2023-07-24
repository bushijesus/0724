// 0724.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Dir.h"
#include <iostream>
using namespace std;

void test72401() {
	Dir dir;
// 	if (dir.mkdir("C:\\Users\\Administrator\\Desktop\\1"))
// 	{
// 		cout << "创建成功" << endl;
// 	}
// 	else
// 	{
// 		cout << "创建失败" << endl;
// 	}
// 	if (dir.remove("C:\\Users\\Administrator\\Desktop\\1.txt"))
// 	{
// 		cout << "删除成功" << endl;
// 	}
// 	else
// 	{
// 		cout << "删除失败" << endl;
// 	}
	int n = dir.list("C:");
	cout << "文件个数：" << n << endl;
}
int main()
{
	test72401();
    return 0;
}

