#ifndef SYSINFO_H
#define SYSINFO_H

#include "SDL.h"
#include <string>
#include <iostream>

class SysInfo
{
public:
    SysInfo() : systemPlatform(std::string())
    {
        systemPlatform = getPlatform();
    }

    /**
     * Sets the user's system platfrom to the private variable platformUsed.
     * Returns the platform as a std::string.
     */
    std::string getPlatform();
    void printPlatform();

private:
    std::string systemPlatform;
};

std::string SysInfo::getPlatform()
{
    const char *platform = SDL_GetPlatform();
    std::string p(platform);
    systemPlatform = p;
    return systemPlatform;
};

void SysInfo::printPlatform()
{
    if (systemPlatform != "")
        std::cout << "Platform Detected: " << systemPlatform << std::endl;
    else
        std::cout << "No System Platform Detected." << std::endl;
}

#endif