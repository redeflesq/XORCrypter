#include <Windows.h>

#define MALLOC(size) HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define MFREE(ptr) HeapFree(GetProcessHeap(), NULL, ptr)

#define STUB_DEFAULT_KEY "oUf!rOsj6x*FgyNjBuTuW#R0jZSOg!kD1D8ZYc$YDZbgiXaoxVS@xCOW%y%sdVES"
#define STUB_DEFAULT_SEPARATOR "mxE98lDhF6mGxJd6"

PUCHAR GenerateRandomString(UINT size);
UINT FindSig(PUCHAR bin, UINT bin_size, PUCHAR find, UINT find_size, UINT count);
VOID XORBinary(PUCHAR bin, UINT bin_size, PUCHAR key, UINT key_size);