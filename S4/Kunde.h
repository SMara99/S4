#pragma once
#include<string>
using namespace std;

class Kunde{
private:
	int ID;
	string Name;
public:
	Kunde();
	Kunde(string name, int id);
	~Kunde();

	//getter
	string get_name();
	int get_id();
	//setter
	void set_name(string name);
	void set_id(int id);

};

