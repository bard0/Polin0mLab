#include <iostream>


class Monom {
	int data_, degree_;
	Monom* next_;
public:
	Monom(int data, int degree, Monom* next);
	void SetData(int data);
	int GetData();
	void SetDegree(int degree);
	int GetDegree();
	void SetNext(Monom* next);
	Monom* GetNext();
};

