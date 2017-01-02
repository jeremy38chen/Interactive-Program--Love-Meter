# Interactive-Program--Love-Meter
#Introduction
The purpose of this project is to make a thing which shows the hot degree of your body by the level of the LED. There are three LED to show the temperature level of your body. One of the LED will light up when
your body is at low degree, and the second LED will light up when your body is at normal level, and so on.

#How to do it
I am going to make a body heat detector by Arduino. First of all, input A0~A5 are analog input, which the range of the detective level are 0 to 1023. Therefore, I separate 1023 into three pieces (Because of the number of LED) to make the LED light up in different level. For example, when the value of input exceeds one third of 1023, it is at low degree.
