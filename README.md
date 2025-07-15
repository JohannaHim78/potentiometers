This project contains a simple circuit that prints changing voltage onto the arduino serial monitor

1. Current starts at the 5V arduino output pin and then travels to the first leg (R1) of the potentiometer. 
2. Current flows to the second leg (R2) of the potentiometer, then goes to the ground pin. 
3. Then, in order to read the output voltage (due to resistors),
   there is a wire that connects from the output leg to analog pin A5.

Below is an image of the circuit: 
![potentiometers_circuit](https://github.com/user-attachments/assets/69dd5bba-ab1c-4809-bf13-89946db4cd6e)

