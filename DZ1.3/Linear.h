#ifndef LINEAR_H
#define LINEAR_H

#include "Root.h"
#include <iostream>

using namespace std;
class Linear : public Root {
private:
	int m_a;
	int m_b;
	double m_res;
public:
	void root() override;

	friend ostream& operator<<(ostream& ost, const Linear& p_ar);

	friend istream& operator>>(istream& in, Linear& p_ar);

	void get() override;

	void put() override;

	//~Linear() override = default;
};

#endif