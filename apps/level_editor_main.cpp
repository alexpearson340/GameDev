#define SDL_MAIN_HANDLED

#include "level_editor/LevelEditorEngine.h"

int main(int argc, char* args[])
{
    LevelEditorEngine game {};
    return game.run(argc, args);
}
