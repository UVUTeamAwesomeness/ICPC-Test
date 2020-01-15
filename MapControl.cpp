#include "MapControl.h"
#include<iostream>
#include<fstream>

MapControl::MapControl(){
	std::fstream mFile;
	std::string line;
	mFile.open("MapText.txt");
	while (std::getline(mFile, line)){
		this->MapData += line;
	}

	mFile.close();
	std::cout << this->MapData;
}

int MapControl::QueryDirection(int Direction){

}
