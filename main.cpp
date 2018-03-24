/*******************************************************************************
* AUTHOR     : Sebastian Hooshmand
* STUDENT ID : 1047448
* ASIGN #6   : Nested If-Then-Else Statements
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/26/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/*******************************************************************************
* Nested If-Then-Else Statements
*-------------------------------------------------------------------------------
*	This program will output the largest of three floating point values
*-------------------------------------------------------------------------------
* INPUT:
*    first float value
*    second float value
*    third float value
*
*   OUTPUT:
* 	  largest float value
*******************************************************************************/
int main()
{
	/***************************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* --------------------------------------------------------------------------
	* PROGRAMMER    : Programmer's name
	* CLASS         : Student's Course
	* SECTION       : Class Days and Times
	* ASSIGN_NUM    : Lab Number (specific to this lab)
	* ASSIGN_NAME   : Title of the Lab
	***************************************************************************/
	const char PROGRAMMER []  = "Sebastian Hooshmand";
	const char CLASS[]        = "CS1A";
	const char SECTION []     = "MW: 8am-11:50am";
	const int  ASSIGN_NUM     = 6;
	const char ASSIGN_NAME[]  = "Nested If-Then-Else Statements";
	// variable declarations
	float firstFloat 	      = 0;
	float secondFloat		  = 0;
	float thirdFloat 		  = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  ASSIGN #" << setw(6)  << ASSIGN_NUM << ": " << ASSIGN_NAME;
	cout << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/***************************************************************************
	* INPUT - read's in the float values and decides which is the largest
	***************************************************************************/

	cout << "Value 1: ";
	cin  >> firstFloat;
	cin.ignore(1000, '\n');

	cout << "Value 2: ";
	cin  >> secondFloat;
	cin.ignore(1000, '\n');

	cout << "Value 3: ";
	cin  >> thirdFloat;
	cin.ignore(1000, '\n');

	/**************************************************************************
	* PROCESSING - <none>
	***************************************************************************/

	/**************************************************************************
	* OUTPUT - Largest value
	***************************************************************************/
	 if (firstFloat > secondFloat)
	{
			if (firstFloat > thirdFloat)
			{
			cout << endl;
			cout << "The largest value is the 1st value: ";
			cout << firstFloat;
			}
			else
			{
			cout << endl;
			cout << "The largest value is the 3rd value: ";
			cout << thirdFloat;
			}
	}
	else
	{

			if (secondFloat > thirdFloat)
			{
			cout << endl;
			cout << "The largest value is the 2nd value: ";
			cout << secondFloat;
			}
			else
			{
		    cout << endl;
		    cout << "The largest value is the 3rd value: ";
		    cout << thirdFloat;

	        }

	}


	return 0;
}
