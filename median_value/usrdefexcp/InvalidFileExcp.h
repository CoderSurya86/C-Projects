/*********************************************************************************
 * Filename    : InvalidFileExcp.h                                               *
 * Date created: Jan 12, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains definition of the exception class InvalidFileExcp.     *
 *               Simple class with just one construction method to propagate     *
 *               the message pertaining to the cause of the exception.           *
 *********************************************************************************/

#ifndef C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDFILEEXCP_H_
#define C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDFILEEXCP_H_

#include <stdexcept>
#include <string>

class InvalidFileExcp:public std::runtime_error{
public:
	InvalidFileExcp(std::string msg);
};

#endif /* C_PROJECTS_MEDIAN_VALUE_USRDEFEXCP_INVALIDFILEEXCP_H_ */
