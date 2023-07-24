#include "stdafx.h"
#include "Dir.h"
#include <direct.h>
#include <io.h>
#include <cstring>
#include <iostream>
using namespace std;

Dir::Dir()
{
}

Dir::~Dir()
{
}

bool Dir::remove(const char * name)
{
	return ::remove(name) == 0;
}

bool Dir::mkdir(const char * name)
{
	return _mkdir(name) == 0;
}

int Dir::list(const char * name)
{
	_finddata_t info;
	int len = strlen(name) + 3;
	char *path = new char[len];
	strcpy_s(path, len, name);
	strcat_s(path, len, "\\*");
	intptr_t ret = _findfirst(path, &info);
	delete[] path;
	if (ret == -1) {
		return 0;
	}
	int cnt = 0;
	do
	{
		if (strcmp(info.name, ".") == 0
			|| strcmp(info.name, "..") == 0) {
			continue;
		}
		if (info.attrib & _A_SUBDIR) {
			//D:\www\test-service
			//download
			//D:\www\test-service\download
			len = strlen(name) + strlen(info.name) + 2;
			path = new char[len];
			sprintf_s(path, len, "%s\\%s", name, info.name);
			cnt += list(path);
			delete[] path;
		}
		else {
			cout << name << "\\" << info.name << endl;
			++cnt;
		}
	} while (_findnext(ret, &info) == 0);

	_findclose(ret);
	return cnt;
}
