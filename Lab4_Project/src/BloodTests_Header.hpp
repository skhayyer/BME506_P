/*
 * BloodTests_Header.hpp
 *
 *  Created on: Nov 16, 2013
 *      Author: dustindopsa
 */

#ifndef BLOODTESTS_HEADER_HPP_
#define BLOODTESTS_HEADER_HPP_

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class BloodTests {
	private:
		// may not use any private things...
	protected:
		// date?
		char bloodType;
		char sex;
		char diabetic;
		char cholesterol;
		struct commentStruct {
			string comment;
			int numID; // ID number of the individual making the comment? (not sure if 'int' will be best...)
		};
	public:
		void getInfo(); // main get info function that calls other specific get info's
		void printInfo(); // may or may not specify this for each derived class...
		void addComment();
		// don't know if any functions really need to be defined here...
};

class BloodCount : public BloodTests {
	private:
		int numRBC;
		int numWBC;
		int hemoLevel;
	public:
		int getRBC();
		int getWBC();
		int getHEMO();
		void inputData();
		void appendData(); // not exactly sure what this means yet... may get moved to parent class
		void checkResults();
		void print(); // will likely be called by the "append" function
};
#endif /* BLOODTESTS_HEADER_HPP_ */
