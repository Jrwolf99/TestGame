#include <iostream>
#include "game.h"
#include "raylib.h"



namespace game {
	const int screenWidth = 800;
	const int screenHeight = 450;

	void runApplication() {
		init();
		while (!WindowShouldClose())    // Detect window close button or ESC key
		{

			update();
			draw();


	
		}
		deInit();

	}

	//Initialization of all the game!
	void init() {
		InitWindow(screenWidth, screenHeight, "Block Game! by Jonathan Wolf");
		SetTargetFPS(60);
		SetConfigFlags(FLAG_MSAA_4X_HINT);      // Enable Multi Sampling Anti Aliasing 4x (if available)

		//run init for all screens
		/*menu::init();
		gameplay::init();
		gameOver::init();
		credits::init();*/
	}

	void deInit() {

		//run deinit for all screens
		/*gameplay::deInit();
		credits::deInit();
		menu::deInit();*/
		CloseWindow(); 
	}

	void update() {}

	void draw() {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}


	




}