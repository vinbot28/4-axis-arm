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

**Session Time: 3h**
