#ifndef CREX_SEPTUM
#define CREX_SEPTUM

#include "HRSTransBase.hh"

class hamcCREXTrans : public HRSTransBase
{
public:
    hamcCREXTrans();
    ~hamcCREXTrans();

  bool TransLeftHRS(double* vector_jjl);
  bool TransRightHRS(double* vector_jjl);
  bool TransRightHRS_C(double* vector_jjl);
  void ReconLeftHRS(double* vector_jjl);
  void ReconRightHRS(double* vector_jjl);
  void Acceptance(double* vector_jjl, double* x_check, double* theta_check, double* y_check, double* phi_check, int* acc_bool);
  void Acceptance_C(double* vector_jjl, double* x_check, double* theta_check, double* y_check, double* phi_check, int* acc_bool);

    double GetAngle() { return cModelAngle; }

private:
    const double cModelAngle;
};

#endif
