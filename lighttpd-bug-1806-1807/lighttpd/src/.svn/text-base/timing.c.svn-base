#include <glib.h>

#include "base.h"

void timing_log(server *srv, connection *con, int field) {
	if (srv->srvconf.log_timing) {
		g_get_current_time(&(con->timestamps[field]));
	}
}

