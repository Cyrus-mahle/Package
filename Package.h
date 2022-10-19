#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
#include<iostream>
using namespace std;
/*
*@Author :Nyakama Mahle
*@Date   :2022/10/03
*@Description :
*/
class Package
{ 
private:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	string senderZIP;
	string recipientName;
	string recipientAddress;
	string recipientCity;
	string recipientState;
	string recipientZIP;
	double weight;
	double costperounce;
	
public:
    Package();
	Package(string ,string, string , string ,string, string , string , string ,string , string , double, double );

	void setSenderName(string);
	string getSenderName()const;

	void setSenderAddress(string);
	string getSenderAddress()const;

	void setSenderCity(string);
	string getSenderCity()const;

	void setSenderState(string);
	string getSenderState()const;

	void setSenderZIP(string);
	string getSenderZIP()const;

	void setRecipientName(string);
	string getRecipientName()const;

	void setRecipientAddress(string);
	string getRecipientAddress()const;

	void setRecipientCity(string);
	string getRecipientCity()const;

	void setRecipientState(string);
	string getRecipientState()const;

	void setRecipientZIP(string );
	string getRecipientZIP()const;

	void setWeight(double );
	double getWeight()const;

	void setCostPerOunce(double);
	double getCostPerOunce()const;

	virtual double calculateCost();
};

#endif
