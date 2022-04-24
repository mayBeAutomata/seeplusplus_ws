//      Lesson Two: Arithmetic Operation

/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/


#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{

    float pi = M_PI;
    int base = 3;
    int expo = 3;
    cout<< pow(base, expo)<<endl;
    cout<< pi <<endl;
    cout<<"\t\t\t Test over"<<endl;

    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    //float pi = M_PI;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = pow(cubeSide,3);
    volSphere = (4.0/3.0) * pi * (pow(sphereRadius,3));
    volCone = pi * (pow(coneRadius,2)) * (coneHeight/3);
    
    cout<< "\n\nVolumes: "<<endl;
    cout<< "\t\t Cube: "<<volCube<<endl;
    cout<< "\t\t Sphere: "<<volSphere<<endl;
    cout<< "\t\t Cone: "<<volCone<<endl;
    
    
    return 0;
}