#include <iostream>
#include "circularLinkedList.h"
#include <string>

using namespace std;

int main()
{
	int num;
	bool check = true;

	circularLinkedList<int> myList; //Create first list using default constructor

	//Prompt user for input.
	cout << "Enter a list ending in -999: " << endl;

	//While loop to create list based on user input. -999 denotes end of list.
	while (check)
	{
		cin >> num;
		cin.clear();
		cout << endl;

		if (num != -999)
		{
			myList.insertNode(num);
		}
		else
		{
			check = false;
		}
	}

	cout << "List 1: ";
	myList.print();
	cout << endl;

	cout << "Length List 1: ";
	myList.length();
	cout << endl;

	cout << "\nEnter the number to be searched: ";
	cin >> num;
	cout << endl;

	if (myList.search(num))
		cout << num << " found in the list.";
	else
		cout << num << " not in the list.";
	cout << endl;

	cout << "\nEnter the number to be deleted: ";
	cin >> num;
	cout << endl;

	myList.deleteNode(num); //delete number entered from list

	cout << "\nAfter deleting the node, List 1: ";
	myList.print();
	cout << endl;

	cout << "Length List 1: ";
	myList.length();
	cout << endl;

}