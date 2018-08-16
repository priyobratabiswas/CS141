#!/bin/bash
echo "hello"
echo "What's your name?"
read NAME
echo "Hi $NAME "
mkdir ../$NAME
for i in 1 2 3 4 5
do 
touch ../$NAME/$NAME$i.cpp
done

