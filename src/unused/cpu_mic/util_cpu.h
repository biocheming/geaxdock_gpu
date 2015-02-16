#ifndef  UTIL_H
#define  UTIL_H


#include <cstring>
#include "size.h"
#include "size_gpu.cuh"
#include "dock.h"



// util.C

void Usage (char *);
void ParseArguments (int argc, char **argv, McPara *, ExchgPara *, InputFiles *);


void OptimizeLigand (const Ligand0 *, Ligand *, const ComplexSize);
void OptimizeProtein (const Protein0 *, Protein *, const EnePara0 *, const Ligand0 *, const ComplexSize);
void OptimizePsp (const Psp0 *, Psp *, const Ligand *, const Protein *);
void OptimizeKde (const Kde0 *, Kde *);
void OptimizeMcs (const Mcs0 *, Mcs *, const ComplexSize);
void OptimizeEnepara (const EnePara0 *, EnePara *);

//void SetWeight (EnePara *);
void InitLigCoord (Ligand *, const ComplexSize);
// void SetTemperature (Temp *, McPara *, const ComplexSize);
void SetTemperature (Temp *, ExchgPara *);
void SetReplica (Replica *, Ligand *, const ComplexSize);
void SetMcLog (McLog *);

void PrintMoveVector (const float*, const int);
void PrintMoveRecord (const LigRecord *, const int, const int, const int, const int, const int);
void PrintEnergy1 (const Energy *, const int, const int);
void PrintCsv (const Energy *, const int, const int, const int);
void PrintEnergy2 (const Energy *, const int, const int, const int);
void PrintEnergy3 (const Energy *, const int, const int, const int, const int);
void PrintLigRecord (LigRecord *,  int,  int,  int,  int,  int);
void PrintRepRecord (const LigRecord *, const int, const int, const int, const int, const int, const int);
void PrintRepRecord2 (LigRecord *,  ComplexSize,  int,  int,  int,  int,  int,  int);
void PrintLigCoord (const Ligand *, const int);
void PrintLigand (const Ligand *);
void PrintProtein (const Protein *);
void PrintDataSize (const Ligand *, const Protein *, const Psp *, const Kde *, const Mcs *, const EnePara *);
void PrintSummary (const InputFiles *, const McPara *, const Temp *, const McLog *, const ComplexSize *);

void DumpLigRecord (const LigRecord *, const int, const char*);

// float MyRand ();
// void InverseTrack (Ligand *, const ComplexSize);

int minimal_int (const int, const int);




#endif // UTIL_H


