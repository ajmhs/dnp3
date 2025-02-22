/* Copyright 2014 Real-Time Innovations, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
/*
 * APDUInfo.h
 *
 *  Created on: Jul 24, 2012
 *      Author: asorbini
 */

#ifndef APDUINFO_H_
#define APDUINFO_H_

#include <opendnp3/APL/Types.h>

using namespace std;

namespace apl
{
namespace dnp
{

struct APDUInfo {
	boost::uint16_t src;
	boost::uint16_t dest;
	bool master;
};

}
}


#endif /* APDUINFO_H_ */
