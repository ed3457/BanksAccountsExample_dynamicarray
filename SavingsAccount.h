#pragma once
#include "bankAccount.h"
class SavingsAccount :public BankAccount
{
private:
	float interest;

public:
	void setInterest(float i);

	float getInterest();

	SavingsAccount();

	SavingsAccount(float b, string n, float i);

	float withdraw(float a); // override 
};

