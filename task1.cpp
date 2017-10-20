// lab.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "lab.h"
#include<iostream>
using namespace std;


int fact::factorial(int n){
	if (n <= 1){
		return 1;
	}
	else {
		return n*factorial(n - 1);
	}
}
void main(){
	fact f;
	cout << f.factorial(5) << endl;
	cout << f.factorial(4) << endl;
}