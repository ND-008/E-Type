# E-Type

**E-Type** is an open source typing course written solely in C++. It’s designed to make fast and accurate typing accessible to everyone—free of charge, on any major desktop platform.

## Description

E-Type: An open source typing course written in C++ to help users improve their speed and accuracy, completely free and accessible to everyone.

## Features

- Fully open source and free to use
- Runs natively on Linux, Windows, and macOS
- Solely written in C++ for performance and portability
- Guided lessons and exercises to improve speed and accuracy
- User-friendly interface for all skill levels
- No proprietary dependencies

## Download & Install

E-Type is available as a native application for Linux, Windows, and macOS. You can simply download and install the program to get started with the full typing course experience.

### Windows

- Download the latest `.exe` installer from the [Releases page](https://github.com/ND-008/E-Type/releases).
- Run the installer and follow the on-screen instructions.

### macOS

- Download the latest `.dmg` (or `.pkg`) file from the [Releases page](https://github.com/ND-008/E-Type/releases).
- Open the file and drag E-Type to your Applications folder.

### Linux

- Download the `.deb` or `.AppImage` from the [Releases page](https://github.com/ND-008/E-Type/releases).
- For `.deb` (Debian/Ubuntu):
  ```bash
  sudo dpkg -i E-Type-x.y.z.deb
  ```
- For `.AppImage`:
  ```bash
  chmod +x E-Type-x.y.z.AppImage
  ./E-Type-x.y.z.AppImage
  ```

### Build from Source

Prefer compiling yourself? Here’s how:

#### Prerequisites

- C++ compiler (`g++`, `clang++`, or Visual Studio)
- Git

#### Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/ND-008/E-Type.git
   cd E-Type
   ```
2. Compile the source code (replace `main.cpp` with your entry point if different):
   - **Linux/macOS:**
     ```bash
     g++ -o etype main.cpp
     ```
   - **Windows (MinGW):**
     ```bash
     g++ -o etype.exe main.cpp
     ```
3. Run the program:
   - **Linux/macOS:**
     ```bash
     ./etype
     ```
   - **Windows:**
     ```cmd
     etype.exe
     ```

## Usage

After launching E-Type, simply follow the on-screen instructions to begin your typing lessons. Progress through exercises and track your improvement in speed and accuracy.

## Contributing

Contributions are welcome! Please open an issue to discuss your ideas or submit a pull request.

## License

This project is licensed under the MIT License.

## Author

Developed by [ND-008](https://github.com/ND-008)

---

Let me know if you want to add badges, screenshots, or more specific usage examples!