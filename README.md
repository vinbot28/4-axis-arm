# 4 Axis Arm
The **4 Axis Arm** is exactly what you think it is. Using 4 servos, the robotic arm achieves 4 degree of freedom movement through the: turret base, shoulder, elbow, and wrist rotation joints. All of the 3d printed parts are designed to use zero to no supports, and there are very few parts in the whole assembly. I've also created an electronics box containing potentiometers, an Arduino Nano (for its popularity and accessibility), and a custom PCB to greatly decrease the wiring hassle. 

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/d4b5e332-f853-4b5c-8138-36b5d85650bd" />

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/0dae4877-3652-4b84-bee7-a313bdc93999" />

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/96e62199-cbd8-4f7f-b254-167194a59e5d" />\
The wiring diagram for the potentiometers to PCB.

I created this project after seeing so many 6 axis arms pop up all over YouTube. Wanting one of my own, I quickly realized how much the components costed and the complexity of the control systems. Despite that, I really wanted to design and play with a robotic arm, and hence the decision to make a 4 axis. Additionally, I couldn't pass down the opportunity to CAD and design a PCB...

# General Instructions:
## Wiring: 
The PCB Silkscreen includes labels for which ports correspond to what component. Px = potentiometer; Sx = servo.\
Potentiometers:
- Pot 1      -> P1 (pcb) = Pin 19 (arduino)
- Pot 2      -> P2 (pcb) = Pin 20 (arduino) 
- Pot 3      -> P3 (pcb) = Pin 21 (arduino)
- Pot 4      -> P4 (pcb) = Pin 22 (arduino)
- Pot 5/claw -> P5 (pcb) = Pin 23 (arduino)


Servos:
- Servo 1/turret   -> S1 (pcb) = Pin 6 (arduino)
- Servo 2/shoulder -> S2 (pcb) = Pin 8 (arduino)
- Servo 3/elbow    -> S3 (pcb) = Pin 9 (arduino)
- Servo 4/wrist    -> S4 (pcb) = Pin 12 (arduino)
- Servo 5/effector -> S5 (pcb) = Pin 14 (arduino)

## Programming:
A sample program is included in this repository to control the servos using the potentiometers. Feel free to create your own programs to run pre-programmed movements, serial-based control, and much more!

# Bill of Materials:

| Item name             | Amount Needed       | Packs to buy    | Total Cost | Link                                                 |
|-----------------------|---------------------|-----------------|------------|------------------------------------------------------|
| MG946R Servo          |                   4 |               4 |      14.52 | https://www.aliexpress.us/item/3256806315358281.html |
| M4 6x5 Heat set       |                  23 |               1 |       2.64 | https://www.aliexpress.us/item/3256803396040989.html |
| M3 3x5 Heat set       |                   3 |               1 |       2.05 | https://www.aliexpress.us/item/3256803396040989.html |
| M4-6 SHCS             |                  20 |               1 |       1.55 | https://www.aliexpress.us/item/2255800598515019.html |
| M4-8 SHCS             |                   3 |               1 |       1.64 | https://www.aliexpress.us/item/2255800598515019.html |
| M3-6 SHCS             |                   3 |               1 |       1.41 | https://www.aliexpress.us/item/2255800598515019.html |
| Male/Female headers   |                   1 |               1 |       2.21 | https://www.aliexpress.us/item/2255800687544049.html |
| Female DC barrel jack |                   1 |               1 |       1.53 | https://www.aliexpress.us/item/3256802343987191.html |
| Arduino nano          |                     |               1 |       5.73 | https://www.aliexpress.us/item/3256806718205824.html |
| PCB                   |                     |               1 |          5 | jlcpcb.com                                           |
|                       |                     |                 |            |                                                      |
| 5v AC-DC Power supply |                   1 |               1 |       9.99 | https://a.co/d/4vrQsQI                               |
|                       |                     |                 |            |                                                      |
|                       |                     | Subtotal:       |      48.27 |                                                      |
|                       |                     | Grand Total     |      58.31 |                                                      |
| JLC Shipping          | Aliexpress Shipping | Amazon Shipping |            |                                                      |
|                   3.2 |                6.84 | N/A             |            |                                                      |
