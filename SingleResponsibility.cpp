#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct Diary {
	string title;
	vector<string> entries;

	Diary(const string& title) : title(title) {}

	void add_entry(const string& entry) {
		static int count = 1;
		entries.push_back(count++ + ": " + entry);
	}

	/*
		- Moved into PersistenceManager to separate out concerns
		void save(const string& filename) {
		ofstream ofs(filename);
		for (auto& e : entries)
			ofs << e << endl;
		}
	*/
};

struct PersistenceManager
{
	static void save(const Diary& j, const string& filename) {
		ofstream ofs(filename);
		for (auto& e : j.entries)
			ofs << e << endl;
	}
};