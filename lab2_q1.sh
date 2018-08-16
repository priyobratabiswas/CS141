#!/bin/sh
echo "Hello"
echo "What's your name?"
read NAME 
echo "Hello $NAME"
mkdir ../$NAME
touch ../$NAME/$NAME.cpp
