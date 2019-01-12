/*********************************************************************************
 * Filename    : CutPointSubSystem.cpp                                           *
 * Date created: Jan 11, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains implementation of public methods of class              *
 *               CutPointSubSystem.                                              *
 *********************************************************************************/

#include "CutPointSubSystem.h"
#include <fstream>
#include <iostream>

CutPointSubSystem::CutPointSubSystem(){

	desiredCutPtCnt=0;

}


CutPointSubSystem::CutPointSubSystem(std::string fname,std::string cpCnt) throw(InvalidFileExcp){

	std::ifstream ifile(fname);
	std::string tmpStr;

	// Code to read the input file content and load it in to the private member set instance: dataItemSet
	if(ifile.is_open()){

		while(getline(ifile, tmpStr)){
			dataItemSet.insert(std::stoi(tmpStr));
		} // end of while(getline(ifile, tmpStr))

		ifile.close();
	} // end of if(ifile.is_open())
	else{
		throw(InvalidFileExcp(fname));
	}

	desiredCutPtCnt = std::stoi(cpCnt);

	std::set<int>::iterator it;
	int iCnt=0;
	for(it = dataItemSet.begin();it != dataItemSet.end();it++,iCnt++)
		std::cout << "dataItemSet # " << iCnt << ": " << *it << "\n";

	std::cout << "desiredCutPtCnt: " << desiredCutPtCnt << "\n";
}


void CutPointSubSystem::run(){
	std::cout << "Nothing to run in the sub-system yet !\n";
}


