#include <iostream>

using namespace std;

class complex
{
private:
	double real;
	double imaginary;
public:
	complex(double a, double b);
	complex();
	void set();
	double r()const;
	double i()const;
	void print(std::ostream&) const;
	complex sum(complex&);
	complex sub(complex&);
	complex mult(int &) const;
	complex div(int &) const;
	complex (const complex&);
	complex operator*(const complex&)const;
	complex operator/(const complex&)const;
	bool operator==(const complex&);
	complex operator=(const complex&);
	complex operator+=(const complex&);
	complex operator-=(const complex&);
	complex operator*=(const complex&);
	complex operator/=(const complex&);
	friend ostream& operator<<(ostream&, complex&);
	friend istream& operator>>(istream&, complex&);
};
