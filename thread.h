#ifndef VDR_LIVE_THREAD_H
#define VDR_LIVE_THREAD_H

#include <memory>
#include <vdr/thread.h>
#include "autoptr.h"


namespace tnt { class Tntnet; }

namespace vdrlive {

class ServerThread : public cThread {
public:
	ServerThread();
	virtual ~ServerThread();

	void Stop();

protected:
	virtual void Action();

private:
	AUTO_PTR< tnt::Tntnet > m_server;
};

} // namespace vdrlive

#endif // VDR_LIVE_THREAD_H
