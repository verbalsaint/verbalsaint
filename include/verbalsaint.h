#ifndef VERBALSAINT_H
#define VERBALSAINT_H

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


#define VERBALSAINTNS(X) namespace VERBALSAINT{ namespace X{
#define VERBALSAINTNSEND }}

#endif // VERBALSAINT_H
