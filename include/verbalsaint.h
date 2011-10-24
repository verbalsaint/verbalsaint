#ifndef VERBALSAINT_H
#define VERBALSAINT_H
#include "verbalsaintdef.h"

//legacy--
#define VERBALSAINTBEGIN namespace VERBALSAINT{
#define VERBALSAINTEND  }
#define VsEXCEPTIONBEGIN namespace VSEXCEPTION{
#define VsEXCEPTIONEND  }

#define TBBBEGIN namespace TBB{
#define TBBEND  }

#define VsMATRIXBEGIN namespace VSMATRIX{
#define VsMATRIXEND }

#define VsARGBEGIN namespace VSARG{
#define VsARGEND    }

#define VsPCAPBEGIN namespace VSPCAP{
#define VsPCAPEND   }
//legacy end


#define VERBALSAINTNS(X) namespace VERBALSAINT{ namespace X{
#define VERBALSAINTNSEND }}

#define UV(X) using namespace VERBALSAINT::X;


#endif // VERBALSAINT_H
