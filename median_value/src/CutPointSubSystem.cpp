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
#include <cstddef>

CutPointSubSystem::CutPointSubSystem(){

  sortedDataItemList=nullptr;
  desiredCutPtCnt=0;

}


CutPointSubSystem::CutPointSubSystem(std::string fname,std::string cpCnt) throw(InvalidFileExcp){

	std::ifstream ifile(fname);
	std::string tmpStr;
	std::set<int> dataItemSet;
	
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

	// Populate the sorted list with data from the set instance.
	std::set<int>::iterator it;
	int iCnt=0;
	dataItemListLength=dataItemSet.size();

	sortedDataItemList = new int[dataItemListLength];
	
	for(it = dataItemSet.begin();it != dataItemSet.end() && iCnt < dataItemListLength ;it++,iCnt++){
	  sortedDataItemList[iCnt] = *it;
	  std::cout << "sortedDataItemList[ " << iCnt << "]: " << sortedDataItemList[iCnt] << "\n";
	}
	
	std::cout << "desiredCutPtCnt: " << desiredCutPtCnt << "\n";
}


void CutPointSubSystem::run(){

  if(desiredCutPtCnt > 0){
    int itemSubSetLen=dataItemListLength/(desiredCutPtCnt+1); // +1, as the number of parts/sub-sets would be one more than the cut-points splitting the data sequence.
    
    // Print the information on the number of possible hops, hop values and the data values of desired number of cut-points from the gathered comlpete set.
    if(itemSubSetLen > 1){ // To ensure there are atleast 2 items in a sub-set of elements.
      int currListIdx=0, cutPtIdx=0;
      while((currListIdx < dataItemListLength) && (cutPtIdx < desiredCutPtCnt)){
	currListIdx+=itemSubSetLen;
	cutPtIdx++;
	cutPtSet.insert(sortedDataItemList[currListIdx]);
      }
    }
    else if(itemSubSetLen == 1){
      for(int i=0;i < desiredCutPtCnt;i++)
	cutPtSet.insert(sortedDataItemList[i]);
    }
    else{ // itemSubSetLen < 1
      throw(ImpossibleCutPtReqExcp("Impossible to find "+std::to_string(desiredCutPtCnt)+" cut-points with "+std::to_string(dataItemListLength)+" data items !"));
    }
  } // end of if(desiredCutPtCnt > 0)
  else{ // desiredCutPtCnt <= 0
    throw(InvalidCutPtReqCntExcp("The requested cut-point count should be > 0 !"));
  }

  // Print the found cut-points
  std::cout << "\nCut-Point list: \n";
  std::set<int>::iterator it;
  
  for(it=cutPtSet.begin();it!=cutPtSet.end();it++)
    std::cout << *it << "\n";

  std::cout << "\n";
}


CutPointSubSystem::~CutPointSubSystem(){
  delete [] sortedDataItemList;
}
