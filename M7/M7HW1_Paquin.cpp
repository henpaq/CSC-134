// Comment
/*
CSC 134
M7HW1 - Final Project
H Paquin
5/13/24
*/

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "It is your first F1 race weekend! There is a lot of pressure on you. You are one of the most desired rookies in F1 history. Don't worry you'll do fine." << endl;
  cout << "I will be your race engineer this season. We will be racing in Bahrain this weekend. No rain, only clear skies. These are perfect conditions for your first race." << endl;
  cout << endl;
  cout << "3 days later... We have finished up our practice sessions and they were very solid. We have gathered some good data for the race. We look very strong on pace this weekend." << endl;
  cout << "We have started Q1. Do you want to start a run now or wait? If you decide to wait we will only get one run in. The benefit is that with one run we save a set of tires." << endl;
  cout << "Two Runs (1) or One Run (2)?" << endl;
  cout << endl;
  cout << "Type 1 or 2: " << endl; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose: Two Runs" << endl;
    cout << endl;
    cout << "You have a decent first run but it is not enough to make it into Q2. Luckily we are able to take a second qualifying run." << endl;
    cout << "Great Job! You are 6th! You made it into qualifying 2! You had me worried for a second with the first run." << endl;
    cout << endl;
    cout << "Since we are now in Q2 it is the same situation for Q1. Do you take 1 or 2 runs?" << endl;
    cout << endl;
    cout << "What do you choose? One (1) or Two Runs (2)?" << endl;
    cin >> choice;

    if (1 == choice) {
        cout << "You chose: One Run" << endl;
        cout << endl;
        cout << "You have rolled the dice too much we are knocked out in Q2 and we will be starting the race in 12th." << endl;
        cout << "It will be okay because we have some good pace so we will be able to make up some positions for tomorrow." << endl;
        cout << endl;
        cout << "The race has started and you get a good jump off the line" << endl;
        cout << "But since you are in the middle of the pack it gets jumbled up and there is a big crash where you are." << endl;
        cout << "You take major damage since you were in the middle of the crash. You are able to bring the car back to the pits!" << endl;
        cout << "The engineers take a look at the car and you have to retire from the race." << endl;
        cout << "Don't hang your head. You had solid pace, it was just a bit of bad luck. We will get them next race!" << endl;
        cout << endl;
    }

    if (2 == choice) {
        cout << "You chose: Two Runs" << endl;
        cout << endl;
        cout << "You were able to make it into Q3 with two runs! You will have a good shot at giving you a good starting position for the race!" << endl;
        cout << "It is a little different than the other 2 sessions. We are going to take two runs no matter what happens." << endl;
        cout << "After all of the first runs you are standing in 6th. Not bad start to your first Q3 session. We head out for our second run." << endl;
        cout << "You put together a great lap! You are in 4th! That is a fantastic way to start your debut! Hopefully we will have a great race tomorrow." << endl;
        cout << endl;
        cout << "The race starts and you get off the line well. You dont loose any positions and there is not an accident that you were in." << endl;
        cout << "27 laps later... Your tires start to wear down. You have the decision to pit now or wait a few laps." << endl;
        cout << "The benefit of pitting later is that you will have fresher tires so you will be faster, but you risk getting a puncture since the tires you are on are old." << endl;
        cout << "You will know if you are close to a puncture when your car will start to have vibrations throughout the lap." << endl;
        cout << endl;
        cout << "Stay out (3) or Pit now (4)?" << endl;
        cin >> choice;
    }

    if (3 == choice) {
        cout << "You chose: To Stay Out" << endl;
        cout << endl;
        cout << "You stay out and a couple of laps later you start to feel a little vibration in the car. " << endl;
        cout << "You make it to the next pit stop!" << endl;
        cout << "The stop was good and you are now on a fresh set of medium tires that will last you until the end of the race" << endl;
        cout << endl;
        cout << "It is lap 55 out of 57 you are in 2nd place. You have gained 2 places because your tires are much fresher and you are quick because of these tires." << endl;
        cout << "You are within DRS range of the car in front of you. You are gaining on him fast! You have the choice of overtaking him now or waiting to the next lap" << endl;
        cout << endl;
        cout << "Overtake now (5) or Wait to the next lap (6)?" << endl;
        cin >> choice;
    }

    if (4 == choice) {
        cout << "You chose: To Pit Now" << endl;
        cout << endl;
        cout << "You pit on the same lap as everyone else around you. Everyone is one a set of medium tires." << endl;
        cout << "You push your hardest but your tires are not living up to it. Everyone's pace stalls and so does your pace." << endl;
        cout << "You finished the race in 4th. Still a very good result for the team and for your debut race! We know we left some positions on the table but it is nothing to be ashamed of." << endl;
        cout << endl;
    }

    if (5 == choice) {
        cout << "You chose: To Overtake Now" << endl;
        cout << endl;
        cout << "You open the DRS and are thundering down the straight. You close the gap, hit the brakes late. The leader goes wide and you go for the switchback." << endl;
        cout << "2nd place has DRS and is closing fast. You have the option to defend or not." << endl;
        cout << endl;
        cout << "Defend (7) or No Defense (8)?" << endl;
        cin >> choice;
    }

    if (6 == choice) {
        cout << "You chose: To Wait Until the Next Lap" << endl;
        cout << endl;
        cout << "You waited to lap 56 out of 57 to make your overtake. You try to make a dive bomb into the corner but you bail out because it was really risky." << endl;
        cout << "Because you waited an extra lap and because of the divebomb your tires are much slower than they were before." << endl;
        cout << "You finished the race in 2nd! I know you wanted to win but nonetheless that is a very good result for a debut, and you should feel really good about yourself." << endl;
    }

    if (7 == choice) {
        cout << "You chose: To Defend" << endl;
        cout << endl;
        cout << "You block the inside and he has to try and go around." << endl;
        cout << "You put up great defending moves and he has to stay behind." << endl;
        cout << "YESSSSS!! YOU ARE ONE OF THE FEW PEOPLE WHO WON A RACE ON THEIR DEBUT! CONGRATULATIONS, SOAK IT IN! That was a fantastic drive!" << endl;
        cout << endl;
    }

    if (8 == choice) {
        cout << "You chose: No Defense" << endl;
        cout << endl;
        cout << "You stick to you line and the driver behind makes a moce down the inside of the corner." << endl;
        cout << "He makes the move stick and you are not behind him. There are no more spots to overtake at this point." << endl;
        cout << "You finished the race in 2nd! I know you wanted to win but nonetheless that is a very good result for a debut, and you should feel really good about yourself." << endl;
        cout << endl;
    }
  }

  else if (2 == choice) {
  	cout << "You chose: One Run" << endl;
    cout << endl;
    cout << "You pull out of the pits with only a few minutes to go. You are putting together a great lap!" << endl;
    cout << "Oh no! Someone has crash in turn 5! That will be the end of your session. You are knocked out in Q1." << endl;
    cout << "We got a long day ahead of us tomorrow so don't worry!" << endl;
    cout << endl;
    cout << "It is race day! You got a tough decision in front of you." << endl;
    cout << "Do you start on the hard tires (last longer but slower) or the mediums (shorter life, faster pace)?" << endl;
    cout << endl;
    cout << "Hard Tires (1) or Medium Tires (2)?" << endl;
    cin >> choice;

    if (1 == choice) {
        cout << "You chose: Hard Tires" << endl;
        cout << endl;
        cout << "You get an okay start. Since you are on the slower tire you start to lose places." << endl;
        cout << "20 laps later... The race starts to comeback to you and you are now gaining places." << endl;
        cout << "5 laps later... Many of the medium tire runners have came into the pits now." << endl;
        cout << "Do you pit now or wait a few extra laps." << endl;
        cout << endl;
        cout << "Pit Now (3) or Wait (4)?" << endl;
        cin >> choice;
    }

    if (2 == choice) {
        cout << "You chose: Medium Tires" << endl;
        cout << endl;
        cout << "You got a good start! However this would be the best news all race." << endl;
        cout << "Since you start on the same tires as everyone else, you gain very few places." << endl;
        cout << "You have to pit on the same lap as everyone else too." << endl;
        cout << "Overall this was a very boring race from your perspective." << endl;
        cout << endl;
        cout << "You finished in 13th. This one stings a bit, but we will make better strategy calls in the future" << endl;
        cout << endl;  
    }

    if (3 == choice) {
        cout << "You chose: Pit Now" << endl;
        cout << endl;
        cout << "You come into the pits and it is a great stop! You are making great gains on the drivers in front of you!" << endl;
        cout << "You are now in 9th! You have gained 8 places!" << endl;
        cout << endl;
        cout << "Lap 55 out of 57... You have lost ground since your tires have worn down faster than the other drivers around you." << endl;
        cout << "Altough you have made great gains, you have lost more places. You finished the race in 13th after starting 17th." << endl;
        cout << "Not the result we wanted, but it definitely could have been worse. We will get them next race." << endl;
        cout << endl;
    }

    if (4 == choice) {
        cout << "You chose: To Wait" << endl;
        cout << endl;
        cout << "You keep your tires and you are losing ground to the cars that pitted behind you." << endl;
        cout << "A few corners ahead... Two drivers are battling it out hard! OH NO! They take each other out!" << endl;
        cout << "Safety Car! You are able to gain many places since the pit stop time is shorter with a safety car." << endl;
        cout << "After starting in 17th, you are now 10th because of the safety car." << endl;
        cout << endl;
        cout << "The race is about to restart and you only have 16 laps to go." << endl;
        cout << "Do you decide to push your car to the limits or drive more conservative?" << endl;
        cout << endl;
        cout << "Push Your Car (5) or Conservative Driving (6)?" << endl;
        cin >> choice;
    }

    if (5 == choice) {
        cout << "You chose: To Push Your Car" << endl;
        cout << endl;
        cout << "After the restart you are gaining many places! You are now up to 5th!" << endl;
        cout << "But trouble strikes... You start to notice a loss in performance in your car." << endl;
        cout << "You look in your mirror and start to see smoke coming out of the back of your car." << endl;
        cout << "You have to retire from the race. You had very good pace this race." << endl;
        cout << endl;
    }

    if (6 == choice) {
        cout << "You chose: Conservative Driving" << endl;
        cout << endl;
        cout << "You have a good start since you are on the better tires." << endl;
        cout << "Altough you are not gaining places at a high rate of speed, you are consistently gaining them." << endl;
        cout << "You cross the finish line in 5th! That was a very good drive from starting that far down the grid!" << endl;
        cout << "We will keep this momentum for the next race!" << endl;
        cout << endl;
    }

  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl;
  cout << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method