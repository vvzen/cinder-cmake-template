#!/bin/bash

app_name=cinder_template_app

num_cores=`sysctl -n machdep.cpu.core_count`
echo "Compiling app using $num_cores cores"
make -j $num_cores

echo "Running $app_name"
./Release/$app_name/$app_name.app/Contents/MacOS/$app_name

