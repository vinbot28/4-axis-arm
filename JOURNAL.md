---
title: 4 Axis Arm
author: Vincent
description: A robotic arm driven by servos and an Arduino.
created_at: 2025-06-18
---
## ***16.5 Total Hours***


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

# June 22: PCB TIME

Spent an hour trying to figure out what symbols and footprints to use for my components...and they're not even ICs. Had to watch some pcb tutorial videos to figure out what to use for 3 pin headers and the barrel jack. Attempted to connect the parts on the schematic, but it got messy quick.\
![Screenshot 2025-06-22 203323](https://github.com/user-attachments/assets/8a5418d5-3bce-4921-8aaa-eaec4cc7e40f)

Learned of "labels?" which you can connect to and it bridges between connections to the same label. Made the schematic sooooo clean.\
![Screenshot 2025-06-22 210246](https://github.com/user-attachments/assets/260f2eb9-8634-4abd-8565-d49e5cf7bd66)

I used the net checker tool to verify my connections went to the right spots. However, ERC gave me an error about output pins not going into input pins, or something like that. Some googling told me it's just a thing with the input/output power settings for the components. Also, I know that the connections are fine so I just ignored the error. MOVING ON TO PCB LAYOUT!!!

I organized the pin headers by servo or potentiometer, and put it on the respective sides of the nano where the connections didn't overlap each other. I may have redone the layout 3 times...anyway I learned to do a ground pour for the GND lines so I didn't have to route those traces. Yay! Thinking I was done, I ran the DRC, which gave me a "thermal relief connection to zone incomplete" error. Turns out my ground pour wasn't able to reach one of the ground pins on the nano. That was easy to fix just by moving my 5v line out of the way. And now, I have a PCB! I'll work on the silkscreen tomorrow.\
![image](https://github.com/user-attachments/assets/968ee246-bb32-43d3-8f74-3e085af2cc96)
![image](https://github.com/user-attachments/assets/d1a59f83-e4a3-4401-9239-c79691039907)


**Session Time. 3.5h**

# June 23

Finished the PCB. I added 3.25mm mounting holes, as well as some silkscreen labels. DRC checks were all good!\
![image](https://github.com/user-attachments/assets/94e2c879-dd8a-4e56-9169-5678a981d07e)
![image](https://github.com/user-attachments/assets/50652dfd-0f43-4475-bd7a-d551b9b52cc0)

Since the PCB was smooth sailing, I'm going to add an enclosure to this pcb. There needs to be something holding the potentiometers and protecting the board. Exported pcb as a .step from kicad.
Successfully imported it into onshape. I also added a nano model:\
![image](https://github.com/user-attachments/assets/b03bd1ed-2f2f-4188-9dbd-8c183824ea2c)

Ended the day with figuring out the layout for the potentiometers and started the frame model. Going to use m3 heat sets to secure pcb, and m4 heat sets for the cover. 
![image](https://github.com/user-attachments/assets/c9f54bff-ac8c-41ce-86be-33d4002b6414)

**Session Time. 1.0h**

# June 29

Finished the electronics case. Adjusted the potentiometers to not block the servo ports. Good thing there's only 5 pots. 

![image](https://github.com/user-attachments/assets/a14298df-44eb-4a32-93eb-0a5e9797fbb2)

I checked online for the usb and dc jack cable sizes, to make sure there's enough space for wire clearance:

![image](https://github.com/user-attachments/assets/dd9089c3-bebf-436d-94e7-a50807cbf6f6)

Overall looks pretty good. Labeled the pots for the joints they would control. Seems like we're done!
![image](https://github.com/user-attachments/assets/b96cf2a0-1877-4561-9f09-961724170128)

** Session Time: 2.0h **

