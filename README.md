**The question was a little vauge, so this is my take- we need to create a toggle such that when button is pressed once and then relased, the led starts blinking and when it is pressed again and then relased, the led stops blinking.**

**Initial** commit is the defualt code in Arduino.
V1 commit is for my original thought. This code would work well with a switch. When switch is on, the led blinks, when it is off led is off. 
The output for this code is attached. 
**The logic for V1**-
First we start by define the pins as per the connections made. 
The setup() fuction sets LED pin as OUTPUT and BUTTON (switch here) as INPUT. We set LED to off initially.
In the loop() fuction, first we read the input of button using digitalRead(). High means button is presserd and vice versa. 
When button is pressed(HIGH), led is turned ON (using digitalWrite()) for 1000 milisec and then off for 1500 milisec using the delay() command. 
When button is not pressed(LOW), led is off.
Serial.println() is used to display the corresponding state of LED.
**The logic for V2**-
Since this would work with a switch and not with a button I had to come up with a different approach, in which I made use of a counter variable, when the pushbutton is pressed it increments the value of c by 1, where c was initially 0. So when c=odd LED blinks and when c=even it turns the led off.
First we start by define the pins as per the connections made. 
The setup() fuction sets LED pin as OUTPUT and BUTTON (switch here) as INPUT. We set LED to off initially.
In the loop() fuction, first we read the input of button using digitalRead(). When the button is pressed, the in is HIGH but as soon as it is relased it goes back to low. So when the button is HIGH we increment the counter. A delay is added here to ensure stable and single inputs. 
if (c % 2 != 0) checks if the counter is odd, if yes then LED starts blinking using delay(), if not it is turned off. 




