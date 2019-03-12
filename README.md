[![pipeline status](https://gitlab.com/LadySerenaKitty/sgemew/badges/master/pipeline.svg)](https://gitlab.com/LadySerenaKitty/sgemew/commits/master)
[![coverage status](https://gitlab.com/LadySerenaKitty/sgemew/badges/master/coverage.svg)](https://gitlab.com/LadySerenaKitty/sgemew/commits/master)

# SGEmew

MIPS R10k (MIPS IV) emulator primarily targeting SGI systems.

> The [GitHub](https://github.com/LadySerenaKitty/sgemew) repository is a mirror of the [GitLab](https://gitlab.com/LadySerenaKitty/sgemew) repository.
> 
> If Markdown fails to display properly on GitHub, this may be why.

## Getting the source
First, you need to get the sources locally

### Clone on GitLab
```
git clone git@gitlab.com:LadySerenaKitty/sgemew.git
```
or 
```
git clone https://gitlab.com/LadySerenaKitty/sgemew.git
```

### Clone on GitHub
```
git clone git@github.com:LadySerenaKitty/sgemew.git
```
or 
```
git clone https://github.com/LadySerenaKitty/sgemew.git
```

### Contributing
On either [GitLab](https://gitlab.com/LadySerenaKitty/sgemew) or [GitHub](https://github.com/LadySerenaKitty/sgemew), fork the repository and clone your fork instead.
>Alternatively, if you have already cloned, simply update the origin URL:
>```
>git remote set-url origin [your fork's clone URL]
>```

After pushing your changes, send a PR (pull request) and I'll take a look at it.

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

## Documentation
Auto-generated code documentation can always be found at https://ladyserenakitty.gitlab.io/sgemew

### Building Documentation
Requires [`devel/doxygen`](https://www.freshports.org/devel/doxygen).
```
cd sgemew
doxygen
```
The resulting documentation will be in `sgemew/doc`.

