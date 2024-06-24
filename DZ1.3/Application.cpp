#include "Application.h"
#include "Square.h"
#include "Linear.h"
#include <iostream>

using namespace std;
void Application::run() {
	int key = 1;
	while (key != 3) {
		cout << "--------------- MENU ---------------" << endl;
		cout << "1. Вычислить корни квадратного уравнения" << endl;
		cout << "2. Вычислить корень линейного уравнения" << endl;
		cout << "3. Выход" << endl;
		cout << "------------------------------------" << endl;
		cin >> key;
		switch (key) {
		case 1: {
			p = new Square;
			p->get();
			p->put();
			delete p;
			break;
		}
		case 2: {
			p = new Linear;
			p->get();
			p->put();
			delete p;
			break;
		}
		}
	}
}