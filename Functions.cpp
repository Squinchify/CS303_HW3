#include "FUNCTIONS.h"

void printMap(map<string, string> stateDataMap)
{
	//for loop to run through the map and output the pairs
	for (map<string, string>::const_iterator it = stateDataMap.begin();
		it != stateDataMap.end(); ++it)
	{
		cout << "State, Capital: " << it->first << ", " << it->second << endl;
	}
}

void showCapital(map<string, string> stateDataMap, string stateName)
{
	map<string, string>::const_iterator it = stateDataMap.find(stateName);
	//if unable to find the stateName within stateDataMap error message will display
	if (it == stateDataMap.end())
	{
		cout << stateName << " is not found within stateDataMap" << endl;
	}
	//if found, display the second pair which is the capital of stateDataMap
	else
	{
		cout << "The capital of " << stateName << " is: " << it->second << endl;
	}
}