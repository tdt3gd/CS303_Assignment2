#include "Project2.h"
using namespace std;

int main() {

/*	Professional a();
	Nonprofessional e();
	*/
	char user_menu_choice = 0;
	user_menu_choice = menu();
	if (user_menu_choice != 'Q' or user_menu_choice != 'q') {
		std::cout << "Is Employee Professional ('P') or Non_Proffesional ('N')\n";
		std::cout << "\n";
		std::cin >> user_menu_choice;
	}
	return 0;
};