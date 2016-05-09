#ifndef BOOTHCORE_H
#define BOOTHCORE_H

class boothcore
{
    friend class MainWindow;
private:
    int multiplier;
    int multiplicand;
    int multiplierbits[8];
    int multiplicandbits[8];
    int cmultiplicandbits[8];
    int extrabits[8];
public:
    boothcore(int,int);
    void tobinary(int,int (&loc)[8] );

};

#endif
