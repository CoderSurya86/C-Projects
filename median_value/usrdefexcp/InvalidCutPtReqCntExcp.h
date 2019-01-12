/***********************************************************************************
 * Filename    : InvalidCutPtReqCntExcp.h                                          *
 * Date created: Jan 12, 2019                                                      *
 * Author      : Surya Tej Nimmakayala                                             *
 * Description : Contains definition of the exception class InvalidCutPtReqCntExcp.*
 *               Simple class with just one construction method to propagate       *
 *               the message pertaining to the cause of the exception.             *
 ***********************************************************************************/

#ifndef C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDCUTPTREQCNTEXCP_H_
#define C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDCUTPTREQCNTEXCP_H_

#include <stdexcept>
#include <string>

class InvalidCutPtReqCntExcp:public std::runtime_error{
public:
	InvalidCutPtReqCntExcp(std::string msg);
};

#endif /* C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDCUTPTREQCNTEXCP_H_ */
