# Requirements
## Introduction
This project is Wiper Control System.Wiper control system designed using STM32F407VG as the main controller, which senses the severity of rain or snow and helps in varying the speeds of wiper accordingly without any manual intervention.Ignition Key Position at ACC: The Red Led is On, if the user button is pressed and held for 2 secs Wiper is On: Wiper is OFF: By the press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key presses, 3 frequency levels with 1, 4 and 8 Hz Wiper Off: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2 Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs.
## Features
* It can control wiper action without human intervention.
* It is reliable and easy to configure.
* It offers three different modes of control - low speed, medium speed, high speed.
## Description
The STM32F405xx and STM32F407xx family is based on the high-performance Arm® Cortex®-M4 32-bit RISC core operating at a frequency of up to 168 MHz. The Cortex-M4 core features a Floating point unit (FPU) single precision which supports all Arm single-precision data-processing instructions and data types. It also implements a full set of DSP instructions and a memory protection unit (MPU) which enhances application security. The STM32F405xx and STM32F407xx family incorporates high-speed embedded.
# Software Requirements
stm32IDE
## Components
STM32F407VG MICROCONTROLLER BOARD
## STM32F407VG
The STM32F405xx and STM32F407xx family depends on the superior execution Arm® Cortex®-M4 32-digit RISC center working at a recurrence of up to 168 MHz. The Cortex-M4 center highlights a Floating point unit (FPU) single accuracy which upholds all Arm single-accuracy information handling directions and information types. It likewise executes a full arrangement of DSP directions and a memory insurance unit (MPU) which upgrades application security. The STM32F405xx and STM32F407xx family integrates fast installed.
## Xpack Packages
Windows Build Tools: The xPack Windows Build Tools is a standalone Windows binary distribution of GNU make and a few of other tools required by the Eclipse Embedded CDT (formerly GNU MCU/ARM Eclipse) project, but the binaries can also be used in generic build environments.
## OpenOCD
Open On-Chip Debugger (OpenOCD) is a free, open-source project that aims to provide debugging, in-system programming, and boundary scan using a debug adapter. The adapter is a hardware module that provides the right signals for the target to understand.
## Qemu
The xPack QEMU Arm is a standalone cross-platform binary distribution of QEMU, with several extensions for Arm Cortex-M devices
## Features Of STM32F407VG Microcontroller
* Adaptable static memory regulator supporting Compact Flash, SRAM, PSRAM, NOR and NAND recollections.
* 512 bytes of OTP memory.
* Up to 192+4 Kbytes of SRAM including 64-Kbyte of CCM (core coupled memory) data RAM.
* Up to 1 Mbyte of Flash memory.
## Working principle
Accept that the car is the microcontroller. Assuming the button is hit, the principal drove (red) will turn on, Clicking again the wiper will begin, and the subsequent drove (blue) will turn on for an ideal rate. Assuming the button is squeezed once more, the third driven (green) will turn on, and the wiper's speed will be expanded in contrast with the past one. The fourth press will turn on the fourth driven (orange), and the wiper speed will be expanded as per the past one. The microcontroller (vehicle) is switched off after the fifth snap.
# USES:
## 4W & H (WHO,WHAT,WHEN,WHERE,HOW)

### WHAT:
* The functional speed of a vehicle wiper is constrained by a wiper speed control instrument in view of downpour conditions. To produce, the control framework consolidates a downpour sensor (30) that identifies downpour conditions. The plentifulness of a simple sign relies upon the distinguished downpour conditions.

### WHY:
* To keep the windscreen clean enough to give adequate view at all times. 
* The windshield wipers remove rain and snow from the windshield, while the headlights improve visibility at night.

### WHO:
* A wiper speed control framework for a car deals with the wiper's working velocity in light of weather patterns.

### HOW:
* You can adjust the speed of the car wiper system according to the rainfall.
### WHERE:
* In general, car wipers are controlled by the stalk on the right side of the steering wheel.
# High and Low Level Requirements
## HIGH LEVEL REQUIREMENTS
| ID | Description | Status |
| ---|:------------|:-------|
| HL1 | car wiper using STM32F407VG | Implemented |
| HL2 | Led glowing in sequence| Implemented |
| HL3 | Car on and off | Implemented |
## LOW LEVEL REQUIREMENTS
| ID | Description | Status |
| ---|:------------|:-------|
| HL1-LL1 | Push Button | Implemented | 
| HL2-LL2 | Red,Green,Blue Leds | Implemented |
# SWOT ANALYSIS
## STRENGTH
* Low Budget
* Good Reputation
* High Bargaining Power Supliers
* Big Influence on the Market
## WEAKNESS
* Structural Inertia
* High Transaction Cost
* No Focus on Private Sector
* Week Focus on Process Innovations
## OPPRONUTIES
* Emerging New Markets 
* Technological Development
* Demand for Saver Equipments
* Technological Lock in of Product
## THREATS
* Low Bargaining Power Buyers
* Highly REgulated Industry
* Ethical Pressure
* Econimical Crisis
