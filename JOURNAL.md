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

# June 21: Axis 3

Starting axis 3. Sketch for side view of axis 3 + axis 4 servo.\
<img width="589" alt="Screenshot 2025-06-21 at 10 21 36 AM" src="https://github.com/user-attachments/assets/09c94e7a-6994-42be-ab5f-df29e2b0d3ee" />

Drew this up for the shape of the remaining axes:\
<img width="242" alt="Screenshot 2025-06-21 at 10 24 27 AM" src="https://github.com/user-attachments/assets/39d0214f-b54b-4a8e-bebf-d046cb8c81d3" />

Finally something presentable for axis 3. Axis 4 will be inline with axis 3 point of rotation, and that defined many of the locational dimensions in the sketch. Also tried to include some curves so everything doesn't look to boring and simplistic.\
<img width="758" alt="Screenshot 2025-06-21 at 12 00 22 PM" src="https://github.com/user-attachments/assets/6b964be4-d10f-4f3d-b9c1-b4c50765c4fa" />

YES! No clearance issues today, and the proportions seem about right. Time to make the actual servo mount part.\
<img width="516" alt="Screenshot 2025-06-21 at 12 07 20 PM" src="https://github.com/user-attachments/assets/e428d820-e85a-42d2-a70e-5ab0c3811ba1" />

Finished servo mount. I'm not too sure if the actual mounting towers would break. With the (non) loads this arm will tackle, I have my doubts they'll break. It's also a 9.9mm^2 tower so I could just increase walls + infill as needed.\
<img width="515" alt="Screenshot 2025-06-21 at 1 15 51 PM" src="https://github.com/user-attachments/assets/10282d44-1a24-4d8a-b0f5-454580bf45ef" />

I also took some time to recenter everything so that axis 4 is on the line of symmetry of the base:\
<img width="250" alt="Screenshot 2025-06-21 at 1 19 06 PM" src="https://github.com/user-attachments/assets/514fba6b-38fa-4004-91dd-15d8d92e7297" />
<img width="250" alt="Screenshot 2025-06-21 at 1 19 16 PM" src="https://github.com/user-attachments/assets/92578023-8571-4904-b9cc-e774b907db75" />


**Session Time. 2.5h**
