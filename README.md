# 4 Axis Arm
The **4 Axis Arm** is exactly what you think it is. Using 4 servos, the robotic arm achieves 4 degree of freedom movement through the: turret base, shoulder, elbow, and wrist rotation joints. All of the 3d printed parts are designed to use zero to no supports, and there are very few parts in the whole assembly. I've also created an electronics box containing potentiometers, an Arduino Nano (for its popularity and accessibility), and a custom PCB to greatly decrease the wiring hassle. 

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/d4b5e332-f853-4b5c-8138-36b5d85650bd" />

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/0dae4877-3652-4b84-bee7-a313bdc93999" />

<img width="317" alt="Screenshot 2025-06-30 at 8 35 14 AM" src="https://github.com/user-attachments/assets/96e62199-cbd8-4f7f-b254-167194a59e5d" />\
The wiring diagram for the potentiometers to PCB.

I created this project after seeing so many 6 axis arms pop up all over YouTube. Wanting one of my own, I quickly realized how much the components costed and the complexity of the control systems. Despite that, I really wanted to design and play with a robotic arm, and hence the decision to make a 4 axis. Additionally, I couldn't pass down the opportunity to CAD and design a PCB...

Bill of Materials:

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
