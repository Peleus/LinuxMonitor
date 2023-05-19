#include <string>

#include "format.h"

using std::string;

// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) { 
    
    string formatHours{"00"};
    string formatMinutes{"00"};
    string formatSeconds{"00"};
     
    int hours = (seconds / 60) / 60;
    int minutes = (seconds - ((hours * 60) * 60)) / 60;
    int finalSeconds  = seconds - ((hours * 60) * 60) - (minutes * 60);

    //Hours format
    if (hours < 10) {
        formatHours = "0" + std::to_string(hours);
    } else {
        formatHours = std::to_string(hours);
    }

    //Minutes format
    if (minutes < 10) {
        formatMinutes = "0" + std::to_string(minutes);
    } else {
        formatMinutes = std::to_string(minutes);
    }

    //Seconds format
    if(finalSeconds < 10) {
        formatSeconds = "0" + std::to_string(finalSeconds);
    }else {
        formatSeconds = std::to_string(finalSeconds);
    }

    string value = formatHours + ":" + formatMinutes + ":" + formatSeconds;
    
    return string(value);
    
}