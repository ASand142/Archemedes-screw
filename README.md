Archemedes-screw
================

arduiño project
##
This repo contains the arduino code to controll a motor on a schedule that runs daily, I also plan to later modify this code to run an automated watering system. This repo also contains info on the building of an Archimedes screw that is attached to a motor.
##
If you get the an error ending in "WProgram.h: No such file or directory" when compiling or uploading your code you may have to replace instances of WProgram.h with Arduino.h in the .cpp file located at "\Documents\Arduino\libraries\Time\Time.cpp" and "\Documents\Arduino\libraries\TimeAlarms\TimeAlarms.cpp". this fixed the problem I had.