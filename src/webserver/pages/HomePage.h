#ifndef _EW_SERVER_HOME_PAGE_H_
#define _EW_SERVER_HOME_PAGE_H_

#include <Arduino.h>
#include <database/StoreStruct.h>

static const char EW_SERVER_HOME_PAGE[] PROGMEM = "\
<h4>Please login to change settings</h4>\
<div>\
<a href='/login'>\
<button class='btn'>\
Click Here\
</button>\
</a>\
to login\
</div>";


#if defined( ENABLE_GPIO_CONFIG ) && defined( ENABLE_MQTT_CONFIG )

static const char EW_SERVER_HOME_AUTHORIZED_PAGE[] PROGMEM = "\
<div>\
\
<div>\
<a href='/login-config'>\
<button class='btn' style='min-width:125px;'>\
Login Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/smart-loo-config'>\
<button class='btn' style='min-width:125px;'>\
SmartLoo Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/wifi-config'>\
<button class='btn' style='min-width:125px;'>\
WiFi Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/ota-config'>\
<button class='btn' style='min-width:125px;'>\
OTA Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/mqtt-manage'>\
<button class='btn' style='min-width:125px;'>\
MQTT Manage\
</button>\
</a>\
</div>\
\
<div>\
<a href='/gpio-manage'>\
<button class='btn' style='min-width:125px;'>\
GPIO Manage\
</button>\
</a>\
</div>\
\
<div>\
<a href='/logout'>\
<button class='btn' style='min-width:125px;'>\
Logout\
</button>\
</a>\
</div>\
\
</div>";

#elif defined( ENABLE_GPIO_CONFIG )

static const char EW_SERVER_HOME_AUTHORIZED_PAGE[] PROGMEM = "\
<div>\
\
<div>\
<a href='/login-config'>\
<button class='btn' style='min-width:125px;'>\
Login Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/smart-loo-config'>\
<button class='btn' style='min-width:125px;'>\
SmartLoo Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/wifi-config'>\
<button class='btn' style='min-width:125px;'>\
WiFi Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/ota-config'>\
<button class='btn' style='min-width:125px;'>\
OTA Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/gpio-manage'>\
<button class='btn' style='min-width:125px;'>\
GPIO Manage\
</button>\
</a>\
</div>\
\
<div>\
<a href='/logout'>\
<button class='btn' style='min-width:125px;'>\
Logout\
</button>\
</a>\
</div>\
\
</div>";

#elif  defined( ENABLE_MQTT_CONFIG )

static const char EW_SERVER_HOME_AUTHORIZED_PAGE[] PROGMEM = "\
<div>\
\
<div>\
<a href='/login-config'>\
<button class='btn' style='min-width:125px;'>\
Login Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/smart-loo-config'>\
<button class='btn' style='min-width:125px;'>\
SmartLoo Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/wifi-config'>\
<button class='btn' style='min-width:125px;'>\
WiFi Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/ota-config'>\
<button class='btn' style='min-width:125px;'>\
OTA Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/mqtt-manage'>\
<button class='btn' style='min-width:125px;'>\
MQTT Manage\
</button>\
</a>\
</div>\
\
<div>\
<a href='/logout'>\
<button class='btn' style='min-width:125px;'>\
Logout\
</button>\
</a>\
</div>\
\
</div>";

#else

static const char EW_SERVER_HOME_AUTHORIZED_PAGE[] PROGMEM = "\
<div>\
\
<div>\
<a href='/login-config'>\
<button class='btn' style='min-width:125px;'>\
Login Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/smart-loo-config'>\
<button class='btn' style='min-width:125px;'>\
SmartLoo Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/wifi-config'>\
<button class='btn' style='min-width:125px;'>\
WiFi Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/ota-config'>\
<button class='btn' style='min-width:125px;'>\
OTA Settings\
</button>\
</a>\
</div>\
\
<div>\
<a href='/logout'>\
<button class='btn' style='min-width:125px;'>\
Logout\
</button>\
</a>\
</div>\
\
</div>";
#endif

#endif