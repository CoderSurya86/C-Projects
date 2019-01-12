/*********************************************************************************
 * Filename    : InvalidCutPtReqCntExcp.cpp                                      *
 * Date created: Jan 12, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains implementation of the public constructor method in the *
 *               exception class InvalidCutPtReqCntExcp.                         *
 *********************************************************************************/

#include "InvalidCutPtReqCntExcp.h"

InvalidCutPtReqCntExcp::InvalidCutPtReqCntExcp(std::string msg):runtime_error("\nInvalidCutPtReqCntExcp: "+msg+"!\n\n"){

}
