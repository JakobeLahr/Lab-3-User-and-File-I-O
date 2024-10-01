
/*
	Jakobe Lahr
	Computer Science FA_24
	Due: 10/1/24
	Lab 3: Lab 3 is a program to take in and read a file with 4 numbers and spit
	out the mean and standard deviation of those numbers on a new document as well
	as take the user input of 4 numbers and spit out the mean and standard deviation
	of those as well.
*/

#include <fstream>
#include <iostream>
#include <string>
#include "StdMean.h"

int getInput(std::string nubName);
void printNumber(int number);

int main()
{
	std::cout << "We need you to provide 4 numbers." << std::endl;

	int number11 = getInput("first");
	int number22 = getInput("second");
	int number33 = getInput("third");
	int number44 = getInput("fourth");

	printNumber(number11);			//Changed the variable names so that it can run both process at the same time. 								
	printNumber(number22);			// number11 is refering to the user input numbers
	printNumber(number33);
	printNumber(number44);


	std::ifstream inFile;											// Input File
	inFile.open("inMeanStd.dat");									// open
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;
	inFile.close();													/// close  


	StatsCalc statsCalc;
	float mean1 = statsCalc.mean(number11, number22, number33, number44);
	float stddev1 = statsCalc.stddev(number11, number22, number33, number44);
	std::cout << "The mean of the numbers is: " << mean1 << std::endl;
	std::cout << "The standard deviation of the numbers is: " << stddev1 << std::endl;
	float mean2 = statsCalc.mean(number1, number2, number3, number4);
	float stddev2 = statsCalc.stddev(number1, number2, number3, number4);


	std::ofstream outFile;											// Output
	outFile.open("outMeanStd.dat");									// open 
	outFile << "The mean of the numbers is: " << mean2 << std::endl;
	outFile << "The standard deviation of the numbers is: " << stddev2 << std::endl;
	outFile.close();												// close


	return 0;
}

int getInput(std::string nubName)
{
	std::cout << "Please enter the " << nubName << " number: ";
	int input;
	std::cin >> input;
	return input;
}

void printNumber(int number)
{
	std::cout << "You entered: " << number << std::endl;
}