#include "base.h"
#include "connections.h"

const char *connection_get_state(connection_state_t state) {
	switch (state) {
	case CON_STATE_CONNECT: return "connect";

	case CON_STATE_REQUEST_START: return "req-start";
	case CON_STATE_READ_REQUEST_HEADER: return "read-header";
	case CON_STATE_HANDLE_REQUEST_HEADER: return "handle-req";
	case CON_STATE_READ_REQUEST_CONTENT: return "read-content";

	case CON_STATE_HANDLE_RESPONSE_HEADER: return "resp-start";
	case CON_STATE_WRITE_RESPONSE_HEADER: return "write-header";
	case CON_STATE_WRITE_RESPONSE_CONTENT: return "write-content";
	case CON_STATE_RESPONSE_END: return "resp-end";

	case CON_STATE_CLOSE: return "close";
	case CON_STATE_ERROR: return "error";
	default: return "(unknown)";
	}
}

const char *connection_get_short_state(connection_state_t state) {
	switch (state) {
	case CON_STATE_CONNECT: return ".";
	case CON_STATE_REQUEST_START: return "q";

	case CON_STATE_READ_REQUEST_HEADER: return "r";
	case CON_STATE_HANDLE_REQUEST_HEADER: return "h";
	case CON_STATE_READ_REQUEST_CONTENT: return "R";

	case CON_STATE_HANDLE_RESPONSE_HEADER: return "s";
	case CON_STATE_WRITE_RESPONSE_HEADER: return "w";
	case CON_STATE_WRITE_RESPONSE_CONTENT: return "W";
	case CON_STATE_RESPONSE_END: return "S";

	case CON_STATE_CLOSE: return "C";
	case CON_STATE_ERROR: return "E";
	default: return "x";
	}
}

int connection_set_state(server *srv, connection *con, connection_state_t state) {
	UNUSED(srv);

	con->state = state;

	return 0;
}

