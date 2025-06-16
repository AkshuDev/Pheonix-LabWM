#include <plabwm.h>
#include <layout.h>

static Window* last_window = NULL;
static int window_count = 0;
static Window* windows[MAX_WINDOWS];

void labwm_init_layout(void){
	last_window = NULL;
	window_count = 0;
}

void labwm_reset_layout(void){
	labwm_init_layout();
}

void labwm_manage_window(Window* win) {
	if (!win) return;
	
	if (window_count >= MAX_WINDOWS) {
		printf("Too Many Windows: [layout] Engine\n");
		return;
	}
	
	// Calculate layout
	int cols = ceil(sqrt(window_count));
	int rows = ceil((float)window_count / cols);
	
	int cell_width = SCREEN_WIDTH / cols;
	int cell_height = SCREEN_HEIGHT / rows;
	
	for (int i = 0; i < window_count; i++) {
		int row = i / cols;
		int col = i % cols;
		
		win->x = col * cell_width;
		win->y = row * cell_height;
		win->width = cell_width;
		win->height = cell_height;
		
		windows[i] = win;
	}
	
	printf("Window Layout complete -> %s : X-%d Y-%d W-%d H-%d PID-%d\n", win->name, win->x, win->y, win->width, win->height, win->pid);
	
	last_window = win;
}
