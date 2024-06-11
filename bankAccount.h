#pragma once
#include <iostream>
#include <string>
using namespace std; 
class BankAccount
{
private:
	float balance=0.0; 
	string clientName;

public:
	void deposit(float b);

	float withdraw(float b);

	float getBalance();

	void setClientName(string n);

	string getClientName();

	BankAccount();
	BankAccount(float a, string n);


};

