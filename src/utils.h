/*
 * utils.h
 *
 *  Created on: Oct 16, 2020
 *      Author: zestra
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

namespace KP{
	const std::string FILENAME = "input.txt";
	struct person{
		std::string name;
	};


	//TODO 5 pts define function
	/**
	 * counts and returns the number of people with the name personname in fvec
	 * @param prsnvec: a vector that holds person structs
	 *        pname: a persons name
	 * @return the number people with the name pname
	 */
	int getcount(std::vector<person> &prsnvec,std::string &pname);


	//TODO 5 pts define function
	/**
	 * 	asks the user for a name, reads it in and then returns it
	 * @param none
	 * @return the name the user entered
	 */
	std::string getonename();

	//TODO 10 pts define function
	/**
	 * tries to open file fn, read 1 line from it, and return this line
	 * @param fnme  filename where a name should be, file may not be present
	 * @return the contents of the file, or an empty string if file not found
	 */
	std::string readfile(const std::string &fnme=FILENAME);

	//TODO 10 pts create a function
	/**
	 * tries to open file fnme, write data to it
	 * @param data what to write to the file
	 * @param fnme  filename where a name should be, file may not be present
	 * @return true if it worked, false otherwise
	 */
	bool writefile(std::string &data, const std::string &fnme=FILENAME);
}

#endif /* UTILS_H_ */
