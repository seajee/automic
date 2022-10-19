#include <iostream>

#include "ext/MicrophoneVolumeAdjust/MixerMicrophoneValue.h"

int main(int argc, char** argv)
{
    if (argc == 1 || argc != 3)
    {
        std::cout << "AutoMic, The Microphone Volume Locker\n\nUsage: automic <microphone name> <volume [0.0, 1.0]>";
        return 0;
    }

    MixerMicrophoneValue Adjuster;
    Adjuster.LinkToDevice(std::string(argv[1]));

    while (true)
    {
        Adjuster.SetVolume(atof(argv[2]));
        Sleep(1000);
    }

    return 0;
}