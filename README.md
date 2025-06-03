# Sensor Hub – Embedded Simulation in C

A simple embedded-style system written in C that simulates a sensor hub with temperature and humidity sensors, using UART and I2C-like mock interfaces. Designed to demonstrate embedded development skills without requiring physical hardware.

---

## 🔧 Features

- 🌡️ Simulated Temperature Sensor (I2C Mock)
- 💧 Simulated Humidity Sensor (I2C Mock)
- 📟 UART-like interface (command line)
- 🧠 Command interpreter (CLI)
- 🧪 Modular code structure similar to real embedded projects
- 🖥️ Can run on Windows/Linux with no microcontroller needed

---

## 📸 Demo

```
> read_temp
Temp: 24.31 C

> read_humidity
Humidity: 47.88 %

> status
System OK. 2 sensors active.

> help
Commands: read_temp, read_humidity, status, help
```

---

## 📁 Project Structure

```
sensor-hub/
├── src/
│   ├── main.c              # Main loop
│   ├── uart.[ch]           # UART simulation (printf/fgets)
│   ├── i2c_mock.[ch]       # Fake I2C sensor data
│   ├── sensor.[ch]         # Sensor abstraction
│   ├── cli.[ch]            # CLI command handler
├── Makefile                # (For Linux/macOS/WSL users)
├── README.md
```

---

## ⚙️ Build & Run Instructions

### ✅ On Windows (Visual Studio)
1. Open in Visual Studio (Console App, C).
2. Add `.c` and `.h` files to the project.
3. Set `Compile As` to `Compile as C Code (/TC)`.
4. Press `Ctrl+F5` to run.

### ✅ On Linux/macOS/WSL
```bash
cd src
make       # or gcc *.c -o sensorhub
./sensorhub
```

### ✅ On Windows (PowerShell + cl.exe)
Open "Developer Command Prompt for VS":

```powershell
cd path\to\sensor-hub\src
cl /Fe:sensorhub.exe *.c
.\sensorhub.exe
```

---

## 🧠 Learning Objectives

This project demonstrates:

- Writing modular C code in an embedded context
- Simulating peripheral interfaces (I2C, UART)
- Designing a simple command interpreter
- Creating hardware-agnostic embedded systems

---

## 🚀 Possible Extensions

- [ ] Add a `log` command to view recent sensor readings
- [ ] Add real-time clock simulation
- [ ] Simulate sensor faults (e.g. disconnected sensor)
- [ ] Add JSON output mode
- [ ] Port to STM32 or Arduino (using HAL)

---

## 📜 License

MIT License – free to use, modify, or expand.

---

## 🙋‍♂️ About Me

This project was created as a learning and portfolio piece to demonstrate C and embedded development skills. I'm passionate about embedded systems, and looking for opportunities as a junior embedded/software engineer.
