# Thermal-Alarm-With-Toggle-Switch
Arduino-based thermal alarm system with toggle switch control (DHT11,push button,buzzer,LEDs)

# 🌡️Thermal Alert System - Room Temperature Above 31°C

Alerts people in the room when ambient temperature exceeds 31°C through a visual(LEDs) & audible alarm (buzzer). A push button gives manual control: press to turn off the alarm when it becomes disruptive , press again to re-activate whether the temperature is still above 31°C .

# Components Used :

. ARDUINO UNO

.DHT11 (Temperature & humidity sensor)

.push button

.2 LEDs ( 1 green + 1 red )

.2 resistors 220 Ω (to protect the LEDs)

.Passive Buzzer

.Breadboard ( I used 2 of them for easier wiring )

# Connections :

|  Device     | Pin  |
|-------------|------|
| DHT11       |2     |
| Red LED     |3     |
| Green LED   |4     |
| Push button |7     |
| Buzzer      |8     |

# Software needed :

. Arduino IDE

. DHT11 sensor library  

# States :
the system operates through the following logic states :


-**Standby**:system monitoring temperature, alarm inactive (temperature<31℃).

-**Alarm Triggered**: when temperature exceeds 31℃ , RED LED & buzzer activate automatically.

-**Manually silenced**: user presses push button , the alarm turns off completely, regardless of temperature.

-**Re-armed**: user presses push button again, system re-checks temperature and re-triggers alarm if still above 31℃.


# Problem Solving & Debugging :

Getting the toggle logic to behave correctly took the most effort - especially handling button state transitions cleanly (avoiding false triggers from a single press) and making sure the alarm state didn't conflict with the automatic temperature check.Debugging this took about 6 days of iteration and testing.

# Demo
[Watch the demo on linkdIn] 
