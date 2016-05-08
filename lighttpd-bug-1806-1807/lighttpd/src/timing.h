#ifndef _TIMING_H_
#define _TIMING_H_

#include "base.h"

#define TIME_DIFF(t2, t1) \
	((con->timestamps[t2].tv_sec - con->timestamps[t1].tv_sec) * 1000 + \
	 (con->timestamps[t2].tv_usec - con->timestamps[t1].tv_usec) / 1000)
	
LI_API void timing_log(server *srv, connection *con, int field);

#endif
