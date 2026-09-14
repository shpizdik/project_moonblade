//c++ -o name filename.cpp
#include <iostream>
#include "raylib.h"

using namespace std;

int main(void){
	// Constants
	//-----------------------------------------------------------------------
	const int PRM_SCREEN_WIDTH = 854; //PRM stands for parameter
	const int PRM_SCREEN_HEIGHT = 480; //PRMs are to be move into other file
	const int PRM_DEFAULT_FPS = 60; //Constants placed here for easy access

	// Window Initialization
	//------------------------------------------------------------
	InitWindow(PRM_SCREEN_WIDTH, PRM_SCREEN_HEIGHT, "gavno suka");

	Camera3D camera = {0};
	camera.position = (Vector3){0.0f, 10.0f, 10.0f};
	camera.target = (Vector3){0.0f, 0.0f, 0.0f};
	camera.up = (Vector3){0.0f, 1.0f, 0.0f};
	camera.fovy = 45.0f;
	camera.projection = CAMERA_PERSPECTIVE;

	Vector3 cubePosition = {0.0f, 0.0f, 0.0f};

	SetTargetFPS(PRM_DEFAULT_FPS);

	// Game Loop
	//----------------------------------------------------------------
	while(!WindowShouldClose()){
		//variable updating here

		// Draw
		//------------------------------------------------------------
		BeginDrawing();
			ClearBackground(RAYWHITE);
			BeginMode3D(camera);
				DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
				DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

				DrawGrid(10, 1.0f);
			EndMode3D();
			DrawFPS(10, 10);

		EndDrawing();

	}

	// De-Initialization
	//------------------
	CloseWindow();

	return 0;
}
