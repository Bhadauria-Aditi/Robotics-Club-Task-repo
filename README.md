Initial commit is the defualt code in Arduino.
V1 commit is for my original thought. This code would work well with a switch. When switch is on, the led blinks, when it is off led is off. 
The output for this code is attached. 
The logic for V1-
First we start by define the pins as per the connections made. 
The setup() fuction sets LED pin as OUTPUT and BUTTON (switch here) as INPUT. We set LED to off initially.
In the loop() fuction, first we read the input of button using digitalRead(). High means button is presserd and vice versa. 
When button is pressed(HIGH), led is turned ON (using digitalWrite()) for 1000 milisec and then off for 1500 milisec using the delay() command. 
When button is not pressed(LOW), led is off.
Serial.println() is used to display the corresponding state of LED.
Since this would work with a switch and not with a button I had to come up with a different approach.

