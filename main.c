#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Resistor and Current Array declaration and initialisation
    int resistors[5] = {10,20,100,125,200};
    double currents[5] = {0.0,0.0,0.0,0.0,0.0};
    //Voltage value
    int voltage = 5;
    //for loop to calculate current
    for(int i=0;i<5;i++)
    {
        //calculating and storing current values into current array
        currents[i] = voltage / (float)resistors[i];
    }
    //displaying current flow
    int count = 0;
    for(int j=0;j<5;j++)
    {
        count++;
        printf("R%d %d ohms and i%d = %.2f A\n",count,resistors[j],count,currents[j]);
    }
    return 0;
}
