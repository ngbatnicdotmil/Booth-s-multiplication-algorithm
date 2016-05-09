#include "boothcore.h"

boothcore::boothcore(int multiplicand,int multiplier)
{
    this->multiplicand=multiplicand;
    this->multiplier=multiplier;
    tobinary(multiplicand,multiplicandbits);
    tobinary(multiplier,multiplierbits);
    tobinary(-multiplicand,this->cmultiplicandbits);
}
void boothcore::tobinary(int num,int (&loc)[8]){

    int i;
    for(i=0;i<=7;i++){
    int temp=num>>i;
    loc[7-i]=temp&1;
    }

}

