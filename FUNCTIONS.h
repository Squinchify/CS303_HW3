#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <map>
using namespace std;

//function that will take stateDataMap and print out the contents
void printMap(map<string, string> stateDataMap);
//a function that will take an input, stateName, from the user and compare the value to stateDataMap to see if it exists
//if the value is found then it will output he Capital of the State the user entered
void showCapital(map<string, string> stateDataMap, string stateName);

#endif