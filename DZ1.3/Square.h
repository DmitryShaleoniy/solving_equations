#ifndef SQUARE_H
#define SQUARE_H

#include "Root.h"
#include <iostream>

using namespace std;
class Square : public Root {
private:
	int m_a;
	int m_b;
	int m_c;
	double m_res[2];
public:

	void root() override;

	friend ostream& operator<<(ostream& ost, const Square& p_ar);

	friend istream& operator>>(istream& in, Square& p_ar);

	void get() override;

	void put() override;
};

#endif