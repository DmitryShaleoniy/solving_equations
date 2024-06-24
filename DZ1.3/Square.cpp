#include "Square.h"

//Square::Square(int p_a, int p_b, int p_c): 
//	m_a(p_a),
//	m_b(p_b),
//	m_c(p_c)
//{}

void Square::root() {
	double Disc = pow(m_b, 2) - (4 * m_a * m_c);
	m_res[0] = (-m_b + sqrt(Disc)) / (2 * m_a);
	m_res[1] = (-m_b - sqrt(Disc)) / (2 * m_a);
}

ostream& operator<<(ostream& ost, const Square& p_ar) {
	cout << p_ar.m_a << "*x^2 + " << p_ar.m_b << "*x + " << p_ar.m_c << endl;
	return ost;
}

istream& operator>>(istream& in, Square& p_ar) {
	cout << "enter a value(a != 0): " << endl;
	cin >> p_ar.m_a;
	cout << "enter b value: " << endl;
	cin >> p_ar.m_b;
	cout << "enter c value: " << endl;
	cin >> p_ar.m_c;
	return in;
}

void Square::get() {
	cin >> *this;
}

void Square::put() {
	cout << *this << endl;
	root();
	cout << "x1 = " << m_res[0] << ", x2 = " << m_res[1] << endl;
}