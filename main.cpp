#include <iostream>
#include <complex>
using namespace std;
int main() {
	string act;
	cout << "What do you want to do? (1.math operation, 2.trigonometric function, 3.trig and exp form) ";
	cin >> act;
	if(act == "1") {
		float a, b, c, d;
		string oper;
		cin >> a >> b;
		complex<float>z(a, b);
		cin >> oper;
		cin >> c >> d;
		complex<float>z1(c, d);
		if(oper == "+") {
			complex<float>z2;
			z2 = z+z1;
			float imag = z2.imag();
				float real = z2.real();
				if(imag > 0) {
					cout << real << "+" << imag << "i";
				}
				else if(imag == 0) {
					cout << real;
				}
				else if(imag < 0) {
					cout << real << imag << "i";
				}
				else if(real == 0) {
					cout << imag << "i";
				}
		}
		else if(oper == "-") {
			complex<float>z2;
			z2 = z-z1;
			float imag = z2.imag();
				float real = z2.real();
				if(imag > 0) {
					cout << real << "+" << imag << "i";
				}
				else if(imag == 0) {
					cout << real;
				}
				else if(imag < 0) {
					cout << real << imag << "i";
				}
				else if(real == 0) {
					cout << imag << "i";
				}
		}
		else if(oper == "*") {
			complex<float>z2;
			z2 = z*z1;
			float imag = z2.imag();
				float real = z2.real();
				if(imag > 0) {
					cout << real << "+" << imag << "i";
				}
				else if(imag == 0) {
					cout << real;
				}
				else if(imag < 0) {
					cout << real << imag << "i";
				}
				else if(real == 0) {
					cout << imag << "i";
				}
		}
		else if(oper == "/") {
			if((c&&d) == 0) {
				cout << "undefined";
			}
			else {
				complex<float>z2;
				z2 = z/z1;
				float imag = z2.imag();
				float real = z2.real();
				if(imag > 0) {
					cout << real << "+" << imag << "i";
				}
				else if(imag == 0) {
					cout << real;
				}
				else if(imag < 0) {
					cout << real << imag << "i";
				}
				else if(real == 0) {
					cout << imag << "i";
				}
			}
		}
		else if(oper == "^") {
			if((a&&b&&c&&d) == 0) {
				cout << "undefined";
			}
			else {
				complex<float>z2;
				z2 = pow(z, z1);
				float imag = z2.imag();
				float real = z2.real();
				if(imag > 0) {
					cout << real << "+" << imag << "i";
				}
				else if(imag == 0) {
					cout << real;
				}
				else if(imag < 0) {
					cout << real << imag << "i";
				}
				else if(real == 0) {
					cout << imag << "i";
				}
			}
		}
		else {
			cout << "Wrong operator!";
		}
	}
	else if(act == "2") {
		string trig_func;
		float a, b;
		const float e = 2.718281828459045;
		complex<float>one(1.0, 0);
		complex<float>two(2.0, 0);
		complex<float>iz(0, 1.0);
		cin >> trig_func >> a >> b;
		complex<float>z(a, b);
		if(trig_func == "sin") {
			complex<float>z2;
			z2 = (pow(e, (iz*z))-pow(e, (-(iz*z))))/(two*iz);
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else if(trig_func == "cos") {
			complex<float>z2;
			z2 = (pow(e, (iz*z))+pow(e, (-(iz*z))))/two;
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else if(trig_func == "tan") {
			complex<float>z2;
			z2 = ((pow(e, (iz*z))-pow(e, (-(iz*z))))/(two*iz))/((pow(e, (iz*z))+pow(e, (-(iz*z))))/two);
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else if(trig_func == "cot") {
			complex<float>z2;
			z2 = ((pow(e, (iz*z))+pow(e, (-(iz*z))))/two)/((pow(e, (iz*z))-pow(e, (-(iz*z))))/(two*iz));
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else if(trig_func == "sec") {
			complex<float>z2;
			z2 = one/((pow(e, (iz*z))+pow(e, (-(iz*z))))/two);
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else if(trig_func == "csc") {
			complex<float>z2;
			z2 = one/((pow(e, (iz*z))-pow(e, (-(iz*z))))/(two*iz));
			float imag = z2.imag();
			float real = z2.real();
			if(imag > 0) {
				cout << real << "+" << imag << "i";
			}
			else if(imag == 0) {
				cout << real;
			}
			else if(imag < 0) {
				cout << real << imag << "i";
			}
			else if(real == 0) {
				cout << imag << "i";
			}
		}
		else {
			cout << "Wrong function!";
		}
	}
	else if(act == "3") {
		string form;
		float a, b;
		cin >> form >> a >> b;
		complex<float>z(a, b);
		float abs_value = abs(z);
		float argument = arg(z);
		if(form == "trig") {
			cout << abs_value << "*(cos " << argument << "+i sin " << argument << ")"; 
		}
		else if(form == "exp") {
			cout << abs_value << "*e^(" << argument << "i)"; 
		}
		else {
			cout << "Wrong input!";
		}
	}
	else {
		cout << "Wrong action!";
	}
	return 0;
}