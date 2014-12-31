#!/bin/bash
compile(){
  path_to_file=$1"*"
  for file in $path_to_file
  do
    if [ -d $file ];then
      compile $file"/"
    fi
    extension=${file##*.}
    filename=${file%.*}
    if [ "${extension}" = "cpp" ];then
      eval "g++ ${file} -o $filename"
    fi
  done
}
compile "./"
