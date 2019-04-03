#include "app.h"
#include "version.h"
#include <string>

std::string AppVersion(bool with_tweak_part) {
    std::string version = AppVersionMajor() + "." + AppVersionMinor() + "." + AppVersionPatch();
    if (with_tweak_part) {
        version += "." + AppVersionTweak();
    }
    return version;
}

std::string AppVersionMajor() {
    return !std::string(APP_VERSION_MAJOR).empty() ? APP_VERSION_MAJOR : APP_VERSION_PART_UNDEFINED;
}

std::string AppVersionMinor() {
    return !std::string(APP_VERSION_MINOR).empty() ? APP_VERSION_MINOR : APP_VERSION_PART_UNDEFINED;
}

std::string AppVersionPatch() {
    return !std::string(APP_VERSION_PATCH).empty() ? APP_VERSION_PATCH : APP_VERSION_PART_UNDEFINED;
}

std::string AppVersionTweak() {
    return !std::string(APP_VERSION_TWEAK).empty() ? APP_VERSION_TWEAK : APP_VERSION_PART_UNDEFINED;
}
