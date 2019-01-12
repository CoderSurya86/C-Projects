/*********************************************************************************
 * Filename    : ImpossibleCutPtReqExcp.cpp                                      *
 * Date created: Jan 12, 2019                                                    *
 * Author      : Surya Tej Nimmakayala                                           *
 * Description : Contains implementation of the public constructor method in the *
 *               exception class ImpossibleCutPtReqExcp.                         *
 *********************************************************************************/

#include "ImpossibleCutPtReqExcp.h"

ImpossibleCutPtReqExcp::ImpossibleCutPtReqExcp(std::string msg):runtime_error("\nImpossibleCutPtReqExcp: "+msg+"!\n\n"){

}
