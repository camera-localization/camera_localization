#!/bin/bash

set -e

source test-system/color-codes.sh

echo "
-----------------------------------
Set display auth for docker
-----------------------------------
"
# allow local programs to use display
xhost +local:root

# list xserver authorizations
xhost


echo "
-----------------------------------
Start test system - dockerized
-----------------------------------
"
# build image using docker file
docker build          \
    --rm              \
    --force-rm        \
    --compress        \
    -t opencv-test-vm \
    test-system

echo -e "${yellow}
-----------------------------------${reset}

${yellow}The project dir is shared between host and docker vm.${reset}

${purple}Code can be modified on host and re-built
inside docker without any need to
restart the docker in between code changes.${reset}


Type ${blue}ls -al${reset} to see the
source files in current host dir

${green}Build / Run: ${reset}
  go to build dir (or create one)
    ${blue}
    cd build
    cmake ..
    make
    ./my-executable
${reset}${yellow}
-----------------------------------${reset}
"

# run docker
docker run                     \
    --rm                       \
    --net=host                 \
    -e DISPLAY                 \
    -v ${PWD}:"/home/project"  \
    -it                        \
    --entrypoint "/bin/bash"   \
    opencv-test-vm

# use a custom install of opencv from host (add floowing two line to run command)
# -v /host/opencv/install/dir/install_4.5.1:/opencv-install-dir \
# --env OpenCV_DIR=/opencv-install-dir/lib/cmake/opencv4/ \

echo "
-----------------------------------
Finish up
-----------------------------------
"
# remove xserver authorization
xhost -local:root

# authorization list
xhost

echo "
-----------------------------------
Done
-----------------------------------
"
