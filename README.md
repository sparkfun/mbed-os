
# SparkFun ambiq-apollo3-arduino branch of MbedOS
Note: Sparkfun does not own or maintain [MbedOS](https://github.com/ARMmbed/mbed-os), this readme exists to explain the purpose of this branch on this fork, and to help people use it.

## Purpose
Sparkfun uses this branch as the source for the mbed library that serves as the framework on which the [arduino core](https://github.com/sparkfun/Arduino_Apollo3) for the [Artemis](https://www.sparkfun.com/artemis) line of products is built.

Why not just use the latest commit to the MbedOS repo? We want to be able to control changes and updates to this framework. This will limit things breaking between releases that are unrelated to desired changes. Additionally, this repo and branch allow us to make small changes to MbedOS itself should we deem it necessary to  maintain our Arduino core.

## How to use
The primary purpose of this repo is to be used as a precompiled library. If you make your own changes to this repo, you will need recompile this library yourself and replace the library in your arduino core.

You will need to clone this repo to your file system and checkout out the ambiq-apollo3-arduino branch.
To make your own library you will have to insert your information into the following 
```mbed compile --library --source=mbed-os -m ${YOUR_TARGET_BOARD} -t ${YOUR_TOOLCHAIN}```

So for example you may want to rebuild for the ATP using the typical GCC toolchain 
```mbed compile --library --source=mbed-os -m SFE_ARTEMIS_ATP -t GCC_ARM```

Copy the output .a file to [the appropriate variant](https://github.com/sparkfun/Arduino_Apollo3/tree/master/variants) in your arduino core.

Note: Some changes may result in changes to the macros and flags. To regenerate these files, you can use the provided [tools](https://github.com/sparkfun/Arduino_Apollo3/tree/master/tools/scripts), though for smaller changes it may be easiest to just manually change these files as necessary.

## Explanation of build process
Sparkfun does not manually build these libraries for release. In the [Arduino core repo](https://github.com/sparkfun/Arduino_Apollo3) we use GitHub action to assist us. Whenever we make a commit to the `dev` branch, we rebuild the latest version of this branch and store the result to the `release candidate` branch. Thus any commit to the `dev` branch can be tested with the latest version of this branch by checking out `release-candidate`.
Releases are made by a pull request from the `release candidate` branch into `master`