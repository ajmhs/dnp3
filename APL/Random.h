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
#ifndef __RANDOM_H_
#define __RANDOM_H_

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

namespace apl
{

template<class T>
class Random
{

public:
	Random(T aMin = std::numeric_limits<T>::min(), T aMax = std::numeric_limits<T>::max()) :
		rng(),
		dist(aMin, aMax),
		nextRand(rng, dist)
	{
	
	}

	T Next()
	{
		T ret = nextRand();
		return ret;
	}

private:
	boost::mt19937 rng;
	boost::uniform_int<T> dist;
	boost::variate_generator<boost::mt19937&, boost::uniform_int<T> > nextRand;
};


}

#endif

