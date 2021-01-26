# Fire Alarm
  ## Abstract:
In our project we are making a fir alarm which will indicate if a fire start at that place by beeping sound of buzzer and glowing red led indicationg sign of danger.For detecting fire we are using fire sensor which have IR sensor there which detects the flickering fire. It detects low frequency and flickering fire whose sensitivity can be adjusted by changing the potentiometer. 
### Components:
1.	Flame Sensor
2.	Arduino UNO
3.	Buzzer
4.	LED
5.	Resistor 20ohm

### About Component:
   • Flame Sensor:fire sensor which have IR receiver which detects the flickering fire. It detects low frequency and flickering fire whose sensitivity can be adjusted by             changing the potentiometer on the module.
   
   When fire starts, it produces gas as well as infra-red light which will get detected by the IR receiver on the module.It can detect upto 100cm with 60º.
   The black led in the image is an IR receiver.
   
   But problem is it can detect any IR rays and can idicate that fire has start.So it is not too accurate.
   For more accuracy we can add up more sensors and add logics in program. But I have only done interfacing of IR Flame detector that's why i will not further discuss about that.
   
   
![kisspng-microcontroller-electronics-sensor-electronic-comp-flame-sensor-5b0a34f37fed72 222226771527395571524](https://user-images.githubusercontent.com/73650233/105885090-ae105480-602e-11eb-9be0-55d540359055.png)

Buzzer:
Operating Voltage 3 to 8V.
Buzzer has 2 pins (Ground, Power).Inside the cylindrical buzzer there is a piezo element. When a power given to buzzer then the ceramic disc inside the piezo elements start vibrating. Hence creating a sound

If we apply different frequency to the buzzer from pwm pins then it vibration changes making different beep sound or a tone

 ![pngwing com (1)](https://user-images.githubusercontent.com/73650233/105885267-ee6fd280-602e-11eb-9a22-9a0544992eba.png)
 
### Circuit Diagram:

![Circuit](https://user-images.githubusercontent.com/73650233/105885358-0cd5ce00-602f-11eb-99f7-5c9242f72cdb.png)

### Working: 
When fire ignition starts, it emits infra-red light which are received by IR receiver and if no fire receriver not get any input.

![Circuit](https://user-images.githubusercontent.com/73650233/105890505-75c04480-6035-11eb-93ce-db901cff03db.jpg)

When fire is detected then,
it sends a high signal to the arduino (logic 1) indicating fire and buzzer starts beeping and led will also light up.

![Screenshot (622)](https://user-images.githubusercontent.com/73650233/105891130-452cda80-6036-11eb-9ae3-1b9d88782a30.png)

When fire is not detected,
it sends a low signal to controller and indicating everything is fine here.So led will be in low state and buzzer will not be creating sound.

![1](https://user-images.githubusercontent.com/73650233/105891419-a2c12700-6036-11eb-99ce-fe278732b614.PNG)


### Program Logic:

     val=digitalRead(sensor);
  
	if (val==1)
	digitalWrite(led,HIGH);
	digitalWrite(buzzer,HIGH);
	then delay for  0.5 seconds
	digitalWrite(led,LOW);
	digitalWrite(buzzer,LOW);
	
	
	if (val==0)
	digitalWrite(led,LOW);
	digitalWrite(buzzer,LOW);
