#!/bin/bash
clang main.c -o ./bin/Lily
chmod 775 ./bin/Lily
./clean.sh
./Lily