Name  : Jia Nan Mai
Date  : Arpil 18, 2018
Class : CSC 415

Compile Instructions: gcc pthread_race.c -o pthread


Run Instructions: ./pthread


Project Description:

- Added synchronization to my solution to HW #4 to eliminate all the race conditions.
- Added necessary mutex synchronization to lock and unlock once all race conditions are done.
- Used nanosleep to suspend the execution of the calling thread until either the time specified as 
  "ts" has elapsed or when there is a signal delivery that invokes the handler in the calling thread.
