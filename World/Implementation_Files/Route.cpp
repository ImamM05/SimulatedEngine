#include "../Header_Files/Route.h"

namespace World {
    Route::Route() {
        for (unsigned int i = 0; i < Constants_Routes::WEATHER_AMT; i++) {
            WEATHER[i] = Constants_Routes::WEATHER[i];
        }
        for (unsigned int i = 0; i < Constants_Routes::ROAD_TYPE_AMT; i++) {
            ROAD_TYPE[i] = Constants_Routes::ROAD_TYPES[i];
        }
    }
}