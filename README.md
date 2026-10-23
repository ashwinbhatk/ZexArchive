# ZexArchive

A cross-platform command-line archive utility written in C++20.

## Current Status

Early development — Milestone 1.

### Implemented
- Command-line help
- Version reporting
- Unknown-option handling
- CMake-based build system

### Planned
- Create, list, extract, and test ZIP archives
- Cross-platform automated testing
- Custom compression algorithms
- Compression benchmarks
- Future LZMA and 7z compatibility exploration

## Requirements

- C++20-compatible compiler
- CMake 3.20 or newer
- Ninja

## Build

```bash
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Usage

```bash
./build/zexarchive --help
./build/zexarchive --version
```

## License

License to be decided.
