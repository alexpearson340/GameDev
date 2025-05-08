#include <iostream>

#include "level_editor/LevelEditorEngine.h"

LevelEditorEngine::LevelEditorEngine()
    : BaseEngine(SCREEN_HEIGHT, SCREEN_WIDTH)
{
};

bool LevelEditorEngine::loadMedia()
{
    bool success = true;
    mTextures.clear();

    // TODO - programmatically load textures in the assets dir
    success = success && loadTexture("red.bmp");
    success = success && loadTexture("blue.bmp");
    success = success && loadTexture("yellow.bmp");
    success = success && loadTexture("green.bmp");
    success = success && loadTexture("purple.bmp");
    success = success && loadTexture("orange.bmp");
    success = success && loadTexture("navy.bmp");
    success = success && loadTexture("grey.bmp");
    success = success && loadTexture("white.bmp");
    success = success && loadTexture("black.bmp");
    return success;
}

bool LevelEditorEngine::create()
{
    return true;
}

bool LevelEditorEngine::update()
{   
    // Handle events on queue
    while (SDL_PollEvent(&mEvent) != 0)
    {
        // User requests quit
        if (mEvent.type == SDL_QUIT)
        {
            mQuit = true;
        }
    }
    return true;
}

bool LevelEditorEngine::render()
{
    return true;
}