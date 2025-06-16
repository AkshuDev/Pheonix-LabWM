#pragma once

#define MAX_WINDOWS 9
#define SCREEN_HEIGHT 720
#define SCREEN_WIDTH 1280

typedef struct {
	int x, y;
	int width, height;
	int pid;
	char* name;
} Window;

void labwm_manage_window(Window* win);
void labwm_reset_layout(void);
void labwm_init_layout(void);
