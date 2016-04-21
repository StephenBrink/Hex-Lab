// HexRedo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	char num1[128];
	char num2[128];
	int num1temp[128];
	int num2temp[128];
	int num1size = 0;
	int num2size = 0;
	double num1dec = 0;
	double num2dec = 0;
	cout << "Enter a Hex#: ";
	cin.getline(num1, 128);
	
	for (int i = 0; i < 10; i++)
	{
		cout << num1[i] << "\a" << endl;
	}

	while (num1[num1size] != NULL)
	{
		cout << num1size << endl;
		num1size++;
	}
	
	cout << endl << num1size << endl;
	system("pause");

    return 0;
}

