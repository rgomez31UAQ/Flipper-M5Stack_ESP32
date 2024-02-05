#pragma once

#ifdef __cplusplus
extern "C"
{
#endif
    namespace Domain::Entities
    {
        enum InterfaceType
        {
            Display,
            Battery,
            Wifi,
            Bluetooth,
            Led,
            PowerManagement,
            SdCard,
            Gps,
            Keyboard,
            Buttons,
            Infrared
        };
    }
#ifdef __cplusplus
}
#endif