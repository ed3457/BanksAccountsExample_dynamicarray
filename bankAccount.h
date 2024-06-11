#pragma once
#include <iostream>
#include <string>
using namespace std; 
class BankAccount
{
private:
	float balance; 
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

