# raspi_rubiks

raspi_rubiks is a program compiled using Cmake on the Raspberry Pi.
It takes in camera vision from two USB webcams connected to the Raspberry Pi and detects the colours of a Rubik's cube.
The detected cube configuration is mapped out for the user to see, before a solution is generated from the cube solving algorithm.

The solution is sent from the Raspberry Pi to the PSoC. The PSoC interprets the solution into motor rotations, which solve the Rubik's cube.

