/*********************************************************************************
 * Filename    : CutPointSubSystem.h                                             *
 * Date created: Jan 11, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains definition of the class CutPointSubSystem.             *
 *               This sub-system is a collection of sub-tasks to                 *
 *               incorporate the bigger task of finding desired number of        *
 *               cut-points in a given input of data values.                     *
 *********************************************************************************/

#ifndef C_PROJECTS_MEDIAN_VALUE_SRC_CUTPOINTSUBSYSTEM_H_
#define C_PROJECTS_MEDIAN_VALUE_SRC_CUTPOINTSUBSYSTEM_H_

#include <set>
#include <string>
#include "../usrdefexcp/InvalidFileExcp.h"
#include "../usrdefexcp/ImpossibleCutPtReqExcp.h"
#include "../usrdefexcp/InvalidCutPtReqCntExcp.h"

class CutPointSubSystem{

private:
 int* sortedDataItemList;
 int desiredCutPtCnt;
 int dataItemListLength;
 std::set<int> cutPtSet;
 
public:

/***************************************************************************
 * @pre   : None.                                                          *
 * @post  : Private data member(s) initialized with default values.        *
 * @return: None.                                                          *
 ***************************************************************************/
CutPointSubSystem();


/********************************************************************************
 * @pre   : Appropriate input filename and cut-point count passed as arguments. *
 * @post  : Private data member(s) initialized with data passed as arguments.   *
 * @return: None.                                                               *
 ********************************************************************************/
CutPointSubSystem(std::string fname,std::string cpCnt) throw(InvalidFileExcp);


/*************************************************************************
 * @pre   : Private data member sortedDataItemList initialized with      *
 *          input data.                                                  *
 * @post  : None.                                                        *
 * @return: void.                                                        *
 *************************************************************************/
void run();

 
/*************************************************************************
 * @pre   : None.                                                        *
 * @post  : Any heap-allocated memory at run-time is released through    *
 *          "delete" operator.                                           *
 * @return: None.                                                        *
 *************************************************************************/
 ~CutPointSubSystem();
 
 
 
};



#endif /* C_PROJECTS_MEDIAN_VALUE_SRC_CUTPOINTSUBSYSTEM_H_ */
