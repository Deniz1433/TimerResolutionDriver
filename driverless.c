#include <ntddk.h>

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    UNREFERENCED_PARAMETER(DriverObject);
    UNREFERENCED_PARAMETER(RegistryPath);

    // Request 0.532 ms timer resolution (5320 * 100 ns = 5320 x 100 ns = 0.532 ms)
    ExSetTimerResolution(5320, TRUE);

    // No further actions; return success.
    return STATUS_SUCCESS;
}
