#include <iostream>
#include <string>
#include <iomanip>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OverNightPackage.h"
using namespace std;
/*
*@Author :Nyakama Mahle
*@Date   :2022/10/03
*@Description :
*/

int main()
{
	OverNightPackage package1("Nyakama Mahle", " Fortgale Tulip Street 8 ", "Mthatha",
		"EC ", "5100", "Lisakhanya Mti", "22 Azalea Place", "Durban", "KZN",
		"4133", 13.00, 7.50, 6.10);
	TwoDayPackage package2("Lucas Nontuma", "31 Willow Street", "Eastlondon",
		"EC", "5700", "Kevin Owens ", "17 Protea Street", "Sandton", "JHB",
		"98763", 17.00, 2.05, 12.00);

	cout << endl;
	cout << "Package 1:\n";
	cout << "Sender        " << package1.getSenderName()   << "\n";
	cout << "             " << package1.getSenderAddress()<< "\n";
	cout << "              " << package1.getSenderCity()   << " " <<
		package1.getSenderState() << " " << package1.getSenderZIP() << "\n";
	cout << "\n";
	cout << "Recipient     " << package1.getRecipientName() << "\n";
	cout << "              " << package1.getRecipientAddress() << "\n";
	cout << "              " << package1.getRecipientCity() << " " <<
		package1.getRecipientState() << " " << package1.getRecipientZIP() << "\n";
	cout << "Cost          R " << package1.calculateCost() << "\n";


	cout << "\n\n";

	cout << "Package 2:\n";
	cout << "Sender        " << package2.getSenderName() << "\n";
	cout << "              " << package2.getSenderAddress() << "\n";
	cout << "              " << package2.getSenderCity() << " " <<
		package2.getSenderState() << " " << package2.getSenderZIP() << "\n";
	cout << "\n";
	cout << "Recipient     " << package2.getRecipientName() << "\n";
	cout << "              " << package2.getSenderAddress() << "\n";
	cout << "              " << package2.getRecipientCity() << " " <<
		package2.getRecipientState() << " " << package2.getRecipientZIP() << "\n";
	cout << "Cost          R " << package2.calculateCost() << "\n";


	system("pause");
	return 0;
}
