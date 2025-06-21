---
title: 4 Axis Arm
author: Vincent
description: A robotic arm driven by servos and an Arduino.
created_at: 2025-06-18
---

# June 18th: Figured out the layout of the arm + got the base sorted out

Started cad work of the 4 axis. Also decided on using MG946R servos for their torque.

Axes: 
1. turret base
2. shoulder
3. elbow
4. wrist roll

CHALLENGE for this project: design all the 3d printed parts to not require slicer generated supports
* quite tedious to remove and it'd be a cool skill to have, especially since I do robotics and use 3d printing a lot

Single part base, printed upside down. Servo slots in from the bottom, and screws into some heat set inserts 
![Assembly 2](https://github.com/user-attachments/assets/b2d57354-805e-4c34-88e4-0677ead009ea)

Whole part is printed upside down, not requiring supports. To tackle the base mounting point overhangs, I added small bridges under to the counterbore. Much easier to understand in the photo, but it lets the printer have some material to print on top off.
I also chamfered the overhanging protrusion of the "legs" since printers don't struggle with printing at 45 degrees.
![Assembly 2 (1)](https://github.com/user-attachments/assets/c402a4fd-e968-42c9-a6fe-bf5ef3cb4b9e)
![Assembly 2 (2)](https://github.com/user-attachments/assets/7ad4efc6-ef20-44e2-a342-01e28e4a911a)

I'm currently doubting whether or not my servo cad file is correct in its dimensions, though it shouldn't be too bad to adjust them when I get the arm fabricated.

**Session Time: 3h**

# June 20: Shoulder axis (Axis 2)

Spent 30 minutes trying to decide how to continue the turret top without making it look so ugly. 
Settled on making the turret platform diameter from 90mm to 74mm. Also, chopping off unnecessary volume. Unfortunately, without splitting the part into two pieces, supports are needed for the shoulder servo recess. Maybe adjusting the goal to use supports only if they're fast and easy to remove?

Actually no I will just remove the bridged material since it's a waste of filament and space. Might also cause clearance issues when the arm is added later on:

<img width="784" alt="Screenshot 2025-06-20 at 6 21 20 PM" src="https://github.com/user-attachments/assets/6eced5a7-f5f7-485b-b19c-0fb3f9e2e5af" />

Progress after ~1.5h of messing around:\
<img width="664" alt="Screenshot 2025-06-20 at 6 20 03 PM" src="https://github.com/user-attachments/assets/6daca7c2-e09a-4d50-8d4e-8abb2e48bd52" />


**Session Time: 2.5h**
