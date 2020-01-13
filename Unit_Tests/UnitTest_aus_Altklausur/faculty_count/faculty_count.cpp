#include "faculty_count.h"

Faculty_Count::Faculty_Count()
{

}

int Faculty_Count::get_fac(int argument)
{
    int ret = 1;
    for(int i = 1; i <= argument; i++)
    {
        ret*=i;
    }
    return ret;
}


