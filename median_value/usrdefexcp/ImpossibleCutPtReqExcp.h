/***********************************************************************************
 * Filename    : ImpossibleCutPtReqExcp.h                                          *
 * Date created: Jan 12, 2019                                                      *
 * Author      : Surya Tej Nimmakayala                                             *
 * Description : Contains definition of the exception class ImpossibleCutPtReqExcp.*
 *               Simple class with just one construction method to propagate       *
 *               the message pertaining to the cause of the exception.             *
 ***********************************************************************************/

#ifndef C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_IMPOSSCUTPTREQEXCP_H_
#define C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_IMPOSSCUTPTREQEXCP_H_

#include <stdexcept>
#include <string>

class ImpossibleCutPtReqExcp:public std::runtime_error{
public:
	ImpossibleCutPtReqExcp(std::string msg);
};

#endif /* C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_IMPOSSCUTPTREQEXCP_H_ */
