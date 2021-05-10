#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>

#include "SingleResponsibility.cpp";

using namespace std;

void SingleResponsibility() {
	Diary diary{ "Dear Diary" };
	diary.add_entry("Today I coded some leetcode");
	diary.add_entry("I coded some JavaScript");
	PersistenceManager pm;
	pm.save(diary, "diary.txt");
}
int main()
{
	SingleResponsibility();
	return 0;
}

