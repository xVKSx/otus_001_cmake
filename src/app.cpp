#include "app.h"
#include <string>

std::string AppVersion(bool with_tweak_part) {
    std::string version = AppVersionMajor() + "." + AppVersionMinor() + "." + AppVersionPatch();
    if (with_tweak_part) {
        version += "." + AppVersionTweak();
    }
    return version;
}

std::string AppVersionMajor() {
    return "4";
}

std::string AppVersionMinor() {
    return "3";
}

std::string AppVersionPatch() {
    return "2";
}

std::string AppVersionTweak() {
    return "1";
}
