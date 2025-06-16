#ifndef PLabWM
#define PLabWM

// Define Basic Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#define PLABWM_SOCKET_PATH "/tmp/plabwm.sock"

extern int plabwm_ipc_socket;

void plabwm_ipc_notify_map(int id, int pid, const char* name);


#endif
