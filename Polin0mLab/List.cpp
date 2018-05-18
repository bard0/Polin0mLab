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
	int len = GetLen() - 1;
	SetLen(len);
	
 }

void List::Del(int i) {
	Monom *t = h;
	Monom *a;
	int j = 0;

	while (j < i-1) {
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
	int len = GetLen() - 1;
	SetLen(len);
}

void List::DelAll() {
	Monom *t = h;
	int i = 0;
	int len = GetLen();
	if (GetLen() == 1){
		DelFirst();
	}
	else {
		while (i < len) {
			if (i != len-1) {
				i++;
				DelLast();
			}
			else
			{
				DelFirst();
				i++;
			}
		}
	}
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
				add(data, degree, pos+1);
				DelLast();
				len = GetLen();
				SetLen(len+2);
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
	while (i_ < i+1) {
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
	
	int i = 0, j = 0;
	for (i = 0; i < pol1->GetLen(); i++) {
		for (j = 0; j < pol2->GetLen(); j++)
		{
			if (pol1->GetCurrDegree(i) == pol2->GetCurrDegree(j)) {
				res->insert(pol1->GetCurrData(i) + pol2->GetCurrData(j), pol1->GetCurrDegree(i));
			}
		}
	}
				
	for (i = 0; i < pol1->GetLen(); i++) {
		if (!res->isContain(pol1->GetCurrDegree(i)))
		{
			res->insert(pol1->GetCurrData(i), pol1->GetCurrDegree(i));
		}

	}
				
	for (i = 0; i < pol2->GetLen(); i++) {
		if (!res->isContain(pol2->GetCurrDegree(i))) {
			res->insert(pol2->GetCurrData(i), pol2->GetCurrDegree(i));	
			}			
	}
			
	for (i = 0; i < res->GetLen(); i++) {
		if (res->GetCurrData(i) == 0) {
			if (i == 0) {
				res->DelFirst();
			}
			else if (i == res->GetLen()-1) {
				res->DelLast();
			}
			else {
				res->Del(i-1);
			}
		}
	}
		return res;
}

List *raz(List *pol1, List *pol2) {
	List *res = new List;

	int i = 0, j = 0;
	for (i = 0; i < pol1->GetLen(); i++) {
		for (j = 0; j < pol2->GetLen(); j++)
		{
			if (pol1->GetCurrDegree(i) == pol2->GetCurrDegree(j)) {
				res->insert(pol1->GetCurrData(i) - pol2->GetCurrData(j), pol2->GetCurrDegree(j));
			}
		}
	}

	for (i = 0; i < pol1->GetLen(); i++) {
		if (!res->isContain(pol1->GetCurrDegree(i)))
		{
			res->insert(pol1->GetCurrData(i), pol1->GetCurrDegree(i));
		}

	}

	for (i = 0; i < pol2->GetLen(); i++) {
		if (!res->isContain(pol2->GetCurrDegree(i))) {
			res->insert(pol2->GetCurrData(i), pol2->GetCurrDegree(i));
		}
	}

	for (i = 0; i < res->GetLen(); i++) {
		if (res->GetCurrData(i) == 0) {
			if (i == 0) {
				res->DelFirst();
			}
			else if (i == res->GetLen()) {
				res->DelLast();
			}
			else {
				res->Del(i);
			}
		}
	}
	return res;
}

List *pro(int k, List *pol) {
	List *res = new List;
	
	for (int i = 0; i < pol->GetLen(); i++) {
			res->insert(pol->GetCurrData(i) * k, pol->GetCurrDegree(i));
	}

	for ( int i = 0; i < res->GetLen(); i++) {
		if (res->GetCurrData(i) == 0) {
			if (i == 0) {
				res->DelFirst();
			}
			else if (i == res->GetLen() - 1) {
				res->DelLast();
			}
			else {
				res->Del(i);
			}
		}
	}
	return res;
}

		


