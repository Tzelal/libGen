#ifndef RANGELIB_H_INCLUDED
#define RANGELIB_H_INCLUDED

#include<stdint.h>

float path(float au32_IN, float au32_INmin, float au32_INmax, float au32_OUTmin, float au32_OUTmax);

float path(float au32_IN, float au32_INmin, float au32_INmax, float au32_OUTmin, float au32_OUTmax)
{
	return ((((au32_IN - au32_INmin)*(au32_OUTmax - au32_OUTmin))/(au32_INmax - au32_INmin)) + au32_OUTmin);
}

#endif // RANGELIB_H_INCLUDED
