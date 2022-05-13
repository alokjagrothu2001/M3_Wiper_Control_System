# TEST Cases
## High Level Test Cases
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS | 
| --------|:------------|:--------|:--------|:-----------|:-------------| 
|H_01 | check if the Button is pressed | program execution | Microcontroller/Engine starts | Led on(Red)|✅ |
|H_02 | check if the Button is pressed | program execution | Wiper starts | Led On(Blue)|✅ |
|H_03 | check if the Button is pressed | program execution | Wiper starts | Led On(Green)| ✅ |
|H_04 | check if the Button is pressed | program execution | Wiper starts | Led On(Orange)| ✅ |
|H_05 | check if the Button is pressed | - | Microcontroller stops | Led Turned Off| ✅ |
## Low Level Test Cases
 | Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS | 
 | --------|:------------|:--------|:--------|:-----------|:-------------| 
 |L_01 | check if the Button is pressed | program execution | Microcontroller starts | Led On(Red)| ✅ |
 |L_02 | check if the Button is pressed again | program execution | Wiper starts and speed of wiper is slow | Led On(Blue) | ✅ |
 |L_03 | check if the Button is pressed again | program execution | Wiper starts and speed of wiper is moderate | Led On(Green) | ✅ |
 |L_04 | check if the Button is pressed again | program execution | program execution	Wiper starts and speed of wiper is good |Led On (Orange)| ✅ |
 |L_05 | check if the Button is pressed again | - | Microcontroller stops |	Led Turned Off | ✅ |

