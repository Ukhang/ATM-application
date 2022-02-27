#include <iostream>
using namespace std;

// create a method
void showMenu() {
	cout << "||||||||||||||||||||||| MENU |||||||||||||||||||||" << endl;
	cout << " " << endl;
	cout << "||| 1 |||. Check balance " << endl;
	cout << "||| 2 |||. Deposite " << endl;
	cout << "||| 3 |||. Withdraw" << endl;
	cout << "||| 4 |||. Exit " << endl;
	cout << " " << endl;
	cout << "||||||||||||||||||||||| MENU |||||||||||||||||||||" << endl;
}
int main() {
	int option;
	double balance = 500;

	do {
		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls");

		switch (option) {
		case 1:
			cout << "||| Balance is: " << balance << " $ " << endl;
			cout << " " << endl;
			break;
		case 2:
			double depositeAmount;
			cout << "||| Deposite amount: ";
			cin >> depositeAmount;
			balance += depositeAmount; // balance = balance + deposite
			break;
		case 3:
			double withdrawAmount;
			cout << "||| Withdraw amount: ";
			cin >> withdrawAmount;
			if (withdrawAmount <= balance) {
				balance -= withdrawAmount; // balance = balance - withdrawAmount
			}
			else {
				cout << "||| Not enough money";
				balance += withdrawAmount; // balance = balance + withdrawAmount
			}
			break;
		}
	} while (option != 4);

	return 0;
}