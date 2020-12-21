#!/bin/bash
clang src/main.c -o ./bin/Lily
chmod 775 ./bin/Lily
./clean.sh
./bin/Lily