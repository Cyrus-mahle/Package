#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"
#include"TwoDayPackage.h"
#include<string>
#include<iostream>
using namespace std;
/*
*@Author :Nyakama Mahle
*@Date   :2022/10/03
*@Description :
*/
class OverNightPackage : public Package
{
private:
	double overNightDeliveryFee;
public:

	OverNightPackage(string , string , string , string ,string ,string ,string , string , string ,string ,double , double , double );

	double calculateCost();
	double getOvernightDeliveryFee()const;
	void setOverNightDeliveryFee(double);

};

#endif
