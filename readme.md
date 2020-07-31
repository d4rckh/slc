# slc

## installation

```bash
$ git clone https://github.com/d4rckh/slc
$ cd slc/src
$ gcc *.c functions/*.c -o ../bin/slc
$ cd ..
```
You should now be in the root of the project having the compiled binary in `bin/slc`

## usage

### in

```bash
$ ./slc [path] [optional options]
```
optional options:
- --cat: prints out the contents of the files

### out

```
[743 bytes] slc.c
[17168 bytes] slc
[198 bytes] readme.md
[-1 bytes] ..
[-1 bytes] .
```
