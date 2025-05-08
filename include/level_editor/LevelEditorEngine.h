#ifndef LEVELEDITORENGINE_H
#define LEVELEDITORENGINE_H

#include "engine/BaseEngine.h"
#include "level_editor/Constants.h"

class LevelEditorEngine : public BaseEngine
{
public:
    LevelEditorEngine();

private:
    bool loadMedia() override;
    bool create() override;
    bool update() override;
    bool render() override;
};

#endif // LEVELEDITORENGINE_H