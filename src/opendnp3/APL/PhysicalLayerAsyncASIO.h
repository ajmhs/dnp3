//
// Licensed to Green Energy Corp (www.greenenergycorp.com) under one
// or more contributor license agreements. See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  Green Enery Corp licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
#ifndef __PHYSICAL_LAYER_ASYNC_ASIO_H_
#define __PHYSICAL_LAYER_ASYNC_ASIO_H_

#include "PhysicalLayerAsyncBase.h"
#include <boost/asio/io_service.hpp>

namespace apl
{

// This is the base class for the new async physical layers. It assumes that all of the functions
// are called from a single thread.

class PhysicalLayerAsyncASIO : public PhysicalLayerAsyncBase
{
public:
	PhysicalLayerAsyncASIO(Logger* apLogger, boost::asio::io_service* apService) :
		PhysicalLayerAsyncBase(apLogger),
		mpService(apService)
	{}

	virtual ~PhysicalLayerAsyncASIO() {}

protected:
	// reference to the io_service object that is driving the class
	// Use this for any required post operations
	boost::asio::io_service* mpService;
};
}
#endif
