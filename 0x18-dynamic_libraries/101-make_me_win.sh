#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/abdullahi-usman/alx-low_level_programming/main/0x18-dynamic_libraries/killswitch.so
export LD_PRELOAD=/tmp/killswitch.so