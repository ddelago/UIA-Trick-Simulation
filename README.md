# UIA-Trick-Simulation
Simple NASA Trick Simulation of the HAL UIA Panel

## Getting Started
1. Install Trick from the [open source Trick repository](https://github.com/nasa/trick). I used Ubuntu 18.04 for my operating system. 
2. Clone the repository. 
	``` bash
	git clone https://github.com/ddelago/UIA-Trick-Simulation.git
	```
3. [Compile and run the  simulation](https://github.com/nasa/trick/wiki/ATutAnalyticSim)
	``` bash
	cd ~/UIA-Trick-Simulation
	# The trick executable below should be in your path after following the installation instructions
	trick-CP
	# ~~ Simulation Begins Building ~~
	./S_main_Linux__x86_64.exe RUN_test/input.py
	# Simulation starts and Sim Control window appears
	```  
4. From the sim control window, open Trick View to view all sim variables.
