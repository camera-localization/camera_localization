# Camera Localization

[![Build Status](https://travis-ci.com/camera-localization/camera_localization.svg?branch=master)](https://travis-ci.com/camera-localization/camera_localization)
[![CodeFactor](https://www.codefactor.io/repository/github/camera-localization/camera_localization/badge)](https://www.codefactor.io/repository/github/camera-localization/camera_localization)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/9bb0c11775f94469825e3675bf39015e)](https://app.codacy.com/gh/camera-localization/camera_localization?utm_source=github.com&utm_medium=referral&utm_content=camera-localization/camera_localization&utm_campaign=Badge_Grade_Settings)
[![GPL license](https://img.shields.io/badge/License-GPL-blue.svg)](http://perso.crans.org/besson/LICENSE.html)

Localize camera with respect to a known pattern

## Build and run

Docker is used to build and run the project. This helps to keep dependency and
build environment consistent across different systems.

### Clone and start the docker

```shell
git clone https://github.com/camera-localization/camera_localization.git
cd camera_localization
./run-test-system.sh
```

### Compile and run (inside docker)

```shell
mkdir build
cmake ..
make
./dummyMain
```
