// BINARYTREEVETODPRINT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Tree.h"
using namespace std;
//Binarnoe Derevo
//+O(log n )
//-O(log n )
//print(O(n))
//Search = O(log n )
//1 or 2 Node List
//+O(1 = const)
//-O(1 = const)
//Search = O(n = lineynaya)
// Arrays
//+O(n = lineynaya)
//-O(n = lineynaya)
//po indexy zvernenya - O(1 = const)
int power(int num, int step) 
{
	if (step == 1) 
	{
		return num;
	}
	return num * power(num, step - 1);
}
int main()
{


}