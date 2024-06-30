#include "math.h"
#include <gsl/gsl_integration.h>
#include <gsl/gsl_deriv.h>

typedef double (* funp)(double, void *);

double derivative (funp f, double x, double err)
{
    double result, abserr;
    
    gsl_function F;
    F.function = f;
    
    gsl_deriv_central (&F, x, err, &result, &abserr);
    
    return result;
}

double integral (funp f, double a, double b, double err)
{
    gsl_integration_workspace * w
    = gsl_integration_workspace_alloc (1000);
    
    double result, abserr;
    
    gsl_function F;
    F.function = f;
    
    gsl_integration_qags(&F, a, b, 0, err, 1000, w, &result, &abserr);
    gsl_integration_workspace_free (w);
    
    return result;
}
