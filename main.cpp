#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>



std::string intro() {
    std::cout << "Which file would you like to rename?";
    std::string name;
    std::getline(std::cin, name);
    std::cout << name << std::endl;
    return name;


    // char input[256];
    // std::cin.getline(input,sizeof(input));
    // std::cout << input << std::endl;
    // std:: cout << "HEYYY \n";
    //return input;
}

std::string spaceMinus(std::string fileName) {
    std::cout << fileName << std::endl;

    std::string space = " ", underscore = "_";
 
    size_t pos;
    while ((pos = fileName.find(space)) != std::string::npos) {
        fileName.replace(pos, 1, underscore);
    }
 
    std::cout << fileName << std::endl;
    return fileName;
}

int main() {

    std::string fileName = intro();
    std:: cout << "size is" << sizeof(fileName);
  //  std::cout << std::endl;
    std::string new_fileName = spaceMinus(fileName);
    if (rename(fileName.c_str(), new_fileName.c_str()) != 0)
		perror("Error renaming file");
	else
		std::cout << "File renamed successfully";
    //std::cout << fileName << std::endl;
    
}