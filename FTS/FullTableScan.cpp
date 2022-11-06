#include "FullTableScan.h"

bool FTS (long long v[], unsigned long n, long long x){
	for(unsigned long i=0; i<n; i++) if(v[i] == x) return true;

	return false;
}
