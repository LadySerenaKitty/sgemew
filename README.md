[![pipeline status](https://gitlab.com/LadySerenaKitty/sgemew/badges/master/pipeline.svg)](https://gitlab.com/LadySerenaKitty/sgemew/commits/master)
[![coverage status](https://gitlab.com/LadySerenaKitty/sgemew/badges/master/coverage.svg)](https://gitlab.com/LadySerenaKitty/sgemew/commits/master)

# SGEmew

---

MIPS R10k (MIPS IV) emulator primarily targeting SGI systems.

## Building
After checking out the project, building is fairly easy.
```
cd sgemew
cmake .
make
```

## Running
If it builds, it **should** run.  The binary will be located in `cmake-build-Debug/output`.

## Requirements
- CMake ([`devel/cmake`](https://www.freshports.org/devel/cmake))
- wxWidgets 3 ([`x11-toolkits/wxgtk30`](https://www.freshports.org/x11-toolkits/wxgtk30))

## Building Documentation
Requires [`devel/doxygen`](https://www.freshports.org/devel/doxygen).
```
cd sgemew
doxygen
```
The resulting documentation will be in `sgemew/doc`.

