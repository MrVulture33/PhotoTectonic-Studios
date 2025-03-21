#pragma once

//Displaying scale factor
#define GAME_SCALE_FACTOR	3.0f

//Function return values
enum class AppStatus { OK = 0, ERROR, QUIT };

//Main return values
#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1

//Log messages
#define LOG(text, ...) log(__FILE__, __LINE__, text, __VA_ARGS__);
void log(const char file[], int line, const char* text, ...);

//Window size
#define WINDOW_WIDTH    256
#define WINDOW_HEIGHT   208

//Game constants
#define MARGIN_GUI_Y	32
#define TILE_SIZE		16
#define LEVEL_WIDTH		16
#define LEVEL_HEIGHT	11

//Entities animation delay
//#define ANIM_DELAY		20 // for testing and checking anims
#define ANIM_DELAY		8
