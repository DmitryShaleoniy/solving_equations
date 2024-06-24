#include "Linear.h"

void Linear::root() {
	m_res = (-1 * m_b) / (m_a);
}

ostream& operator<<(ostream& ost, const Linear& p_ar) {
	cout << p_ar.m_a << "*x + " << p_ar.m_b << endl;
	return ost;
}

istream& operator>>(istream& in, Linear& p_ar) {
	cout << "enter a value(a != 0): " << endl;
	cin >> p_ar.m_a;
	cout << "enter b value: " << endl;
	cin >> p_ar.m_b;
	return in;
}

void Linear::get() {
	cin >> *this;
}

void Linear::put() {
	cout << *this << endl;
	root();
	cout << "x = " << m_res << endl;
}