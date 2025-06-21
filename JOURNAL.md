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

I'm not going to lie, this (lack of) housing around the servo doesn't look too good. Thinking of having a cover plate but I don't want to increase complexity...\
<img width="636" alt="Screenshot 2025-06-20 at 7 29 39 PM" src="https://github.com/user-attachments/assets/7089b635-3e1b-4d8d-b72a-79377649b340" />

Progress after ~2h of messing around:\
Axes 1 and 2 are completed! I added hardware models too, to make stuff look better. Moving on to designing the arm.\
<img width="648" alt="Screenshot 2025-06-20 at 7 27 07 PM" src="https://github.com/user-attachments/assets/4630950e-1eaf-4211-99e1-a7e5adf47bdf" />

Almost forget these cutouts for the servo mounting tabs.\
<img width="319" alt="Screenshot 2025-06-20 at 9 55 33 PM" src="https://github.com/user-attachments/assets/719e05a7-1297-4e56-b65f-a31389d797a9" />

No clue how to make things look nice...it seems I can only tell if something's off. Especially in the case of the arm shape design.\
<img width="780" alt="Screenshot 2025-06-20 at 8 07 26 PM" src="https://github.com/user-attachments/assets/151da144-419f-4ff9-a3f3-f0e7cc7e2601" />

Made the arm shape look a bit nicer, + the 3rd axis servo mounting, but the arm looks too 2d.\
<img width="917" alt="Screenshot 2025-06-20 at 10 23 25 PM" src="https://github.com/user-attachments/assets/e6802848-e3b2-4643-838f-7ea5dea42aea" />

New issue: everything seems so skewed to the left, but my sketch for the turret base has so many lines that I can't tell what to change. Trying to move the shoulder servo closer to the center. Got it fixed though (second image). Everything is more centered and the forearm won't be too far from the center.\
Unfortunately, to stop the shoulder joint from being too cantilevered, I had to inset the surface where the shoulder servo horn connected to the arm. Hopefully supports are fine there.\
<img width="200" alt="Screenshot 2025-06-20 at 11 18 13 PM" src="https://github.com/user-attachments/assets/9a5daf73-c4fc-44c3-a42b-a323ebc2bea6" />
<img width="200" alt="Screenshot 2025-06-20 at 11 24 43 PM" src="https://github.com/user-attachments/assets/9cb98566-389c-4cb7-b6cf-82972142708e" />

Attempted to beautify the arm. There's not much I can do to make it look nice besides spam chamfers and fillets, so that's what I did. Personally I think it looks pretty good, but it definitely still looks out of place. Good enough?
<img width="469" alt="Screenshot 2025-06-20 at 11 45 23 PM" src="https://github.com/user-attachments/assets/f4359785-9cc9-47c8-8b77-7bd4c537cb9a" />


For tomorrow, should probably clean this plate up. Looks out of place.
<img width="515" alt="Screenshot 2025-06-20 at 11 42 56 PM" src="https://github.com/user-attachments/assets/d9ac1789-7b9e-4151-8a4c-731c54ec64e1" />

End of day progress: Pretty good, accomplished axes 2 and started 3.\
<img width="524" alt="Screenshot 2025-06-20 at 11 47 08 PM" src="https://github.com/user-attachments/assets/fac9690f-9e3b-4288-b161-df9914259ce5" />


**Session Time: 4.5h**
