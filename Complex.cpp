#include <iostream>
using namespace std;

class Complex
{
private:
	int a; //phan thuc
	int b; //phan ao
public:
	Complex();
	Complex(int a, int b);
	Complex(const Complex &sp);
	~Complex();
	void setThuc(int a);
	int getThuc();
	void setAo(int b);
	int getAo();
// 	friend istream& operator >>(istream &is, Complex &sp);
// 	friend ostream& operator <<(ostream &os, Complex &sp);
	friend Complex operator +(Complex sp1, Complex sp2);
	friend Complex operator -(Complex sp1, Complex sp2);	
};

Complex::Complex()
{
	this->a = 0;
	this->b = 0;
}

Complex::Complex(int a, int b)
{
	this->a = a;
	this->b = b;
}
Complex::Complex(const Complex &sp)
{
	this->a = sp.a;
	this->b = sp.b;
}



// istream& operator >>(istream &is, Complex &sp)
// {
// 	cout << "\nPhan thuc: ";
// 	is>>sp.a;
// 	cout << "\nPhan ao: ";
// 	is>>sp.b;
// 	return is;
// }
// ostream& operator <<(ostream &os, Complex &sp)
// {
// 	os<<sp.a<<" + "<<sp.b<<"*i\n";
// 	return os;
// }

Complex operator +(Complex sp1, Complex sp2)
{
	Complex kq;
	kq.a = sp1.a + sp2.a;
	kq.b = sp1.b + sp2.b;
	return kq;
}
Complex operator -(Complex sp1, Complex sp2)
{
	Complex kq;
	kq.a = sp1.a - sp2.a;
	kq.b = sp1.b - sp2.b;
	return kq;
}

int main()
{
	Complex sp1, sp2, T;
	cout << "Nhap so phuc 1: ";
	cin>>sp1;
	cout << "\nNhap so phuc 2: ";
	cin>>sp2;
	cout << "\nSo phuc 1: " << sp1;
	cout << "\nSo phuc 2: " << sp2;
	T = sp1 + sp2;
	cout << "Tong hai so phuc la: " <<T;
	T = sp1 - sp2;
	cout << "Hieu hai so phuc la: " <<T;
	
	return 0;
}

