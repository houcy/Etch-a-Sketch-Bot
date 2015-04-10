/*
 *
 *
 *
 *
 *
 *
 */
 
#ifndef STEPPER2

#define STEPPER2

class Stepper2
{
private:
     int pDir;
     int pStep;
     int pEnable;
     int mSteps;
     int nStopP;
     int nStopN;

     int TimerIncrementCounter;
    bool LongestMover;
  
public:
        double EndPointInUnits;
          long EndPointInStep;
          long StepsToGo;
          long TimerPeriod;
           int PositionInSteps;
        double PositionInUnits;    
 volatile bool direction;
          long MaxSteps;
          long MoveSteps;
          long Error;
        double StepsPerUnit;
 
  Stepper2(int PinDir, int PinStep, int PinEnable, int inMircoSteps, 
 	 	  int EndStopPlus, int EndStopNeg, double Steps_Per_Unit);
  void setEndPoint(double cordinate);
  void Step();
  void enable(bool enabled);
  
};

#endif
