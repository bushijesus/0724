#pragma once
class Dir
{
public:
	Dir();
	~Dir();
	bool remove(const char* name);
	bool mkdir(const char* name);
	int list(const char* name);
};

