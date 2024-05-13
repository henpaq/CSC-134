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
  cout << "3 days later... We have finished up our practice sessions and they were very solid. We have gathered some good data for the race. We look very strong on pace this weekend." << endl;
  cout << "We have started Q1. Do you want to start a run now or wait? If you decide to wait we will only get one run in. The benefit is that with one run we save a set of tires." << endl;
  cout << "Two runs (1) or One run (2)" << endl;
  cout << endl;
  cout << "Type 1 or 2: " << endl; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose two runs" << endl;
    cout << endl;
    cout << "You have a decent first run but it is not enough to make it into Q2. Luckily we are able to take a second qualifying run." << endl;
    cout << "Great Job! You are 6th! You made it into qualifying 2! You had me worried for a second with the first run." << endl;
    cout << endl;
    cout << "Since we are now in Q2 it is the same situation for Q1. Do you take 1 or 2 runs?" << endl;
    cout << endl;
    cout << "What do you choose? one (1) or 2 runs (2)" << endl;
    cin >> choice;

    if (1 == choice) {
        cout << "You chose one run" << endl;
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
        cout << "You chose two runs" << endl;
        cout << endl;
        cout << "You were able to make it into Q3 with two runs! You will have a good shot at giving you a good starting position for the race!" << endl;
        cout << "Once again it is a little different than the other 2 sessions. We are going to take two runs no matter what happens." << endl;
        cout << "After all of the first runs you are standing in 6th. Not bad start to your first Q3 session. We head out for our second run." << endl;
        cout << "You put together a great lap! You are in 4th! That is a fantastic way to start your debut! Hopefully we will have a great race tomorrow." << endl;
        cout << endl;
        cout << "The race starts and you get off the line well. You dont loose any positions and there is not an accident that you were in" << endl;
        cout << "27 laps later... Your tires start to wear down. You have the decision to pit now or wait a few laps." << endl;
        cout << "The benefit of pitting later is that you will have fresher tires so you will be faster, but you risk getting a puncture since the tires you are on are old." << endl;
        cout << "You will know if you are close to a puncture when your car will start to have vibrations throughout the lap." << endl;
        cout << endl;
        cout << "Stay out (3) or Pit now (4)" << endl;
        cin >> choice;
  }
    if (3 == choice) {
        cout << "You chose to stay out" << endl;
        cout << endl;
        cout << "You stay out and a couple of laps later you start to feel a little vibration in the car. " << endl;
        cout << "You make it to the next pit stop!" << endl;
        cout << "The stop was good and you are now on a fresh set of medium tires that will last you until the end of the race" << endl;
        cout << endl;
        cout << "It is lap 55 out of 57 you are in 2nd place. You have gained 2 places because your tires are much fresher and you are quick because of these tires." << endl;
        cout << "You are within DRS range of the car in front of you. You are gaining on him fast! You have the choice of overtaking him now or waiting to the next lap" << endl;
        cout << endl;
        cout << "Overtake now (5) or Wait to the next lap (6)" << endl;
        cin >> choice;
    }

    if (4 == choice) {
        cout << "You chose to pit now" << endl;
        cout << endl;
        cout << "You pit on the same lap as everyone else around you. Everyone is one a set of medium tires." << endl;
        cout << "You push your hardest but your tires are not living up to it. Everyone's pace stalls and so does your pace." << endl;
        cout << "You finished the race in 4th. Still a very good result for the team and for your debut race! We know we left some positions on the table but it it nothing to be ashamed of." << endl;
        cout << endl;
    }

    if (5 == choice) {
        cout << "You chose to overtake now" << endl;
        cout << endl;
        cout << "You open the DRS and are thundering down the straight. You close the gap, hit the brakes late. The leader goes wide and you go for the switchback." << endl;
        cout << "2nd place has DRS and is closing fast. You have the option to defend or not." << endl;
        cout << endl;
        cout << "Defend (7) or No Defense (8)" << endl;
        cin >> choice;
    }

    if (6 == choice) {
        cout << "You chose to wait until the next lap" << endl;
        cout << endl;
        cout << "You waited to lap 56 out of 57 to make your overtake. You try to make a dive bomb into the corner but you bail out because it was really risky." << endl;
        cout << "Because you waited an extra lap and because of the divebomb your tires are much slower than they were before." << endl;
        cout << "You finished the race in 2nd! I know you wanted to win but nonetheless that is a very good result for a debut, and you should feel really good about yourself." << endl;
    }

    if (7 == choice) {
        cout << "You chose to defend" << endl;
        cout << endl;
        cout << "You block the inside and he has to try and go around." << endl;
        cout << "You put up great defending moves and he has to stay behind." << endl;
        cout << "YESSSSS!! YOU ARE ONE OF THE FEW PEOPLE WHO WON A RACE ON THEIR DEBUT! CONGRATULATIONS, SOAK IT IN! That was a fantastic drive!" << endl;
        cout << endl;
    }

    if (8 == choice) {
        cout << "You chose no defense" << endl;
        cout << endl;
        cout << "You stick to you line and the driver behind makes a moce down the inside of the corner." << endl;
        cout << "He makes the move stick and you are not behind him. There are no more spots to overtake at this point." << endl;
        cout << "You finished the race in 2nd! I know you wanted to win but nonetheless that is a very good result for a debut, and you should feel really good about yourself." << endl;
        cout << endl;
    }
  }

  else if (2 == choice) {
  	cout << "You chose Ferrari" << endl;
    cout << endl;
    cout << "It is the final race of the season. You are winning the championship, but there is an issue." << endl;
    cout << "Your team warns you that there is potential rain in 5 minutes. They give you the option to box or stay out." << endl;
    cout << endl;
    cout << "What do you choose? (Box (1) or stay out (2))" << endl;
    cout << endl;
    cin >> choice;

    if (1 == choice) {
        cout << "You chose to box" << endl;
        cout << endl;
        cout << "Your team calls you in, but your teammate is already in the pits!" << endl;
        cout << "Your team tries to tell you to stay out, but it is too late." << endl;
        cout << "Your team has ruined your pit stop!" << endl;
        cout << "When you come out of the pits, you lost the lead, and your now losing the championship!" << endl;
        cout << endl;
        cout << "Sadly, you end up losing the championship" << endl;
        cout << endl;
    }

     if (2 == choice) {
        cout << "You chose to stay out" << endl;
        cout << endl;
        cout << "The rain on the forecast has gone away, and the race will stay dry!" << endl;
        cout << "On lap 55 / 57, you start to feel a vibration in your car." << endl;
        cout << "Seconds later you have a puncture!" << endl;
        cout << "You are forced to pull over and retire the car." << endl;
        cout << endl;
        cout << "Sadly, you end up losing the championship" << endl;
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