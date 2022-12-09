#include <iostream>
#include <map>
#include <string>
#include "FUNCTIONS.h"
using namespace std;

int main()
{
	//string value used to test showCapital function
	string enterState;
	//map declaration that will store pairs stateName, capitalName
	map<string, string> stateDataMap;
	//Declaring statements add the pairs to stateDataMap
	stateDataMap["Nebraska"] = "Lincoln";
	stateDataMap["New York"] = "Albany";
	stateDataMap["Ohio"] = "Columbus";
	stateDataMap["California"] = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"] = "Austin";
	//printing contents of stateDataMap
	printMap(stateDataMap);
	//Changing California's capital from Sacramento to Los Angeles
	stateDataMap["California"] = "Los Angeles";
	cout << "From what state do you want to see the capital of: ";
	//utilizing getline in case they enter a state with two words
	getline(cin, enterState);
	showCapital(stateDataMap, enterState);

	return 0;
}