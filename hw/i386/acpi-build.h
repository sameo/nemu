
#ifndef HW_I386_ACPI_BUILD_H
#define HW_I386_ACPI_BUILD_H

#include "hw/acpi/acpi.h"
#include "hw/acpi/bios-linker-loader.h"
#include "qapi/error.h"

void acpi_setup(MachineState *machine, AcpiConfiguration *conf);

#endif
