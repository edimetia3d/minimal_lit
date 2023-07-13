# Minimal Lit

This is a minimal example of showing usage of lit out of the llvm-project.

The codes should tell themself, you can read the comment in the files to understand how to do it.

Here is a recommended reading order:
1. `CMakeLists.txt`: Tells you how to integrate lit into cmake
2. `lit.site.cfg`: Tells you how to bridge cmake and lit
3. `lit.cfg`: Tells you how to setup a common config
4. `tests/` and `srcs/`: Tell you how to use `lit.local.cfg` and how to add new tests

> If you can read chinese (or you may use chrome translation), my post [lit and filecheck](https://www.tinyedi.com/lit-and-filecheck/) may help you too.
