#!bin/bash

git status --ignored -s | grep '!!' | cut -d '!' -d " " -f 2 
