/*********************************************************************************
 * Filename    : InvalidFileExcp.cpp                                             *
 * Date created: Jan 12, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains implementation of the public constructor method in the *
 *               exception class InvalidFileExcp.                                *
 *********************************************************************************/

#include "InvalidFileExcp.h"

InvalidFileExcp::InvalidFileExcp(std::string msg):runtime_error("\nInvalidFileExcp: "+msg+"!\n\n"){

}
