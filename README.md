**INTRO TO POTENTIOMETERS**
This project contains a simple circuit that prints changing voltage onto the arduino serial monitor. 

**Components used** 
 - Arduino Uno Rev3
 - Jumper wires 
 - 10k ohm potentiometer
 - Breadboard 

**Breakdown of Circuit**
1. Current starts at the 5V arduino output pin and then travels to the first leg (R1) of the potentiometer. 
2. Current flows to the second leg (R2) of the potentiometer, then goes to the ground pin. 
3. Then, in order to read the output voltage (due to resistors),
   there is a wire that connects from the output leg to analog pin A5.

Below is an image of the circuit: 
![potentiometers_circuit](https://github.com/user-attachments/assets/69dd5bba-ab1c-4809-bf13-89946db4cd6e)

**Breakdown of Code** 
I first set my variables: 
 - vPin: Analog pin that reads voltage from potentiometer.
 - vRaw: Reads vPin's voltage. Since arduino code saves voltage from numbers (0 - 1023), vRaw does not showcase voltage 0V - 5V.
 - realVout: Uses equation ((5/1023) * vRaw) to showcase voltage 0V - 5V.

For the setup, I set the serial monitor baud rate to 9600. 

For the loop, I let vRaw equal the voltage read from vPin (A5). 
Then, I set realVout to ((5/1023) * vRaw) which will showcase voltage from 0V - 5V. 
Finally, I used Serial.print to print out realVout. I then added the delay function so that the changing voltage would be displayed every second. 

Below shows the serial monitor output. 

<img width="133" height="216" alt="POTENTIOMETERS_serial_monitor" src="https://github.com/user-attachments/assets/cd3a9c22-c705-4d44-9a45-7bf0adcdb66b" />

**What I Learned** 
I understand now that a potentiometer is a useful tool that helps vary resistance in real time. This short project helped me 
learn how to wire a potentiometer as well as creating a circuit diagram including a potentiometer. 


