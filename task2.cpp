// 2.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include "2.h"
#define max 5

using namespace std;

int stack::pop(){
	if (top == 0) return -1;
	return a[--top];
	}

int stack::push(int n){
	if (top == max) return 0;
	a[top++] = n;
	return n;
	}

bool stack::isempty(){
	if (top == 0){
		return true;
	}
}

void main(){
	stack s;
	s.push(3);
	s.pop();
	s.isempty();
}
