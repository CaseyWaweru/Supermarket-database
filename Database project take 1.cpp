// Database project take 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int choice;

void MENU();
void action();
void searchusers() {
	string searchuser,username, password, line;
	cout << "Input the name of the user you're looking for:\n";
	cin >> searchuser;


	ifstream searchingusers("details.txt");
	while(getline(searchingusers, line)){
		size_t found = line.find(searchuser);
		if (found != string::npos) {
			cout << "Username found at " << found<<'\n';
			cout << line << endl;
		}

	}
		

	
		
}


//Streams the user data from details.txt
void checkusers() {
	string line;
	ifstream gettingusers("details.txt");
	while (getline(gettingusers, line)) {
		cout << line << endl;
	}
	
}

void power() {
	int option;
	cout << "Would you like to log in as a sales clerk or an administrator?\n";
	cin >> option;

}

//Function that lets the administrator input users and their passwords
void addusers() {
	string username, password;
	cout << "Put in the new user's name\n";
	cin >> username;
	cout << "Put in their password\n";
	cin >> password;

	ofstream addingusers("details.txt", ios::app);
	addingusers << username << ", " << password << endl;


}
int main()
{
	

	MENU();		//Provides the user with a list of options
	action();	//Decides what action to take depending on the user's choice

	
	system("pause");
    return 0;
}
void MENU() {
	
	cout << "Do you want to:(Pick the number of the action you would like to choose)\n1.sell\n2.view sales reports\n3.add users\n 4.Check users\n5.Search for a user\n";



}
void action()
{
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "You haven't done this yet vro\n";
		break;
	case 2:
		cout << "You haven't done this yet vro\n";
		break;
	case 3:
		addusers();		//Refers to the function add users
		break;
	case 4:
		checkusers();
		break;
	case 5:
		searchusers();
		break;
	}

	

	
}


	