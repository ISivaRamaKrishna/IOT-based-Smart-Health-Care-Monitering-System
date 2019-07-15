# IOT-based-Smart-Health-Care-Monitering-System

This project about measuring  heart beat, blood pressure , EMI and temperature of  human    body  in digital manner by using sensors through IOT.


# Abstract :—  
                                       
  
   Internet of things (IoT) is a fast growing, a user-friendly technology which allows everything to connected and also allows effective communication between the connected "things”. The Internet of Things, likewise called The Internet of Objects, alludes to a remote system  between items, as a rule, the system will be remote and self-designing. 
The term "Internet of Things" has come to describe some technologies and research disciplines that enable the Internet to reach out into the real world of physical objects. IoT has many applications among them few are Traffic monitoring,Healthcare,Security, Transport, logistics and in our daily life. Generally in critical case patients are supposed to be monitored continuously to check their Heart Rate, oxygen saturation level and temperature as well. Previously doctors need to be present physically on sight. Now a day’s SMS will be sent using GSM, but in this current data is displayed that is a specific time we mentioned.


  The past conditions of the patient cannot be displayed. It is like discrete data transmission, to convert it as analog we are   going for IOT based health care system. The Internet of Things could be a game-changer for the healthcare industry. It is transforming healthcare industry by increasing efficiency, lowering costs and put the focus back on better patient care. IoT in Healthcare is a heterogeneous computing, wirelessly communicating system of apps and devices that connects patients and physicians to diagnose, monitor, track and store vital statistics and medical information. This paper describes E-Health 
Monitoring (EHM) and presents an architectural framework to describe the entire monitoring life cycle and highlights the essential service components. 
                            It serves as a fundamental basis for achieving robust, efficient and secure health monitoring. The  primary aim of this paper is to design an IOT based architecture for health related issues such as Diabetics, Heart Monitoring system ,to check body temperature, Pulse rate and kidney functioning. we are analyzing different methods and techniques 
used for healthcare monitoring system where doctor can continuously monitor the patient's condition. The Data obtained through sensors are uploaded to the Ethernet module which is an IOT connected device to cloud and collected data is accessed by Authorized person through internet. Also the patient history will be stored in the web server and doctor can access the information whenever needed from any corner of the world. 


# IOT BASED SMART HEALTH CARE MONITORING SYSTEM 
                                                                                
   
 
Using this health care system module, automatically the data of the patient will be uploaded to the 
concerned doctor, within few minutes user will get a prescription for his current situation. This will 
connect us with the doctors who are very far from us, and the immediate action will increase the health 
rate of people. This health care system will be most useful in rural and remote areas. 
 
  # Index Terms:   IOT, Healthcare , Sensors, WSN ( Wireless Sensor Network) 
                                                                                                                                                                                                                
# I. INTRODUCTION 
"Smart Health" refers to accomplishment of different sensors that captures the human body 
parameters. And the data obtained by the sensors can be 
used to provide smart health.  IOT has given rise to 
smart health and its focus is on improving the health 
care system. 
Today Internet has become one of the important 
parts of our daily life. Visualizing a world where 
several objects can sense, communicate and share 
information over a Private Internet Protocol (IP) or 
Public Networks. The interconnected objects collect 
the data at regular intervals and used to initiate required 
action, providing an intelligent network for analyzing, 
planning and decision making. This is the world of the 
Internet of Things (IOT).The IOT is generally 
considered as connecting objects to the Internet and 
using that connection for control of those objects or 
remote monitoring. Actual definition of IOT is creating 
a brilliant, invisible network which can be sensed, 
controlled and programmed. The entire concept of IOT 
stands on sensors, gateway and wireless network which enable user’s to communicate and access the 
information.  
In India, everyday many lives are affected because 
the patients are not timely and properly treated. The 
prime goal was to develop a reliable patient monitoring 
system so that the health care professionals can monitor 
the patients, who are either hospitalized or executing 
their normal daily life activities. Currently, the health 
care system is going to change from a traditional  

approach to a modernized patient centered 
approach. In the traditional way the doctors  play the 
major role. For necessary diagnosis and advising they 
need to visit the patients. There are some  basic 
problems related to this approach.  Firstly, the health 
care professionals must be at place of the patient all 
the time and second, the patient remains admitted 
in the hospital, wired to bedside biomedical 
instruments, for a long  period of time. Also for real 
time parameter values are not efficiently measured 
in clinic as well as in hospitals. Sometimes it 
becomes difficult for hospitals to frequently check patient’s conditions. Also continuous monitoring 
of ICU patients is not possible.  To deal with these 
types of situations, our system is beneficial. 
A recent health care system should provide 
better health care services to people at any time 
anywhere in an affordable and patient friendly 
manner. Our system is designed to be used in 
hospitals for measuring and monitoring various 
parameters like temperature, pulse rate, heart beat 
etc. 
                                                      
 
# II. HARDWARE DESCRIPTION 
 
 
 
Microcontroller is referred as the chief functioning 
element which holds a mechanism of every 
element with a few interlinks between them. There 
are many microcontrollers in existence out of which we are preferring “arduino” microcontroller 
in our innovation. The main reason to opt arduino 
as our microcontroller is because of its simple 
characteristics as it enables the beginner to grasp 
the content quickly. It is possible to interact with 
the basic programming as it contains many inbuilt 
functions with an own compiler and a quick 
accessibility between the components is possible, it 
is eco-friendly and also cost-friendly. Referring to 
the merits of arduino, we chose to operate our 
module with this particular  microcontroller. 
B. Ethernet Module:  
It is a module which consists of Internet protocol 
and Media Access Control Address. It has an 
ability to interface especially with arduino 
microcontroller. The module has an external 
storage capacity to store the commanded program. 
It establishes a connection with the web so as to 
receive message by the authenticated identity 
,where the condition  is further forwarded to 
doctor. 
 
# III. SOFTWARE DESCRIPTION WIRELESS SENSOR NETWORKS 

A wireless sensor network is wireless network 
consisting of spatially distributed autonomous 
device using sensors to monitor to physical or 
environmental conditions. WSN is a network 
formed by large number of sensor nodes where 
each node is equipped with a sensor to detect 
physical phenomenon such a light, heat, sound etc. 
Temperature Sensor (LM35) 
It is used to measure temperature. The LM35 
series are precision integrated circuit temperature 
sensors, in which output voltage is linearly 
proportional to the Celsius (Centigrade) 
temperature. It measures temperature more 
accurately than thermistors. 
Temperature. It measures temperature more 
accurately than thermistors. 
Heart Beat Sensor 
Heart beat sensor has been designed to give digital 
output of heat beat when a finger is placed on it. 
When we place the finger, the LED flashes in 
unison with each heartbeat. This digital output can 
be connected to microcontroller directly to 
                                                                                

 measure the "Beats per Minute" (BPM) rate. It 
works on the principle of light modulation by 
blood flow through finger at each pulse. 
 
# " Pulse Oximeter Sensor ":

Hardware Description Pulse oximetry is a simple 
technique to find the amount of haemoglobin. 
Oximeter measures number of hearts beat per unit 
of time which is usually conveyed in bits per 
minute (Bpm). In the project MCP6004 based 
pulse oximeter is designed and TCRT1000 
reflective IR optical sensor is used for photo 
plethysmography(PPG).UsingTCRT1000 
simplifies the process since both emitter and 
detector are arranged side by side. This technique 
is used to measure heart rate since change in blood 
volume is synchronous to heart beat. 
ECG Sensor 
ECG electrode sticks to chest to pick up ECG 
signals. Then wires are connected to AD8232. 
This sensor is a cost-effective board used to 
measure the electrical activity of the heart. ECGs 
can be extremely noisy, the AD8232 Single Lead 
Heart Rate Monitor acts as an op-amp to 
help obtain a clear signal from the PR and QT 
Intervals easily. 
 
# Blood Pressure Sensor(MC1630)  :-

The sensor is designed to be used with automated 
assembly equipment and can be dropped directly 
into a customer's disposable intrauterine housing. 
The pressure sensor consists of a pressure sensing 
element mounted on a ceramic substrate. Thick 
film resistors on the ceramic substrate are laser 
trimmed for compensation and calibration. A 
plastic cap is attached to the ceramic substrate to 
provide an easy method of attachment to the customer’s assembly and protection for the 
sensing element. A dielectric gel is placed over the 
sensor to provide fluid isolation. 

and provides related service,The Services may 
include leasing of hard disk space, stability of 
hardware and software , Securing with a backup 
,unique content provision with high speed web 
access. in our proposed module it helps us to 
provide the authentication details which gets stored 
in database that can be accessed from any corne of 
world.In this point of view hosting has key role in 
the IOT based Health  care monitoring system. 
Need of Scripts to develop the module: 

# PHP: 
                                                                                

 Personal home page is an HTML-embedded, 
Server-side scripting language designed for web 
development. It generally works on a web server. 
 
 
# JSON (Java Script Object Notation): 
JSON is a data structure format .the data are 
considered as objects with properties .This 
formalism is close enough is based on XML and 
java script. 
# My SQL: 
 My SQL is a relational database management 
system. (RDBMS) ,It is distributed under a dual 
GPL and proprietary license. It is one of the 
database management software   most used in the 
world. 
# URL: 
Uniform resource locator is the basic network 
identification to specify addresses on the web. 
 
# Mechanism: 
Data transmission is performed by multiple sensors 
such as ECG, temperature,pulse oximeter sensor 
,Heart beat sensor.Data transmission components 
of the system are responsible for transforming 
recordings of the patient from patient house to the 
data centre of the health organization.The sensor 
will be connected to the network through an 
intermediate aggregator such as Ethernet module 
and which is further connected to wifi.Data of the 
sensors will uploaded to the server. this is further 
uploaded to cloud. And the data can be accessed by 
doctor from any corner of the world through a 
particular IP assigned to the system. 
 
Conclusion: By seeing the many lives affected due 
to lack of proper treatment on time and failed to 
maintain continuous observation, we are intended 
to change the traditional approach to smart health 
care system. Internet of Things has many 
applications in different areas. IoT has been already 
designed for Wireless sensor network (WSN). It 
has been developed for health monitoring. This 
system presents the architecture of IoT and 
architecture of Smart health monitoring using IoT, 
by using the IOT Health care monitoring system, 
the healthcare professionals can monitor, diagnose, 
and advice their patients all the time. The health 
conditions data are stored and published. Hence, 
the healthcare professional can monitor their 
patients from a remote location at any time. In the 
designed system the enhancement would be 
connecting more sensors to internet which 
measures various other health parameters and 
would be beneficial for patient monitoring i.e. 
connecting all the objects to internet for quick and 
easy access. This health monitoring has a wide 
range of applications and can save rural and remote 
area people in emergency conditions. 


# References : 
1).Punit Gupta, Deepika Agrawal, Jasmeet Chhabra, Pulkit Kumar Dhir, “IoT based Smart 
                                                                                
  
HealthCare Kit”, 2016 International Conference on 
Computational Techniques in Information and 
Communication Technologies (ICCTICT). 
 
 2).David Niewolny. 18 Oct 2013. How the Internet 
of Things Is Revolutionizing Healthcare, Freescale 
Semiconductors Zhibo Pang, "Technologies and 
Architectures of the Internet-ofThings (IoT) for Health and Well-being," Doctoral Thesis, KTH – 
Royal Institute of Technology Stockholm, Sweden, 
January 2013.  
3).H. Sundmaeker, P. Guillemin, P.Friess, S. Woelffle, “ Outlook on Future IoT applications,”  
Vision and Challenges for Realising the Internet of 
Things: European Commission - Information 
Society and Media DG, March 2010, pp:189. 
KALITA, H. K. and KAR, A. Key management in 
secure self-organized wireless sensor network: a 
new approach. Proceedings of the International 
Conference and Workshop on Emerging Trends in Technology (ICWET ‘11). ACM, 2011, pp. 
865870. 
4).AL-KARAKI, J. N. and KAMAL, A. E. Routing 
techniques in wireless sensor networks: a survey. 
Wireless communications, IEEE, Vol. 11, No. 6, 
2004, pp. 628.Punit Gupta, Deepika Agrawal, Jasmeet Chhabra, Pulkit Kumar Dhir, “IoT based Smart HealthCare Kit”, 2016 International 
Conference on Computational Techniques in 
Information and Communication Technologies 
(ICCTICT). 5).MeghaKoshti, Prof.Dr. Sanjay Ganorkar, “IoT 
Based Health Monitoring System by Using Raspberry Pi and ECG Signal”, International 
Journal of Advanced Research in Electrical, 
Electronics and Instrumentation Engineering(An 
ISO 3297: 2007 Certified Organization)Vol. 5, 
Issue 5, August 2016. 
6).D. Miorandi, S. Sicarib, F. De Pellegrinia and I. Chlamtac, “Internet of Things: Vision, applications and research challenges”, Ad Hoc Networks 10 (2012) 1497– 1516.  7) Darshan K R, Anandakumar K R “A 
Comprehensive Review on Usage of Internet of Things (IoT) in Healthcare System”, International 
Conference on Emerging Research in Electronics, Computer Science and Technology – 2015, 
978-1-4673-9563-2/15/$31.00 ©2015 IEEE. 
8).Won-Jae Yi, Oishee Sarkar, Thomas Gonnot, 
Ehsan Monsef and JafarSaniie ,“6LoWPAN-enabled Fall Detection and Health Monitoring System with Android Smartphone”, 
978-1-4673-9985-2/16/$31.00 ©2016 IEEE. 
 
