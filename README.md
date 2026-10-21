# [Binaryen](https://github.com/WebAssembly/binaryen.git) on the zig build system

uses the [Zig](https://ziglang.org/) build system to build WebAssembly's binary
C tools.

## building

```zig build
zig build
```

## add to your zig project

```bash
zig fetch --save git+https://github.com/allyourcodebase/binaryen.git
```

# Cli usage

```
> ./zig-out/bin/wasm-merge --help
================================================================================
wasm-merge INFILE1 NAME1 INFILE2 NAME2 [..]

Merge wasm files into one.
```
