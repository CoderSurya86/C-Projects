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

class CutPointSubSystem{

private:
std::set<int> dataItemSet;
int desiredCutPtCnt;

public:

/***************************************************************************
 * @pre   : None.                                                          *
 * @post  : Private data member(s) initialized with default values.        *
 * @return: None.                                                          *
 ***************************************************************************/
CutPointSubSystem();


/********************************************************************************
 * @pre   : Appropriate input filename and cut-point count passed as arguments. *
 * @post  : Private data member(s) initialized with data passed as arguments.   *                                                        *
 * @return: None.                                                               *
 ********************************************************************************/
CutPointSubSystem(std::string fname,int cpCnt) throw(InvalidFileExcp);


/*************************************************************************
 * @pre   : Private data member dataItemSet initialized with input data. *
 * @post  : None.                                                        *
 * @return: void.                                                        *
 *************************************************************************/
void run();

};



#endif /* C_PROJECTS_MEDIAN_VALUE_SRC_CUTPOINTSUBSYSTEM_H_ */
