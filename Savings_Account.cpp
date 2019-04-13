#include "Savings_Account.h"
#include<iostream>
using namespace std;

Savings_Account::Savings_Account()

	:int_rate{3.0} {
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::deposit(double amount){
	
	
cout<<"savings account deposit called with "<<amount<<endl;
	
	
}

void Savings_Account::withdraw(double amount){
	
	
	cout<<"savings account called with"<<amount<<endl;
	
	
}