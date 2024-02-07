#ifndef __PHYSICAL_LAYER_IOSTREAM_ASYNC_H_
#define __PHYSICAL_LAYER_IOSTREAM_ASYNC_H_


#include "PhysicalLayerSyncProxy.h"
#include <boost/asio/io_service.hpp>

namespace apl
{

class Logger;

/** Simple thread object that allows for non-blocking read of std input.
*/
class PhysicalLayerIOStreamAsync : public PhysicalLayerSyncProxy
{
public:
	PhysicalLayerIOStreamAsync(Logger*, boost::asio::io_service*);

private:


	//implement virtual members of PhysicalLayerSyncProxy

	std::string Read();
	void Write(const std::string&);
};
}

#endif

