#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"Package.h"
#include<string>
#include<iostream>
using namespace std;
/*
*@Author :Nyakama Mahle
*@Date   :2022/10/03
*@Description :
*/
class TwoDayPackage : public Package
{
private:
	double twoDayDeliveryFee;
public:
	TwoDayPackage(string , string , string , string ,string ,string ,string , string , string ,string ,double , double , double );

	double getTwoDayDeliveryFee()const;
	void setTwoDayDeliveryFee(double);
	double calculateCost();
};

#endif
