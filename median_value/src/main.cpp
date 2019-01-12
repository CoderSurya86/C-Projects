#include <iostream>
#include "CutPointSubSystem.h"
#include <exception>

int main(int argc, char* argv[]){
  
  if(argc != 3){
    std::cout << "Insufficient number of input arguments !!\n";
    std::cout << "Usage: ./<executable-name> <input-file-name> <cut-point-count>\n";
    std::cout << "Sample Usage: ./find_cut_points input.txt 3\n";
    exit(-1);
  }

  try{
    CutPointSubSystem cpSubSys(argv[1], argv[2]);
    cpSubSys.run();
  }
  catch(std::exception& e){
    std::cout << e.what() << "\n";
  }
  
  return 0;
  
}
