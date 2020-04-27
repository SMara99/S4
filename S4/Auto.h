#pragma once
#include<string>
using namespace std;

class Auto{
private:
	int ID;
	string Marke;
	string Modell;
public:
	Auto();
	Auto(int id, string Marke, string Modell);
	~Auto();

	//setter
	void set_id(int id);
	void set_marke(string marke);
	void set_mod(string modell);
	
	//getter
	int get_id();
	string get_marke();
	string get_mod();

};

