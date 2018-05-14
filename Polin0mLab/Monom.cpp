#pragma once
#include <iostream>
#include "Monom.h"

Monom::Monom(int data = 0, int degree = -1, Monom* next = NULL) {
	data_ = data;
	degree_ = degree;
	next_ = next;
}

void Monom::SetData(int data) {
	data_ = data;
}

void Monom::SetDegree(int degree) {
	degree_ = degree;
}

void Monom::SetNext(Monom* next) {
	next_ = next;
}

Monom* Monom::GetNext(){
	return next_;
}

int Monom::GetData() {
	return data_;
}

int Monom::GetDegree() {
	return degree_;
}