PiNE's raylib template project

To compile, use either build.sh for linux/wsl, or build.bat for windows
You can enter "clean" as an argument to the scripts to clean the build (useful for if you want to compile for one platform after having compiled for the other)
Can also build in release mode by entering "release" as an argument to the script


To get things compiling properly, look in `scripts/build-linux.sh` and `scripts/build-windows.bat`. You'll want to change
the `RAYLIB_SRC` variables in both scripts to be an absolute path to your raylib src folder. 
(I.E. something like `/mnt/c/raylib/raylib/src` or `C:\raylib\raylib\src`)



  [Raylib Github](https://github.com/raysan5/raylib)


  [Raylib](https://www.raylib.com/)
