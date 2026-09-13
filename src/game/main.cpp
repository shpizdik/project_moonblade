//c++ -o name filename.cpp
#include <iostream>
#include "raylib.h"

using namespace std;

int main(void){
	// Constants
	//----------------------------------------------------------------------
	const int PRM_SCREEN_WIDTH = 1280;
	const int PRM_SCREEN_HEIGHT = 720;
	const int PRM_DEFAULT_FPS = 60; //Constants placed here for easy access

	// Window Initialization
	//------------------------------------------------------------
	InitWindow(PRM_SCREEN_WIDTH, PRM_SCREEN_HEIGHT, "gavno suka");
	SetTargetFPS(PRM_DEFAULT_FPS);

	// Game Loop
	//-----------------------------------------------------------
	while(!WindowShouldClose()){
		//variable updating

		// Draw
		//-------------------------------------------------------
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawText("idi nahui gandon", 190, 200, 0, LIGHTGRAY);
		EndDrawing();

	}

	// De-Initialization
	//------------------
	CloseWindow();

	return 0;
}
