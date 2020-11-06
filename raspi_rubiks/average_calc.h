//average_calc.h
#include <array>
using namespace std; 

struct Output
{
	float mean;
	float std;
};

//calculates the mean and std of data
Output calculateSD(int data[], int size)
{
	float sum = 0.0, mean, std = 0.0;
	int i;
	
	for(i = 0; i < size; i++)
    {
        sum += data[i];
    }
    
    mean = sum / size;
    
    for(i = 0; i < size; i++){
		std += pow(data[i]-mean,2);
	}
	std = sqrt(std/size);
	Output result = {mean, std};
	return result;
}
