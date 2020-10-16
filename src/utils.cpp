#include "utils.h"

namespace KP{



	//TODO 5 pts define function
	/**
	 * counts and returns the number of people with the name personname in fvec
	 * @param prsnvec: a vector that holds person structs
	 *        pname: a persons name
	 * @return the number people with the name pname
	 */
	int getcount(std::vector<person> &prsnvec,std::string &pname){
		int count = 0;
		for (person p: prsnvec){
			if (p.name.compare(pname) == 0){
				count += 1;
			}
		}
		return count;
	}


	//TODO 5 pts define function
	/**
	 * 	asks the user for a name, reads it in and then returns it
	 * @param none
	 * @return the name the user entered
	 */
	std::string getonename(){
		std::cout << "What is your name?" << std::endl;
		std::string name;
		std::cin >>name;
		return name;
	}

	//TODO 10 pts define function
	/**
	 * tries to open file fn, read 1 line from it, and return this line
	 * @param fnme  filename where a name should be, file may not be present
	 * @return the contents of the file, or an empty string if file not found
	 */
	std::string readfile(const std::string &fnme){
		std::ifstream file;
		file.open(fnme);
		std::string line;
		getline(file,line);
		//file.close();
		return line;

	}

	//TODO 10 pts create a function
	/**
	 * tries to open file fnme, write data to it
	 * @param data what to write to the file
	 * @param fnme  filename where a name should be, file may not be present
	 * @return true if it worked, false otherwise
	 */
	bool writefile(std::string &data, const std::string &fnme){
		std::ofstream file;
		file.open(fnme);
		if (!file.is_open()){
			return false;
		}

		file << data <<"\n";
		return true;
	}
}
