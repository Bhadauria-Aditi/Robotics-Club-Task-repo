# Code Explanation

**My undertsanding of the question- we need to create a toggle such that when button is pressed once and then relased, the led starts blinking and when it is pressed again and then relased, the led stops blinking.**

## The logic for V1
V1 commit is for my original thought. This code would work well with a switch. When switch is on, the led blinks, when it is off led is off. 
First we start by define the pins as per the connections made. 
The setup() fuction sets LED pin as OUTPUT and BUTTON (switch here) as INPUT. We set LED to off initially.
In the loop() fuction, first we read the input of button using digitalRead(). High means button is presserd and vice versa. 
When button is pressed(HIGH), led is turned ON (using digitalWrite()) for 1000 milisec and then off for 1500 milisec using the delay() command. 
When button is not pressed(LOW), led is off.
Serial.println() is used to display the corresponding state of LED.

## The logic for V2-
Since this would work with a switch and not with a button(or the button would have to be kept pressed continuously) I had to come up with a different approach, in which I made use of a counter variable, when the pushbutton is pressed it increments the value of c by 1, where c was initially 0. So when c=odd LED blinks and when c=even it turns the led off.
First we start by define the pins as per the connections made. 
The setup() fuction sets LED pin as OUTPUT and BUTTON (switch here) as INPUT. We set LED to off initially.
In the loop() fuction, first we read the input of button using digitalRead(). When the button is pressed, the in is HIGH but as soon as it is relased it goes back to low. So when the button is HIGH we increment the counter. A delay is added here to ensure stable and single inputs. 
if (c % 2 != 0) checks if the counter is odd, if yes then LED starts blinking using delay(), if not it is turned off. 

# The logic for final
**Since V2 seemed like an imporvised approach, I looked into ways to toggle and the final version is just that. 
In this version I have also added the variable speed, which can be used to change the speed of blinking (by using delay()).
I used prev_state and rn_state to comapre current and previous button states and with help of flag variable to check when the button goes from LOW TO HIGH, i.e, last state should be low and current high, this would indicate one physical press of the button. If this is the case, the flag which was originally false has to be made true, but if it wa already true then that means the last press had turned the flag true making the led blink so it needs to be made flase in order to turn it off. prev_state = rn_state is used to update the memory of the button's last state.
This is done by the conditional if statements in the code.**


