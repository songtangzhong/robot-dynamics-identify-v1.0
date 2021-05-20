#ifndef ROBOT_MATH_H_
#define ROBOT_MATH_H_

//sign() function for element
#define sign(x) ((x>0.0 || x==0.0) ? 1.0 : -1.0)

//generate random numbers between interval [a,b]
#define random(a,b) (1.0*rand()/RAND_MAX*(b-a)+a)

#endif