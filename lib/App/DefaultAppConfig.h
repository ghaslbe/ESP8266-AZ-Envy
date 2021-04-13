#ifndef __DEFAULT_APP_CONFIG_H__
#define __DEFAULT_APP_CONFIG_H__

#include <ESP8266WiFi.h>

#define DEFAULT_WIFI_SSID "AZ-Envy-%06x"
#define DEFAULT_WIFI_PASSWORD "12345678"
#define DEFAULT_WIFI_MODE WIFI_AP

#define DEFAULT_NET_MODE NET_MODE_DHCP
#define DEFAULT_NET_HOST "192.168.192.1"
#define DEFAULT_NET_MASK "255.255.255.0"
#define DEFAULT_NET_GATEWAY "192.168.192.1"
#define DEFAULT_NET_DNS "192.168.192.1"

#define DEFAULT_OTA_ENABLED false
#define DEFAULT_OTA_HOSTNAME "az-envy-%06x"
#define DEFAULT_OTA_PASSWORD "otapass"

#define DEFAULT_ADMIN_PASSWORD "admin"

#define DEFAULT_MQTT_ENABLED false
#define DEFAULT_MQTT_CLIENTID "az-envy-%06x"
#define DEFAULT_MQTT_HOST "192.168.1.1"
#define DEFAULT_MQTT_PORT 1883
#define DEFAULT_MQTT_USEAUTH true
#define DEFAULT_MQTT_USER "user"
#define DEFAULT_MQTT_PASSWORD "password"
#define DEFAULT_MQTT_TOPIC_TEMP_C "az-envy/%06x/temp-c"
#define DEFAULT_MQTT_TOPIC_TEMP_F "az-envy/%06x/temp-f"
#define DEFAULT_MQTT_TOPIC_HUMIDITY "az-envy/%06x/humidity"
#define DEFAULT_MQTT_TOPIC_LPG "az-envy/%06x/lpg"
#define DEFAULT_MQTT_TOPIC_CO "az-envy/%06x/co"
#define DEFAULT_MQTT_TOPIC_SMOKE "az-envy/%06x/smoke"
#define DEFAULT_MQTT_TOPIC_JSON "az-envy/%06x/json"
#define DEFAULT_MQTT_SENDING_INTERVAL 1

#define DEFAULT_OFFSET_C 0.0
#define DEFAULT_OFFSET_F 0.0

#define DEFAULT_FACTOR_LPG 100.0
#define DEFAULT_FACTOR_CO 100.0
#define DEFAULT_FACTOR_SMOKE 100.0

#define DEFAULT_SYSLOG_ENABLED false
#define DEFAULT_SYSLOG_HOST "192.168.1.1"
#define DEFAULT_SYSLOG_PORT 514
#define DEFAULT_SYSLOG_APP_NAME "az-envy"

#define DEFAULT_POWER_BUTTON_MODE POWER_BUTTON_MODE_TOGGLE_SWITCH

#define DEFAULT_LED_NIGHT_MODE_ENABLED false
#define DEFAULT_LED_NIGHT_MODE_TIMEOUT 15

#endif
