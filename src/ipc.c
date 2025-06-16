#include "plabwm.h"

int plabwm_ipc_socket = -1;

void plabwm_ipc_notify_map(int id, int pid, const char* name) {
	if (plabwm_ipc_socket < 0) return;
	
	char buffer[512];
	snprintf(buffer, sizeof(buffer), "map:%d:%d:%s\n", id, pid, name ? name : "Unknown (Unnamed)");
	
	write(plabwm_ipc_socket, buffer, strlen(buffer));

}

void plabwm_ipc_init() {
	struct sockaddr_un addr;
	memset(&addr, 0, sizeof(addr));
	
	plabwm_ipc_socket
}
