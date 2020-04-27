#include "Auto.h"
Auto::Auto() {
	this->ID = 0;
	this->Marke = "";
	this->Modell = "";
};

Auto::Auto(int id, string marke, string modell) {
	this->ID = id;
	this->Marke = marke;
	this->Modell = modell;
};

void Auto::set_id(int id) {
	this->ID = id;
};

void Auto::set_marke(string marke) {
	this->Marke = marke;
};

void Auto::set_mod(string modell) {
	this->Modell = modell;
};

int Auto::get_id() {
	return this->ID;
};

string Auto::get_marke() {
	return this->Marke;
};

string Auto::get_mod() {
	return this->Modell;
};

Auto::~Auto() {};