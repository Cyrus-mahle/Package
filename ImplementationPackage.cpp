#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"
#include"OverNightPackage.h"
/*
*@Author :Nyakama Mahle
*@Date   :2022/10/03
*@Description :
*/
Package :: Package(){
	
	senderName = "";
	senderAddress = "";
	senderCity = "";
	senderState = "";
	senderZIP = "";
	recipientName = "";
	recipientAddress ="";
	recipientCity ="";
	recipientState ="";
	recipientZIP ="";
	double weight = 0.0 ;
	double costperounce = 0.0 ;

}

Package :: Package(string senderName_, string senderAddress_, string senderCity_, string
	senderState_, string senderZIP_, string recipientName_, string recipientAddress_, string
	recipientCity_, string recipientState_, string recipientZIP_, double weight_, double cost)
{
	senderName = senderName_;
	senderAddress = senderAddress_;
	senderCity = senderCity_;
	senderState = senderState_;
	senderZIP = senderZIP_;
	recipientName = recipientName_;
	recipientAddress = recipientAddress_;
	recipientCity = recipientCity_;
	recipientState = recipientState_;
	recipientZIP = recipientZIP_;

	if (weight_ > 0.0 && cost > 0.0)
	{
		weight = weight_;
		costperounce = cost;
	}
	else
	{
		weight = 0.0;
		costperounce = 0.0;
	}

}

void Package :: setSenderName(string senderName_)
{
	senderName = senderName_;
}
string Package :: getSenderName()const 
{
	return senderName;
}

void Package :: setSenderAddress(string senderAddress_)
{
	senderAddress = senderAddress_ ;
}
string Package :: getSenderAddress()const
{
	return senderAddress;
}

void Package :: setSenderCity(string senderCity_)
{
	senderCity = senderCity_;
}

string Package :: getSenderCity()const
{
	return senderCity;
}

void Package :: setSenderState(string senderState_)
{
	senderState = senderState_;
}
string Package :: getSenderState()const
{
	return senderState;
}

void Package :: setSenderZIP(string senderZIP_)
{
	senderZIP = senderZIP_;
}
string Package :: getSenderZIP()const
{
	return senderZIP;
}

void Package :: setRecipientName(string recipientName_)
{
	recipientName = recipientName_;
}
string Package :: getRecipientName()const
{
	return recipientName;
}

void Package :: setRecipientAddress(string recipientAddress_)
{
	recipientAddress = recipientAddress_;
}
string Package :: getRecipientAddress()const
{
	return recipientAddress;
}

void Package :: setRecipientCity(string recipientCity_)
{
	recipientCity = recipientCity_;
}
string Package :: getRecipientCity()const
{
	return recipientCity;
}

void Package :: setRecipientState(string recipientState_)
{
	recipientState = recipientState_;
}
string Package :: getRecipientState()const
{
	return recipientState;
}

void Package :: setRecipientZIP(string recipientZIP_)
{
	recipientZIP = recipientZIP_;
}
string Package :: getRecipientZIP()const
{
	return recipientZIP;
}

void Package :: setWeight(double weight_)
{
	weight = (weight_ < 0.0) ? 0.0 : weight_;
}
double Package :: getWeight()const
{
	return weight;
}

void Package :: setCostPerOunce(double cost)
{
	costperounce = (cost < 0.0) ? 0.0 : cost;
}

double Package :: getCostPerOunce()const
{
	return costperounce;
}

 double Package :: calculateCost()
{
	double result;

	result = weight * costperounce;

	return result;
}


// Implementation of TwoDayPackage

TwoDayPackage::TwoDayPackage(string senderName_, string senderAddress_, string senderCity_, string
	senderState_, string senderZIP_, string recipientName_, string recipientAddress_, string
	recipientCity_, string recipientState_, string recipientZIP_, double weight_, double cost, double deliveryFee)
	
	:Package(senderName_, senderAddress_, senderCity_, senderState_, senderZIP_, recipientName_,
		recipientAddress_, recipientCity_, recipientState_, recipientZIP_, weight_, cost)
{
	setTwoDayDeliveryFee(deliveryFee);

}

double TwoDayPackage::getTwoDayDeliveryFee()const
{
	return twoDayDeliveryFee;
}
void TwoDayPackage::setTwoDayDeliveryFee(double deliveryFee)
{
	twoDayDeliveryFee = deliveryFee;
}

double TwoDayPackage::calculateCost()
{
	double result;
	result = Package::calculateCost() + twoDayDeliveryFee;
	return result;
}

// implementation of overnightPackage

OverNightPackage::OverNightPackage(string senderName_, string senderAddress_, string senderCity_, string
	senderState_, string senderZIP_, string recipientName_, string recipientAddress_, string
	recipientCity_, string recipientState_, string recipientZIP_, double weight_, double cost, double deliveryFee)
	
	:Package(senderName_, senderAddress_, senderCity_, senderState_, senderZIP_, recipientName_,
		recipientAddress_, recipientCity_, recipientState_, recipientZIP_, weight_, cost)
{
	setOverNightDeliveryFee(deliveryFee);
}

double OverNightPackage::getOvernightDeliveryFee()const
{
	return overNightDeliveryFee;
}
void OverNightPackage::setOverNightDeliveryFee(double deliveryFee)
{
	overNightDeliveryFee = deliveryFee;
}

double OverNightPackage::calculateCost()
{
	double result;
	result = (getCostPerOunce() + overNightDeliveryFee) * getWeight();
	return result;
}

