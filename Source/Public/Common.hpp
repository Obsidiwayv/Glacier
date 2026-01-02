#ifndef COMMON_HPP_
#define COMMON_HPP_

#include "Dialog.hpp"

#if defined(__APPLE__)
#include <cstdlib>

inline const char* getHomeDir()
{
    const char* home = std::getenv("HOME");
    if (home == nullptr) {
        NMB::show(
            "Extraction Error",
            "HOME in the path is missing",
            NMB::ICON_ERROR);
        exit(EXIT_FAILURE);
    }
    return home;
};
#endif

#endif // COMMON_HPP_