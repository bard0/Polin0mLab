#pragma once

#include <iostream>
#include "List.h"


List::List() {
	h = NULL;
}

void List::add(int data, int degree, int pos) {
	pos = pos - 1;
	Monom *t = h, *a;
	int i = 0;
	
	while ((t->GetNext() != NULL) && (i < pos - 1)) {
		t = t->GetNext();
		i++;
	};
	a = new Monom(data, degree, t->GetNext());	
	t->SetNext(a);
		
	
}

void List::addLast(int data, int degree) {

		Monom *t = h;
		while (t->GetNext() != NULL)
			t = t->GetNext();
		t->SetNext(new Monom(data, degree, NULL));
		t = t->GetNext();
		
	
}

void List::addFirst(int data, int degree) {
	Monom *t = h;
	Monom *a;
	if  (h == NULL) {
		h = new Monom(data, degree, NULL);

	}
	else {
		a = new Monom(h->GetData(), h->GetDegree(), h->GetNext());
		h->SetData(data);
		h->SetDegree(degree);
		a->SetNext(t->GetNext());
		t->SetNext(a);
	}
}

void List::DelFirst() {
	Monom *t = h, *a;
	a = t;
	t = t->GetNext();
	h = t;
	delete a;
 }

void List::Del(int i) {
	Monom *t = h;
	Monom *a;
	int j = 0;

	while (j < i - 1) {
		i++;
		t = t->GetNext();
	}
	a = t->GetNext();
	t->SetNext(t->GetNext()->GetNext());
	delete a;
	int len = GetLen() - 1;
	SetLen(len);
}

void List::DelLast() {
	Monom *a, *t = h;
	while (t->GetNext()->GetNext() != NULL) {
		t = t->GetNext();
	}
	a = t->GetNext();
	t->SetNext(NULL);
	delete a;
}

void List::DelAll() {
	Monom *t = h;
	int i = 0;
	while (i < GetLen()-1) {
		i++;
		DelLast();
	}

}

int List::power() {
	Monom* a = h;
	int max = 1;
	int max_ = 1;
	while (a) {
		if (a->GetData() > max)
		{
			max = a->GetData();
		}
		a = a->GetNext();
	}
	while ((max /= 10) > 0) max_++;
	int len = 14 + max;
	return len;
}

char **List::print() {
	Monom* t = h;
	Monom* a = h;
	char TData, TDegreeX, TDegreeY, TDegreeZ;
	int len_ = 1;
	int _len = GetLen();
	char **pol = new char*[_len];
	for (int i = 0; i < GetLen(); i++) {
		pol[i] = new char[power()];
	}
	for (int i = 0; i < GetLen(); i++) {
		TDegreeX = t->GetDegree() / 100 + '0';
		TDegreeY = t->GetDegree() / 10 - int(t->GetDegree() / 100) * 10 + '0';
		TDegreeZ = t->GetDegree() % 10 + '0';
		if (t->GetData() < 10) {
			TData = t->GetData() + '0';
			char mon1[15] = { TData, '*', 'x', '^', TDegreeX, 'y', '^', TDegreeY, 'z', '^', TDegreeZ,' ','+', ' ' };
			strcpy(pol[i], mon1);
		}
		else {
			int _dat = t->GetData();
			while ((_dat /= 10) > 0) len_++;
			char *dat = new char[len_];
			itoa(t->GetData(), dat, 10);
			char mon2[14] = { '*', 'x', '^', TDegreeX, 'y', '^', TDegreeY, 'z', '^', TDegreeZ, ' ','+', ' ' };
			strcpy(pol[i], dat);
			strcat(pol[i], mon2);
		}
		t = t->GetNext();
	};
	for (int i = 0; i < power(); i++) {
		if (pol[_len - 1][i] == '+') {
			pol[_len - 1][i] = ' ';
		}
	}
	return pol;
}

bool List::IsEmpty() {
	Monom* t = h;
	bool flag = true;
	while (t) {
		if (t != NULL) {
			flag = false;
			break;
		}
		t = t->GetNext();
	}
	return flag;
}

void List::insert(int data, int degree) {
		Monom* t = h;
		int pos = 0;
		int _dat = 0;
		int len = 0;
	if (IsEmpty()) {
		addFirst(data, degree);
		SetLen(1);
	} else 
	{
			if (data >= t->GetData() && degree >= t->GetDegree())
			{
				addFirst(data, degree);	
				len=GetLen();
				SetLen(++len);
			}
			else if (data < t->GetData() && degree >= t->GetDegree())
			{
				addFirst(data, degree);
				len = GetLen();
				SetLen(++len);
			}
			else {
				addLast(data, degree);
				while (degree < t->GetDegree()) {
					pos++;
					t = t->GetNext();
				}
				add(data, degree, pos + 1);
				DelLast();
				len = GetLen();
				SetLen(++len);
			}
		
	}

}

int List::GetCurrData(int i) {
	Monom* t = h;
	int i_ = 1;
	while (i_ < i+1) {
		i_++;
		t = t->GetNext();
	}
	return t->GetData();
}

int List::GetCurrDegree(int i) {
	Monom* t = h;
	int i_ = 1;
	while (i_ < i+1) {
		i_++;
		t = t->GetNext();
	}
	return t->GetDegree();
}

int List::GetLen() {
	return len;
}

void List::SetLen(int _len) {
	len = _len;
}

void List::SetCurrDegree(int i, int degree) {
	Monom* t = h;
	int i_ = 1;
	while (i_ < i) {
		i_++;
		t = t->GetNext();
	}
	t->SetDegree(degree);
}

void List::SetCurrData(int i, int data) {
	Monom* t = h;
	int i_ = 1;
	while (i_ < i+1) {
		i_++;
		t = t->GetNext();
	}
	t->SetData(data);
}

bool List::isContain(int degree) {
	Monom* t = h;
	bool flag = false;
	while (t) {
		if (t->GetDegree() == degree) {
			flag = true;
			break;
		}
		t = t->GetNext();
	}
	return flag;
}


List *sum(List *pol1, List *pol2) {
	List *res = new List;
	List *ptr = new List;
	int i = 0, j = 0;
		for ( i = 0; i < pol1->GetLen(); i++) {
			for (j = 0; j < pol2->GetLen(); j++)
			{
				if (pol1->GetCurrDegree(i) == pol2->GetCurrDegree(j)) {
					res->insert(pol1->GetCurrData(i) + pol2->GetCurrData(i), pol1->GetCurrDegree(i));
				}
				else
				{
					if (!res->isContain(pol1->GetCurrDegree(i)))
					{
						res->insert(pol1->GetCurrData(i), pol1->GetCurrDegree(i));
					}
				}
			}
				
		}
		for (i = 0; i < pol2->GetLen(); i++) {
			for (j = 0; j < res->GetLen(); j++) {
				if ((res->GetCurrDegree(j) != pol2->GetCurrDegree(i))&(!ptr->isContain(pol2->GetCurrDegree(i)))) {
					ptr->insert(pol2->GetCurrData(i), pol2->GetCurrDegree(i));
					
				}
				
			}
			
		}
		for (i = 0; i < ptr->GetLen(); i++)
		{
			res->insert(ptr->GetCurrData(i), ptr->GetCurrDegree(i));
		}
		delete ptr;
		for (i = 0; i < res->GetLen(); i++) {
			if (res->GetCurrData(i) == 0) {
				res->Del(i);
			}
		}
		return res;
}

List *raz(List *pol1, List *pol2) {
	List *res = new List;
	List *ptr = new List;
	int i = 0, j = 0;
	for (i = 0; i < pol1->GetLen(); i++) {
		for (j = 0; j < pol2->GetLen(); j++)
		{
			if (pol1->GetCurrDegree(i) == pol2->GetCurrDegree(j)) {
				res->insert(pol1->GetCurrData(i) - pol2->GetCurrData(i), pol1->GetCurrDegree(i));
			}
			else
			{
				if (!res->isContain(pol1->GetCurrDegree(i)))
				{
					res->insert(pol1->GetCurrData(i), pol1->GetCurrDegree(i));
				}
			}
		}

	}
	for (i = 0; i < pol2->GetLen(); i++) {
		for (j = 0; j < res->GetLen(); j++) {
			if ((res->GetCurrDegree(j) != pol2->GetCurrDegree(i))&(!ptr->isContain(pol2->GetCurrDegree(i)))) {
				ptr->insert(pol2->GetCurrData(i), pol2->GetCurrDegree(i));

			}

		}

	}
	for (i = 0; i < ptr->GetLen(); i++)
	{
		res->insert(ptr->GetCurrData(i), ptr->GetCurrDegree(i));
	}
	delete ptr;
	for (i = 0; i < res->GetLen(); i++) {
		if (res->GetCurrData(i) == 0) {
			res->Del(i);
		}
	}
	return res;
}

List *pro(List *pol1, List *pol2) {
	List *res = new List;
	List *ptr = new List;
	int i = 0, j = 0;
	for (i = 0; i < pol1->GetLen(); i++) {
		for (j = 0; j < pol2->GetLen(); j++)
		{
			if (pol1->GetCurrDegree(i) == pol2->GetCurrDegree(j)) {
				res->insert(pol1->GetCurrData(i) * pol2->GetCurrData(i), pol1->GetCurrDegree(i));
			}
			else
			{
				if (!res->isContain(pol1->GetCurrDegree(i)))
				{
					res->insert(pol1->GetCurrData(i), pol1->GetCurrDegree(i));
				}
			}
		}

	}
	for (i = 0; i < pol2->GetLen(); i++) {
		for (j = 0; j < res->GetLen(); j++) {
			if ((res->GetCurrDegree(j) != pol2->GetCurrDegree(i))&(!ptr->isContain(pol2->GetCurrDegree(i)))) {
				ptr->insert(pol2->GetCurrData(i), pol2->GetCurrDegree(i));

			}

		}

	}
	for (i = 0; i < ptr->GetLen(); i++)
	{
		res->insert(ptr->GetCurrData(i), ptr->GetCurrDegree(i));
	}
	delete ptr;
	for (i = 0; i < res->GetLen(); i++) {
		if (res->GetCurrData(i) == 0) {
			res->Del(i);
		}
	}
	return res;
}

		


