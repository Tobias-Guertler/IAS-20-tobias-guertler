# IAS-20-tobias-guertler
This repository holds my project for the Interactive systems lecture of the summer term 2020. The topic is to create a proprioceptal, textile sensor which registers a bent elbow during pushups using an Arduino microcontroller
# Necessary Materials
* Arduino Uno Microcontroller
* Copper Tape (approx. 15-20 cm)
* VeloStat resisitve material
* resisitors and cables
These are the materials neccessary to build the sensor, beyond that you will need textiles to place the sensor on, and something to visualise the sensory data, I personally use LEDs or a piezo buzzer but they are not strictly required
# Building the sensor
In this project, I explore two different approaches to building the sensor, once by using circuits which close by folding, and once by using the properties of VeloStat. After working with both and testing them, I will make a decision which one works better, or if a combination of them works best.
## Foldable circuit sensor
This sensor uses the fact that the fabric around the elbow folds onto itself when the elbow is bent. The basic idea is using two or more pieces of copper tape which are not connected to represent the circuit when it is not closed. If the textile is folded by bending the elbow, these disconnected pieces then connect, and a registerable current can flow. In this project I present different designs for circuit layouts and criteria to evaluate them, as well as code and a circuit to set them up for an Arduino.
## VeloStat sensor
The basic idea is to use the fact that VeloStat reduces it's resistance once pressure is applied to it. If we place VeloStat on the inside of the elbow, it will be under different pressure depending on how bend the elbow is, the more bent the elbow is the more pressure. We can then measure the decrease in resistance by reading the analog input reaching a pin of the Arduino, and register how bent the elbow is.