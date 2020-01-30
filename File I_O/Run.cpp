#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::fstream file;

	// Input stream class to 
	// operate on files. 
	std::ifstream ifile("CPP_Reference.txt", std::ios::in);

	// Output stream class to 
	// operate on files. 
	std::ofstream ofile("CPP_Enhanced_Reference.txt", std::ios::out | std::ios::app);

	// check if file exists 
	if (!ifile.is_open()) {

		// file not found (i.e, not opened). 
		// Print an error message. 
		std::cout << "file not found";
	}
	else {
		// then add more lines to 
		// the file if need be 
		ofile << ifile.rdbuf();
	}
	std::string word;

	// opening file 
	file.open("file2.txt");

	// extracting words form the file 
	while (file >> word) {

		// displaying content of 
		// destination file   
		std::cout << word << " ";
	}

	return 0;
	//std::fstream ifile, ofile;
	//std::string line, ifilename, ofilename;

	//ifilename = "CPP_Reference.txt";
	//ofilename = "CPP_Enhanced_Reference.txt";
	//ifile.open(ifilename.c_str());
	//ofile.open(ofilename.c_str());
	//int key_words = 0;
	//while (getline(ifile,line))
	//{
		//bool key = true;
		//while (key == true)
		//{
			//ofile << line;
			//key_words++;
			//if (line.find("Reserved") )
			//{
				//key = false;
			//}
		//}
		
	//}
}