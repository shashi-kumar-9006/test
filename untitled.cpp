//
// File: untitled.cpp
//
// Code generated for Simulink model 'untitled'.
//
// Model version                  : 1.7
// Simulink Coder version         : 9.0 (R2018b) 24-May-2018
// C/C++ source code generated on : Wed Apr  3 11:45:09 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "untitled.h"
#include "untitled_private.h"

// Model step function
void untitledModelClass::step()
{
  // Outport: '<Root>/Out1' incorporates:
  //   Inport: '<Root>/In1'
  //   Inport: '<Root>/In2'
  //   Product: '<Root>/Multiply'

  untitled_Y.Out1 = untitled_U.In1 * untitled_U.In2;
}

// Model initialize function
void untitledModelClass::initialize()
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(getRTM(), (NULL));

  // external inputs
  (void)memset(&untitled_U, 0, sizeof(ExtU_untitled_T));

  // external outputs
  untitled_Y.Out1 = 0.0;
}

// Model terminate function
void untitledModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
untitledModelClass::untitledModelClass()
{
  // Currently there is no constructor body generated.
}

// Destructor
untitledModelClass::~untitledModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_untitled_T * untitledModelClass::getRTM()
{
  return (&untitled_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
