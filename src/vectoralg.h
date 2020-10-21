/* 
Vectoralg-cpp

Vectoralg-cpp is a C++ version of vectoralg python module created for the purpose of simplifying the vector calculations such as finding the angle between vectors, projection of one vector over the other and much more...!

Developed by:

Vigneshwar Ravichandar
Moulishankar M R

*/

#include <iostream>
using namespace std;

// Class for vectoralg methods
class vectoralg
{
    public:

        // Function to find dot product
        int dot(int* a,int* b)
        {
            int res = 0;
	        for (int i=0;i<3;i++) 
            {
                res += a[i]*b[i];
            }
	        return res;
        }

        // Function to find cross product
        int* cross(int* a,int* b)
        {
            int res[3];
            res[0] = a[1] * b[2] - a[2] * b[1];
            res[1] = a[2] * b[0] - a[0] * b[2];
            res[2] = a[0] * b[1] - a[1] * b[0];
            return res;

        }

};

