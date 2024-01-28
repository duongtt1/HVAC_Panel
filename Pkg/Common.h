#ifndef _H_COMMON_MOD_
#define _H_COMMON_MOD_

enum class TEMP_UNIT {
    Celsius     = 0,
    Fahrenheit
};

enum Position {
    Driver = 0,
    Passenger,
    Rear
};

enum class MODE {
    Vent = 0,
    VentBleed,
    BiMode,
    All
};


enum class BUTTON {
    Btn_Off = 0,
    Btn_DrvOnly,
    Btn_Auto,
    Btn_Sync,
    Btn_Ac,
    Btn_Intk,
    Btn_Ads,
    Btn_Rear_ADS,
    Btn_Key_Max
};

enum class BTN_EVENT {
    Btn_Pressed = 0,
    Btn_Pressing,
    Btn_Release
};

#endif // _H_COMMON_MOD_
