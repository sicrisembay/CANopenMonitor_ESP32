#include "esp_log.h"
#include "CANopen.h"
#include "CO_app.h"
#include "CANopenNode_ESP32.h"

static const char *TAG = "CO_APP";
CO_t *CO = NULL;

int canopen_app_init()
{
    CO_ESP32_init();
    return 0;
}