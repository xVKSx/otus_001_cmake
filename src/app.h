#pragma once

#include <string>

std::string AppVersion(bool with_tweak_part = false);
std::string AppVersionMajor();
std::string AppVersionMinor();
std::string AppVersionPatch();
std::string AppVersionTweak();
