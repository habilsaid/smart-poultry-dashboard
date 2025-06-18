Smart Poultry Monitoring System - User Manual (Updated for User Authentication)
1. Introduction
This manual explains how to set up and use the Smart Poultry Monitoring System, including user registration, login, hardware setup, and dashboard usage.

2. User Account Setup
Step 1: Sign Up (First-Time Users)
Open a web browser and go to:https://habilsaid.github.io/smart-poultry-dashboard/


Fill in the registration form:

Full Name

Email (used for login)

Password (minimum 6 characters)

Confirm Password

Click "Sign Up".

You will receive a confirmation email. Click the link to verify your account.

Step 2: Login (After Registration)
Go to: https://habilsaid.github.io/smart-poultry-dashboard/


Enter your Email and Password.

Click "Login".

You will be redirected to the Dashboard.

Note: If you forget your password, click "Forgot Password?" (if available) or contact support.

3. Hardware Setup
Components & Wiring
Component	ESP32 Pin
DHT22 (Temp/Hum)	GPIO 16
MQ135 (Gas)	GPIO 39
LDR (Light)	GPIO 34
Fan	GPIO 19
Heating Lamp	GPIO 32
Normal Lamp	GPIO 33
Buzzer	GPIO 18
Keypad Rows	25,26,27,14
Keypad Columns	12,13,4,17
Power On & Wi-Fi Setup
Plug in the 5V/12V power adapter.

The ESP32 will create a Wi-Fi hotspot named "SmartPoultry_AP" (Password: 12345678).

Connect to this Wi-Fi from your phone/PC.

Open a browser and go to 192.168.4.1.

Select your home Wi-Fi and enter the password.

Click Save → The device reboots and connects.

4. Setting Thresholds (Keypad)
After Wi-Fi setup, the LCD will prompt:

"Set T High:" → Enter max temperature (e.g., 35), press #.

"Set T Low:" → Enter min temperature (e.g., 20), press #.

"Set LDR:" → Enter light threshold (e.g., 500), press #.

"Gas:" → Enter gas threshold (e.g., 400), press #.

✅ Thresholds saved! The system now automatically controls fans, lamps, and alarms.

5. Using the Web Dashboard
Dashboard Features
Section	Functionality
Live Readings	Temperature, Humidity, Gas, Light
Actuators	Manual ON/OFF for Fan, Lamps, Buzzer
Thresholds	Adjust min/max values
Charts	Historical data graphs
Logs	System activity (Admin only)
How to Adjust Settings
Change Thresholds:

Go to "Adjust Thresholds".

Modify values → Click "Save".

Manual Control:

Toggle Fan/Lamp/Buzzer buttons.

View Data:

Check "Graphical Analysis" for trends.

Export data via "Historical Data" table.

6. Troubleshooting
Problem	Solution
Can’t sign up	Check email format, ensure password ≥6 chars.
Login fails	Reset password or contact support.
No sensor data	Restart ESP32, check Wi-Fi.
Actuators not working	Verify wiring, power supply.
7. Support
📧 support@smartpoultry.com
📞 + (255) 456-7890

✅ Ready to Use!
Now you can monitor and control your poultry farm remotely! 🚀