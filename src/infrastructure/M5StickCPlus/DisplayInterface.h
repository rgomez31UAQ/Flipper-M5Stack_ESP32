#ifdef M5STICKCPLUS

#pragma once

#include <memory>

#include "../../domain/entities/DisplayInterfaceBase.h"
#include "../../domain/entities/DisplaySettings.h"

using namespace Domain::Entities;

#ifdef __cplusplus
extern "C"
{
#endif
    namespace Infrastructure::M5StickCPlus
    {
        class DisplayInterface : public DisplayInterfaceBase
        {
        public:
            DisplayInterface() : DisplayInterfaceBase(){};

            void begin();
            DisplaySettings getSettings();
        };
    }
#ifdef __cplusplus
}
#endif
#endif