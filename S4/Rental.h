#pragma once
#include "Kunde.h"
#include "Auto.h"
#include <vector>

using namespace std;

class Rental{
private:
	vector<Auto> autos;
	vector<Kunde> clients;
public:
	~Rental();
	void add_client(Kunde new_client);
	void delete_client();
	void update_client();
	void add_auto();
	void delete_auto();
};

