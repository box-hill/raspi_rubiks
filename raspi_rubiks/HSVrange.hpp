// HSVrange.hpp
// store HSV color threshold values here

#ifndef HSVrange_hpp
#define HSVrange_hpp

// White and Black have S values less than 50.
// Yellow, Green, Blue, Red > 50
#define HSV_S 55

//White has V value > 75. Black has V value <75
#define HSV_V 75 

//the spectrum follows the pattern  O Y G B R
//HSV_H_YG is the threshold between Yellow and Green
//if color detection is not accurate, consider adding individual upper bound values
#define HSV_H_OY 20 //20
#define HSV_H_YG 50 //50
#define HSV_H_GB 82 //110
#define HSV_H_BR 150 //140
#define HSV_H_RO 2 //178


#endif /* HSVrange_hpp */
