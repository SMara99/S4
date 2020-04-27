#include "Kunde.h"
Kunde::Kunde() {
	this->Name = "";
	this->ID = 0;
};

Kunde::Kunde(string name, int id) {
	this->Name = name;
	this->ID = id;
};

string Kunde::get_name() {
	return this->Name;
};

int Kunde::get_id() {
	return this->ID;
};

void Kunde::set_name(string name) {
	this->Name = name;
};

void Kunde::set_id(int id) {
	this->ID = id;
};

Kunde::~Kunde() {};