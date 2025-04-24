#ifndef LEVELEDITORENGINE_H
#define LEVELEDITORENGINE_H

#include "engine/BaseEngine.h"

class LevelEditorEngine : public BaseEngine
{
public:
    LevelEditorEngine(int, int);

private:
    bool loadMedia() override;
    bool create() override;
    bool update() override;
    bool render() override;
};

#endif