# !/bin/sh
mkdir $1 && cd $1

dir=${PWD##*/}  
cat ../../subjects/$dir/subject.en.txt
