# INTRODUCTION:
Wiper is a fundamental part that is utilized to clear raindrops or any water off of the windscreen. Wipers are planned and made to clean the water off of a windscreen. Most vehicles have two wipers on the windscreen, one on the back window and the other on every front light. The wiper parts noticeable from outside the vehicle are the elastic edge, the wiper arm holding the sharp edge, a spring linkage, and portions of the wiper turns. The actual wiper has around six sections called pressure focuses or paws that are little arms under the wiper

The current framework utilizes a control tail to initiate the wiper and the most common way of pulling up the wiper is difficult.r needs to turn on and off the control tail and it will diminish the driver's focus during the driving. Accordingly, this framework is proposed to tackle this large number of issues. The idea of this wiper framework is like other ordinary wipers, yet this framework will be moved up to a programmed control framework by utilizing a controller.When water hits a devoted sensor situated on the windscreen, it sets off the wiper engine to move. isn't distinguished by sensor, the wiper will consequently stop. This will assist the driver with giving more focus and lessen the auto collision likelihood.

In this task, there were two advancements checked on as the writing survey. The two were planned with various ideas and working component anyway with same goal of working standard of the vehicle wiper. The downpour sensor was a profoundly adaptable gadget for programmed cleaning of vehicle windscreen when it is wet because of dampness, raindrops or even mud. It worked by mirroring amicable light pillars inside the windscreen. Whenever raindrops fall onto the windscreen, this amicability light is upset and making a drop in the light bar force. The framework then, at that point, initiated the wipers to be worked in full programmed mode. It makes some reaction memories of 0.1 seconds. It considered a speedy response when an abrupt sprinkles of water will make the driver thoroughly 'blinds' when the circumstance occurred. With the programmed wiper, the driver can deflect the gamble of a mishap. The programmed wiper is significant during weighty traffic, for example around, city, school zone and other public spots. A driver might be exposed to numerous interruptions with awful climate, perilous street conditions and weariness. The Rain Sensor diminished the driver's weight by making driving more agreeable. Following a wet vehicle is as of now not an annoyance as location of even 0.005 milliliters of water is conceivable.

# COMPONENTS AND SUPPLIES:
1.STM32F407 Discovery Board
2.LEDs
3.Push Button
4.Resistors
5.Power Supply

# ADVANTAGES:
* Rain sensors store water during rain events, allowing it to be available throughout the summer and winter.
* It is quite simple to use.
* As a consequence, rain sensor-based equipment like vehicle wipers and irrigation systems last longer since they only work when needed.
* Individual rain sensors are fairly inexpensive.
* Rain sensor-based systems are extremely simple to install.
* To save money during wet seasons, turn off the irrigation system. Electricity bills are lowered as a consequence.

# DISADVANTAGES:
* Rain sensors must make a decision within a few minutes to avoid erroneous detection of rain.
* The entire system cost rises when more components, including a rain sensor, are required.
* When water falls squarely on the rain sensor, the mechanism activates.

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
| H_01 | car wiper using STM32F407VG | Implemented |
| H_02 | Led glowing in sequence| Implemented |
| H_03 | Car on and off | Implemented |
## LOW LEVEL REQUIREMENTS
| ID | Description | Status |
| ---|:------------|:-------|
| L_01 | Push Button | Implemented | 
| L_02 | Red,Green,Blue Leds | Implemented |
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
# Exploring STM32F407 Discovery Board:
![image](https://user-images.githubusercontent.com/101699116/168215005-061df6d3-4596-4639-8eea-13b069ee27cb.png)
* This venture gives practically all the fundamental data expected to begin with STM32F407 Discovery Board and furthermore advancement of driver code.
* Hardware Used : STM32F4 DISCOVERY kit, for more information visit: STM32F4 DISCOVERY
* Software Tool : STM32cubeIDE, for more information visit: STM32CubeIDE
* For installation of STM32CubeIDE refer Youtube
* Note : As this microcontroller has many advanced features and the main aim of this project is to get all basic insights, during the driver development only the required functionalities are added and other advanced functionality is not added. I may update the driver and other functionality in the future.
Please find the STM32F4 Discovery User Manual,STM32F4xxx Reference Manual (RM0090) and other related documents inside a folder called Documents. I will be referring to these documents for information such as block diagrams, register details ect.

# Overview of STM32F407VGT6 Microcontroller:
![image](https://user-images.githubusercontent.com/101699116/168215163-99ec0ff2-693d-4425-8061-783fa20e6fb0.png)
The STM32F407 Discovery board utilizes STM32F407VGT6 Microcontroller which has ARM Cortex-M4F Processor, which is fit for running upto 168Mhz. This MCU has numerous peripherals, for example, GPIO ports, TIMERS, ADCs, DACs, Flash Memory, SRAM, SPI, UART ect. The processor and peripherals talk by means of BUS-Interface. There are three transports accessible

I-BUS (Instruction Bus) D-BUS (Data Bus) S-BUS (System Bus) I-BUS This transport interfaces the Instruction transport of the Cortex®-M4 with FPU(Floating point unit) center to the BusMatrix. This transport is utilized by the center to bring directions. The objective of this transport is a memory containing code (inward Flash memory/SRAM or outer recollections through the FSMC/FMC).

D-BUS This transport associates the databus of the Cortex®-M4 with FPU to the 64-Kbyte CCM information RAM to the BusMatrix. This transport is utilized by the center for strict burden and troubleshoot access. The objective of this transport is a memory containing code or information (inward Flash memory or outer recollections through the FSMC/FMC).

S-BUS This transport interfaces the framework transport of the Cortex®-M4 with FPU center to a BusMatrix. This transport is utilized to get to information situated in a fringe or in SRAM. Directions may likewise be brought on this transport (less productive than ICode). The objectives of this transport are the inward SRAM1, SRAM2 and SRAM3, the AHB1 peripherals including the APB peripherals, the AHB2 peripherals and the outside recollections through the FSMC/FMC.

So guidelines and information use I-transport and D-transport individually, All the other fringe utilizes System transport. The Cortex-M4 processor contains three outside Advanced High-execution Bus (AHB)- Lite transport connection point and one Advanced Peripheral Bus (APB) interface. The GPIOs are associated with AHB1 transport which has a most extreme speed of 150Mhz and is isolated into two transports as APB1 and APB2. APB1 runs at 42Mhz(max) and APB2 runs at 82Mhz(max). The various peripherals like SPI, UART, TIMERs, ADCs, DACs, and so on are associated with either APB1/APB2 transports. Also, the AHB2(168Mhz max) is associated with Camera and USB OTG interfaces, AHB3 is associated with External memory regulator.
# Output 
* User button pressed and hold it for two seconds(Led On)
![User Button_Led on](https://user-images.githubusercontent.com/101423374/168374187-66e2dcc2-5852-4517-9e74-5f8ae9884f5c.JPG)
* Wiper Speed Low
![Wiper Speed Low](https://user-images.githubusercontent.com/101423374/168374264-5ce8f8c4-eb54-4f5c-a3c4-7fec8d349710.JPG)
* Wiper Speed Medium
![Wiper Speed Medium](https://user-images.githubusercontent.com/101423374/168374347-ebc84ddd-dc5e-49d7-846a-2aaccb2ca780.JPG)
* Wiper Speed High
![Wiper Speed High](https://user-images.githubusercontent.com/101423374/168374430-f329757a-569c-47e0-a7ee-4cce6628d558.JPG)
* User button pressed and hold it for two seconds(Led Off)
![User Button_Led off](https://user-images.githubusercontent.com/101423374/168374653-91a11238-b3be-4799-afe5-95cc31c23d62.JPG)
* Wiper System
![Wiper System](https://user-images.githubusercontent.com/101423374/168374707-93b5219e-15cd-4606-96b9-8d87cc472f85.JPG)




