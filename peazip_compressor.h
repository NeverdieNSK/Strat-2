#ifndef PEAZIP_COMPRESSOR_H
#define PEAZIP_COMPRESSOR_H
#include "compression.h"

class PeaZip_Compressor : public Compression
{
public:
    PeaZip_Compressor();
    void compress();
};




#endif // PEAZIP_COMPRESSOR_H
