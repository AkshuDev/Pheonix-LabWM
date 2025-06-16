#include <plabwm.h>
#include <config.h>
#include <layout.h>
#include <theme.h>
#include <plugin.h>
#include <errcodes.h>

// All imports

int main(int argc, char** argv) {
	printf("Starting Pheonix LabWc Window Manager..\n");
			
	// Load config
	//if (!labwm_load_config("~/.config/pheonix-labwc/config")) {
	//	fprintf(stderr, "Failed to load config file, run [-err] to see the error or [-errlog] to see the full error log.\n");
	//	return CouldNotLoadConfigFile;
	//}

	// Initalize Layout
	labwm_init_layout();

	// Initalize Data
	Window win1 = { .pid = 1 , .name = "TW1" };
	Window win2 = { .pid = 2 , .name = "TW2" };
	
	labwm_manage_window(&win1);
	labwm_manage_window(&win2);

	// Run Event Loop
	while (1) {
		// TODO: Connect to LabWC IPC or hook into wlroots (if forked)
		// Listen for events
		break; // Placeholder
	}
	printf("Pheonix LabWc Window Manager Exited!");
	return Success;
}
