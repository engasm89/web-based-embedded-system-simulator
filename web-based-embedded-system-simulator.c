/*
 * Course: Web Based Embedded System Simulator
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Web Based Embedded System Simulator" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/web-based-embedded-system-simulator/
 * Repository: https://github.com/engasm89/web-based-embedded-system-simulator
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Web Based Embedded System Simulator
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Web Based Embedded System Simulator
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for printing simulated web responses
#include <unistd.h> // Include POSIX sleep for delays

// Simulated sensor values for a web-based embedded system
static int temperature_c = 25; // Initialize temperature in Celsius
static int humidity_pct = 45; // Initialize humidity in percent
static int light_lux = 300; // Initialize light level in lux

// Main entry point simulating periodic state updates
// Main routine: orchestrates the web based embedded system simulator scenario
int main(void) { // Main function implementation function
  printf("Web-Based Embedded System Simulator\n"); // Header line for context
  for (int i = 0; i < 10; ++i) { // Loop to emit multiple frames
    temperature_c += (i % 2 ? 1 : -1); // Simulate slight temperature change
    humidity_pct += (i % 3 ? 0 : 1); // Simulate humidity drift
    light_lux += (i % 4 ? 5 : -5); // Simulate light change
    printf("{\"temp_c\":%d,\"hum_pct\":%d,\"lux\":%d}\n", temperature_c, humidity_pct, light_lux); // Emit JSON frame
    usleep(500000); // Delay 500 ms between frames
  } // End emission loop
  return 0; // Return success
} // End of main function function

