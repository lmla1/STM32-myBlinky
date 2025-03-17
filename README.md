# myBlinky

Simple STM32 project that blinks the onboard LED of the STM32F429I-DISC1 using the STM32 HAL library.

## Overview
This project initializes the STM32F4 HAL, configures GPIO for the onboard LED (LED3), and toggles it with a delay of 500ms.

## Hardware Requirements
- STM32F429I-DISC1 development board
- USB connection for power and programming
- System Workbench for STM32 (SW4STM32) or another compatible IDE

## Software Requirements
- STM32 HAL Library
- System Workbench for STM32 (SW4STM32) or STM32CubeIDE
- OpenOCD (for flashing/debugging)

## Building & Flashing
### **Build the Project**
1. Open the project in **System Workbench for STM32**.
2. Select the build configuration (e.g., Debug/Release).
3. Click **Build Project**.

### **Flash to STM32F429I-DISC1**
1. Connect the board via USB.
2. Run OpenOCD (if needed) with:
   ```bash
   openocd -f board/stm32f429discovery.cfg
   ```
3. Flash the binary using:
   ```bash
   st-flash write myBlinky.bin 0x08000000
   ```

Alternatively, use your IDE’s **Run/Debug** configuration to flash.

## Usage
Once flashed, the onboard LED (LED3) will blink at a 500ms interval.

## License
This project is released under the MIT License.
