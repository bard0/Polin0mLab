#include <iostream>
#include "Monom.h"

class List {
	Monom *h;
	int len;
	
public:
	List();

	bool IsEmpty();

	void insert(int data, int degree);
	void add(int data, int degree, int pos);
	void addLast(int data, int degree);
	void addFirst(int data, int degree);

	void DelFirst();
	void DelLast();
	void Del(int i);
	void DelAll();
	
	int GetLen();
	void SetLen(int _len);

	int GetCurrDegree(int i);
	int GetCurrData(int i);
	void SetCurrDegree(int i, int degree);
	void SetCurrData(int i, int data);

	bool isContain(int degree);

	friend List *sum(List *pol1, List *pol2);
	friend List *raz(List *pol1, List *pol2);
	friend List *pro(List *pol1, List *pol2);
	
};