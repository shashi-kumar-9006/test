//
// File: untitled.h
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
#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include <string.h>
#include <stddef.h>
#ifndef untitled_COMMON_INCLUDES_
# define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // untitled_COMMON_INCLUDES_

#include "untitled_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// External inputs (root inport signals with default storage)
typedef struct {
  real_T In1;                          // '<Root>/In1'
  real_T In2;                          // '<Root>/In2'
} ExtU_untitled_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T Out1;                         // '<Root>/Out1'
} ExtY_untitled_T;

// Real-time Model Data Structure
struct tag_RTM_untitled_T {
  const char_T * volatile errorStatus;
};

// Class declaration for model untitled
class untitledModelClass {
  // public data and function members
 public:
  // External inputs
  ExtU_untitled_T untitled_U;

  // External outputs
  ExtY_untitled_T untitled_Y;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  untitledModelClass();

  // Destructor
  ~untitledModelClass();

  // Real-Time Model get method
  RT_MODEL_untitled_T * getRTM();

  // private data and function members
 private:
  // Real-Time Model
  RT_MODEL_untitled_T untitled_M;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'untitled'

#endif                                 // RTW_HEADER_untitled_h_

//
// File trailer for generated code.
//
// [EOF]
//
