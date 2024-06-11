#include "bankAccount.h"

void BankAccount::deposit(float amount)
{
	balance += amount;
}

float BankAccount::withdraw(float amount)
{
	balance -= amount;
	return balance;
}

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::setClientName(string n)
{
	clientName = n;
}

string BankAccount::getClientName()
{
	return clientName;
}

BankAccount::BankAccount():BankAccount(0,"Not set yet")
{
}

BankAccount::BankAccount(float b, string n)
{
	deposit(b);
	setClientName(n);
}
